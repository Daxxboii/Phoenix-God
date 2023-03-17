// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "Sun"
{
	Properties
	{
		_Float0("Float 0", Range( -100 , 100)) = 0
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "Transparent"  "Queue" = "Geometry+0" "IgnoreProjector" = "True" "IsEmissive" = "true"  }
		Cull Back
		Blend SrcAlpha OneMinusSrcAlpha
		CGPROGRAM
		#pragma target 3.0
		#pragma surface surf Standard keepalpha noshadow exclude_path:deferred 
		struct Input
		{
			float3 worldPos;
		};

		uniform half _Float0;

		void surf( Input i , inout SurfaceOutputStandard o )
		{
			half4 color38 = IsGammaSpace() ? half4(0.7830189,0.7534946,0.3952029,0) : half4(0.5754442,0.5279821,0.1295311,0);
			o.Emission = color38.rgb;
			float3 ase_worldPos = i.worldPos;
			half temp_output_48_0 = ( _Float0 - ase_worldPos.y );
			o.Alpha = temp_output_48_0;
		}

		ENDCG
	}
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=18800
0;438;912;422;1758.547;27.81518;2.158031;True;False
Node;AmplifyShaderEditor.WorldPosInputsNode;43;-1199.82,-51.22118;Inherit;True;0;4;FLOAT3;0;FLOAT;1;FLOAT;2;FLOAT;3
Node;AmplifyShaderEditor.RangedFloatNode;34;-1148.74,255.5115;Inherit;True;Property;_Float0;Float 0;8;0;Create;True;0;0;0;False;0;False;0;-0.1383476;-100;100;0;1;FLOAT;0
Node;AmplifyShaderEditor.ColorNode;38;-397.4072,80.63;Inherit;False;Constant;_Color0;Color 0;3;0;Create;True;0;0;0;False;0;False;0.7830189,0.7534946,0.3952029,0;0,0,0,0;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SimpleSubtractOpNode;48;-737.6948,250.6811;Inherit;True;2;0;FLOAT;2;False;1;FLOAT;0.5;False;1;FLOAT;0
Node;AmplifyShaderEditor.NormalizeNode;44;-499.9186,593.346;Inherit;True;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;50;21.01125,252.2524;Float;False;True;-1;2;ASEMaterialInspector;0;0;Standard;Sun;False;False;False;False;False;False;False;False;False;False;False;False;False;False;True;False;False;False;False;False;False;Back;0;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Custom;1;True;False;0;False;Transparent;;Geometry;ForwardOnly;14;all;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;False;2;5;False;-1;10;False;-1;0;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;Relative;0;;-1;-1;-1;-1;0;False;0;0;False;-1;-1;0;False;-1;0;0;0;False;0.1;False;-1;0;False;-1;False;16;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT;0;False;4;FLOAT;0;False;5;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;48;0;34;0
WireConnection;48;1;43;2
WireConnection;44;0;48;0
WireConnection;50;2;38;0
WireConnection;50;9;48;0
ASEEND*/
//CHKSM=0349D5303ADFD95F20FD3DCCFA562A3925119AFD