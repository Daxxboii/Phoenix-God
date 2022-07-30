// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "Burning Effect"
{
	Properties
	{
		_Cloudstexture("Clouds texture", 2D) = "white" {}
		_NormalMap("Normal Map", 2D) = "bump" {}
		_DistortionAmount("Distortion Amount", Range( 0 , 1)) = 1
		_ScrollSpeed("Scroll Speed", Range( 0 , 1)) = 1
		_Warm("Warm", Color) = (1,0.4486697,0,1)
		_Hot("Hot", Color) = (1,0.08989841,0,1)
		_Contrast("Contrast", Float) = 2
		_Burn("Burn", Range( 0 , 1.1)) = 0
		_Normal("Normal", 2D) = "bump" {}
		_HeatWave("Heat Wave", Range( 0 , 1)) = 0
		_Texture0("Texture 0", 2D) = "white" {}
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "Transparent"  "Queue" = "Geometry+0" "IgnoreProjector" = "True" "IsEmissive" = "true"  }
		Cull Off
		Blend SrcAlpha OneMinusSrcAlpha
		
		AlphaToMask On
		CGPROGRAM
		#include "UnityShaderVariables.cginc"
		#pragma target 3.0
		#pragma surface surf Standard keepalpha noshadow 
		struct Input
		{
			float2 uv_texcoord;
		};

		uniform sampler2D _Normal;
		uniform float4 _Normal_ST;
		uniform sampler2D _Texture0;
		uniform float4 _Texture0_ST;
		uniform float _Contrast;
		uniform float4 _Warm;
		uniform float4 _Hot;
		uniform sampler2D _Cloudstexture;
		uniform sampler2D _NormalMap;
		uniform float4 _NormalMap_ST;
		uniform float _DistortionAmount;
		uniform float _ScrollSpeed;
		uniform float _HeatWave;
		uniform float _Burn;

		void surf( Input i , inout SurfaceOutputStandard o )
		{
			float2 uv_Normal = i.uv_texcoord * _Normal_ST.xy + _Normal_ST.zw;
			o.Normal = UnpackNormal( tex2D( _Normal, uv_Normal ) );
			float2 uv_Texture0 = i.uv_texcoord * _Texture0_ST.xy + _Texture0_ST.zw;
			o.Albedo = tex2D( _Texture0, uv_Texture0 ).rgb;
			float2 uv_NormalMap = i.uv_texcoord * _NormalMap_ST.xy + _NormalMap_ST.zw;
			float temp_output_15_0 = ( _Time.y * _ScrollSpeed );
			float2 panner12 = ( temp_output_15_0 * float2( 0,-1 ) + float2( 0,0 ));
			float2 uv_TexCoord10 = i.uv_texcoord + panner12;
			float4 lerpResult19 = lerp( _Warm , _Hot , tex2D( _Cloudstexture, ( ( (tex2D( _NormalMap, uv_NormalMap )).rg * _DistortionAmount ) + uv_TexCoord10 ) ));
			float4 temp_cast_1 = (_Contrast).xxxx;
			float2 panner36 = ( temp_output_15_0 * float2( 0,-1 ) + i.uv_texcoord);
			float4 tex2DNode23 = tex2D( _Cloudstexture, ( ( (tex2D( _NormalMap, panner36 )).rgba * _HeatWave ) + float4( i.uv_texcoord, 0.0 , 0.0 ) ).rg );
			float temp_output_24_0 = step( tex2DNode23.r , _Burn );
			float temp_output_30_0 = ( _Burn / 1.1 );
			o.Emission = ( ( _Contrast * pow( lerpResult19 , temp_cast_1 ) ) * ( ( temp_output_24_0 - step( tex2DNode23.r , temp_output_30_0 ) ) + temp_output_24_0 ) ).rgb;
			o.Alpha = ( step( ( 1.0 - _Burn ) , tex2DNode23.r ) - step( ( 1.0 - temp_output_30_0 ) , tex2DNode23.r ) );
		}

		ENDCG
	}
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=18935
0;0;1920;1058;-314.7579;-800.0472;2.549715;True;True
Node;AmplifyShaderEditor.RangedFloatNode;16;-1288.096,1024.626;Inherit;False;Property;_ScrollSpeed;Scroll Speed;4;0;Create;True;0;0;0;False;0;False;1;1;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleTimeNode;14;-1215.096,813.6256;Inherit;False;1;0;FLOAT;1;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;15;-850.0964,919.6256;Inherit;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.TextureCoordinatesNode;37;-2110.139,1646.802;Inherit;True;0;-1;2;3;2;SAMPLER2D;;False;0;FLOAT2;1,1;False;1;FLOAT2;0,0;False;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.TexturePropertyNode;5;-1856.826,461.8164;Inherit;True;Property;_NormalMap;Normal Map;1;0;Create;True;0;0;0;False;0;False;e2b4efb3c32506c409bcc2813125ef92;e2b4efb3c32506c409bcc2813125ef92;True;bump;Auto;Texture2D;-1;0;2;SAMPLER2D;0;SAMPLERSTATE;1
Node;AmplifyShaderEditor.PannerNode;36;-1742.139,1678.802;Inherit;True;3;0;FLOAT2;0,0;False;2;FLOAT2;0,-1;False;1;FLOAT;1;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SamplerNode;6;-871.7396,288.7033;Inherit;True;Property;_TextureSample1;Texture Sample 1;3;0;Create;True;0;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;35;-1358.139,1662.802;Inherit;True;Property;_TextureSample3;Texture Sample 3;11;0;Create;True;0;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.ComponentMaskNode;38;-910.1389,1790.802;Inherit;False;True;True;True;True;1;0;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.RangedFloatNode;39;-846.1389,2014.803;Inherit;False;Property;_HeatWave;Heat Wave;10;0;Create;True;0;0;0;False;0;False;0;0.49;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.ComponentMaskNode;7;-470.433,319.7174;Inherit;False;True;True;False;False;1;0;COLOR;0,0,0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.RangedFloatNode;9;-660.269,609.6752;Float;False;Property;_DistortionAmount;Distortion Amount;3;0;Create;True;0;0;0;True;0;False;1;1;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.PannerNode;12;-601.3229,826.395;Inherit;True;3;0;FLOAT2;0,0;False;2;FLOAT2;0,-1;False;1;FLOAT;1;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;40;-574.139,1902.802;Inherit;True;2;2;0;COLOR;0,0,0,0;False;1;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.TextureCoordinatesNode;41;-705.8892,2207.815;Inherit;False;0;-1;2;3;2;SAMPLER2D;;False;0;FLOAT2;1,1;False;1;FLOAT2;0,0;False;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.TextureCoordinatesNode;10;-197.886,734.3365;Inherit;True;0;-1;2;3;2;SAMPLER2D;;False;0;FLOAT2;1,1;False;1;FLOAT2;0,0;False;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;8;-105.3741,504.6289;Inherit;False;2;2;0;FLOAT2;0,0;False;1;FLOAT;0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.RangedFloatNode;31;177.9528,1693.327;Inherit;False;Constant;_Divide;Divide;11;0;Create;True;0;0;0;False;0;False;1.1;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleAddOpNode;42;-230.6801,2177.33;Inherit;False;2;2;0;COLOR;0,0,0,0;False;1;FLOAT2;0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.RangedFloatNode;25;250.3708,1508.655;Inherit;False;Property;_Burn;Burn;8;0;Create;True;0;0;0;False;0;False;0;0.629;0;1.1;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleAddOpNode;11;159.114,723.3365;Inherit;False;2;2;0;FLOAT2;0,0;False;1;FLOAT2;0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.TexturePropertyNode;3;-606.3445,-222.0011;Inherit;True;Property;_Cloudstexture;Clouds texture;0;0;Create;True;0;0;0;True;0;False;9728c7ecba136224887f81be16cc5d75;9728c7ecba136224887f81be16cc5d75;False;white;Auto;Texture2D;-1;0;2;SAMPLER2D;0;SAMPLERSTATE;1
Node;AmplifyShaderEditor.SimpleDivideOpNode;30;499.5528,1720.526;Inherit;False;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.ColorNode;17;-59.54551,-405.2321;Inherit;False;Property;_Warm;Warm;5;0;Create;True;0;0;0;False;0;False;1,0.4486697,0,1;1,0.4486697,0,1;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;4;251.8884,249.1409;Inherit;True;Property;_TextureSample0;Texture Sample 0;2;0;Create;True;0;0;0;False;0;False;3;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;23;249.8811,1247.438;Inherit;True;Property;_TextureSample2;Texture Sample 2;8;0;Create;True;0;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.ColorNode;18;-53.37452,-233.1487;Inherit;False;Property;_Hot;Hot;6;0;Create;True;0;0;0;False;0;False;1,0.08989841,0,1;1,0.08989827,0,1;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;22;644.2742,99.2384;Inherit;False;Property;_Contrast;Contrast;7;0;Create;True;0;0;0;False;0;False;2;2;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.StepOpNode;29;803.8707,1516.86;Inherit;True;2;0;FLOAT;0;False;1;FLOAT;0.44;False;1;FLOAT;0
Node;AmplifyShaderEditor.StepOpNode;24;754.3176,1215.977;Inherit;True;2;0;FLOAT;0;False;1;FLOAT;0.44;False;1;FLOAT;0
Node;AmplifyShaderEditor.LerpOp;19;521.1572,-150.3563;Inherit;True;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.OneMinusNode;44;1233.192,1979.429;Inherit;True;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleSubtractOpNode;33;1131.661,1331.949;Inherit;True;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.OneMinusNode;43;1273.459,2572.46;Inherit;True;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.PowerNode;20;837.3381,-367.5604;Inherit;True;False;2;0;COLOR;0,0,0,0;False;1;FLOAT;1;False;1;COLOR;0
Node;AmplifyShaderEditor.TexturePropertyNode;49;2728.611,155.4257;Inherit;True;Property;_Texture0;Texture 0;11;0;Create;True;0;0;0;False;0;False;None;6137995bbeee3e04a9447753e6d3a579;False;white;Auto;Texture2D;-1;0;2;SAMPLER2D;0;SAMPLERSTATE;1
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;21;1093.176,-129.8354;Inherit;True;2;2;0;FLOAT;0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleAddOpNode;34;1293.244,904.1704;Inherit;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.StepOpNode;45;1635.541,2277.207;Inherit;True;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.StepOpNode;46;1617.542,1910.816;Inherit;True;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;26;1584.824,583.5779;Inherit;True;2;2;0;COLOR;0,0,0,0;False;1;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.SamplerNode;28;1504.454,-76.69279;Inherit;True;Property;_Normal;Normal;9;0;Create;True;0;0;0;False;0;False;-1;None;d0bf026e9ba99ec41b4d607aa3cf4680;True;0;True;bump;Auto;True;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;FLOAT3;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SimpleSubtractOpNode;47;1969.644,2027.439;Inherit;True;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SamplerNode;48;3082.456,679.9169;Inherit;True;Property;_TextureSample4;Texture Sample 4;11;0;Create;True;0;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;0;3472.915,1304.994;Float;False;True;-1;2;ASEMaterialInspector;0;0;Standard;Burning Effect;False;False;False;False;False;False;False;False;False;False;False;False;False;False;True;False;False;False;False;False;False;Off;0;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Custom;0.5;True;False;0;True;Transparent;;Geometry;All;16;all;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;False;2;5;False;-1;10;False;-1;0;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;True;Relative;0;;2;-1;-1;-1;0;True;0;0;False;-1;-1;0;False;-1;0;0;0;False;0.1;False;-1;0;False;-1;False;16;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT;0;False;4;FLOAT;0;False;5;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;15;0;14;0
WireConnection;15;1;16;0
WireConnection;36;0;37;0
WireConnection;36;1;15;0
WireConnection;6;0;5;0
WireConnection;35;0;5;0
WireConnection;35;1;36;0
WireConnection;38;0;35;0
WireConnection;7;0;6;0
WireConnection;12;1;15;0
WireConnection;40;0;38;0
WireConnection;40;1;39;0
WireConnection;10;1;12;0
WireConnection;8;0;7;0
WireConnection;8;1;9;0
WireConnection;42;0;40;0
WireConnection;42;1;41;0
WireConnection;11;0;8;0
WireConnection;11;1;10;0
WireConnection;30;0;25;0
WireConnection;30;1;31;0
WireConnection;4;0;3;0
WireConnection;4;1;11;0
WireConnection;23;0;3;0
WireConnection;23;1;42;0
WireConnection;29;0;23;1
WireConnection;29;1;30;0
WireConnection;24;0;23;1
WireConnection;24;1;25;0
WireConnection;19;0;17;0
WireConnection;19;1;18;0
WireConnection;19;2;4;0
WireConnection;44;0;30;0
WireConnection;33;0;24;0
WireConnection;33;1;29;0
WireConnection;43;0;25;0
WireConnection;20;0;19;0
WireConnection;20;1;22;0
WireConnection;21;0;22;0
WireConnection;21;1;20;0
WireConnection;34;0;33;0
WireConnection;34;1;24;0
WireConnection;45;0;43;0
WireConnection;45;1;23;1
WireConnection;46;0;44;0
WireConnection;46;1;23;1
WireConnection;26;0;21;0
WireConnection;26;1;34;0
WireConnection;47;0;45;0
WireConnection;47;1;46;0
WireConnection;48;0;49;0
WireConnection;0;0;48;0
WireConnection;0;1;28;0
WireConnection;0;2;26;0
WireConnection;0;9;47;0
ASEEND*/
//CHKSM=DC88DD9041CA011F782E10663276516B03C4A387