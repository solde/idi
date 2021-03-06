#version 330 core

in vec3 fcolor;
out vec4 FragColor;

in vec3 normalSCOF;
in vec4 vertSCOF;

in vec3 matambF;
in vec3 matdiffF;
in vec3 matspecF;
in float matshinF;

uniform mat4 proj;
uniform mat4 view;
uniform mat4 TG;
uniform int cam;

vec3 colFocus = vec3(0.8, 0.8, 0.8);
vec3 llumAmbient = vec3(0.2, 0.2, 0.2);
vec3 posFocus = vec3(0, 0, 0);  // en SCA

uniform vec3 posFocus1;
uniform vec3 posFocus2;

vec3 Lambert (vec3 NormSCO, vec3 L) 
{
    // S'assumeix que els vectors que es reben com a paràmetres estan normalitzats



    // Inicialitzem color a component ambient
    vec3 colRes = llumAmbient * matambF;

    // Afegim component difusa, si n'hi ha
    if (dot (L, NormSCO) > 0)
      colRes = colRes + colFocus * matdiffF * dot (L, NormSCO);
    return (colRes);
}

vec3 Phong (vec3 NormSCO, vec3 L, vec4 vertSCO) 
{
    // Els vectors estan normalitzats

    // Inicialitzem color a Lambert
    vec3 colRes = Lambert (NormSCO, L);

    // Calculem R i V
    if (dot(NormSCO,L) < 0)
      return colRes;  // no hi ha component especular

    vec3 R = reflect(-L, NormSCO); // equival a: normalize (2.0*dot(NormSCO,L)*NormSCO - L);
    vec3 V = normalize(-vertSCO.xyz);

    if ((dot(R, V) < 0) || (matshinF == 0))
      return colRes;  // no hi ha component especular
    
    // Afegim la component especular
    float shine = pow(max(0.0, dot(R, V)), matshinF);
    return (colRes + matspecF * colFocus * shine); 
}

void main()
{	
  vec4 focusSCO;
    if(cam == 1){
		  focusSCO = view * vec4(posFocus1,1.0);
	  }
    if(cam == 2){
		  focusSCO = view * vec4(posFocus2,1.0); 
	  }
    if(cam == 0){
		  focusSCO = vec4(posFocus,1.0);
	  }
  vec3 L = normalize(focusSCO.xyz - vertSCOF.xyz);
	FragColor = vec4(Phong(normalSCOF, L, vertSCOF),1);	
}
