﻿//================================================================================================================================
//
//  Copyright (c) 2015-2021 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
//  EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
//  and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//================================================================================================================================

Shader "EasyAR/CameraImage_YUV_I420_YV12"
{
    Properties
    {
        _yTexture("Texture", 2D) = "white" {}
        _uTexture("Texture", 2D) = "white" {}
        _vTexture("Texture", 2D) = "white" {}
    }
        SubShader
    {
        Tags { "RenderType" = "Opaque" }
        LOD 100

        Pass
        {
            Cull Off
            ZWrite Off
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 texcoord : TEXCOORD0;
            };

            struct v2f
            {
                float4 vertex : SV_POSITION;
                float2 texcoord : TEXCOORD0;
            };

            sampler2D _yTexture;
            sampler2D _uTexture;
            sampler2D _vTexture;
            float4x4 _projection;

            v2f vert(appdata i)
            {
                v2f o;
                o.vertex = mul(_projection, i.vertex);
                if (_ProjectionParams.x < 0) // check if the render target is a texture rather than the screen, https://docs.unity3d.com/Manual/SL-PlatformDifferences.html
                {
                    o.vertex.y = -o.vertex.y;
                }
                o.texcoord = float2(i.texcoord.x, 1.0 - i.texcoord.y); // Texture2D.LoadRawTextureData follows OpenGL convention and will invert Y-axis for uncompressed data on all platforms
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                const float4x4 ycbcrToRGBTransform = float4x4(
                    float4(1.0, +0.0000, +1.4020, -0.7010),
                    float4(1.0, -0.3441, -0.7141, +0.5291),
                    float4(1.0, +1.7720, +0.0000, -0.8860),
                    float4(0.0, +0.0000, +0.0000, +1.0000)
                    );
                float y = tex2D(_yTexture, i.texcoord).a;
                float cb = tex2D(_uTexture, i.texcoord).a;
                float cr = tex2D(_vTexture, i.texcoord).a;
                float4 ycbcr = float4(y, cb, cr, 1.0);
                float4 col = mul(ycbcrToRGBTransform, ycbcr);
#ifndef UNITY_COLORSPACE_GAMMA
                col.xyz = GammaToLinearSpace(col.xyz);
#endif
                return col;
            }
            ENDCG
        }
    }
}
