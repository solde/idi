#version 330 core

in vec3 vertex;
in vec3 normal;

in vec3 matamb;
in vec3 matdiff;
in vec3 matspec;
in float matshin;

uniform mat4 proj;
uniform mat4 view;
uniform mat4 TG;

// Valors per als components que necessitem dels focus de llum
vec3 colFocus = vec3(0.8, 0.8, 0.8);
vec3 llumAmbient = vec3(0.2, 0.2, 0.2);
vec3 posFocus = vec3(1, 0, 1);  // en SCA

out vec3 fcolor;

out vec3 OvertexSCO

void main()
{	

    vec4 vertSCO = (view * TG * vec4 (vertex, 1.0));              //SCO
    mat3 normalMatrix = inverse (transpose (mat3 (view * TG)));   //
    vec3 normalSCO =  normalize(normalMatrix * normal);
    vec4 focusSCO = view * vec4(posFocus,1.0);                    // punt de llum a l'escena
    //vec4 focusSCO = vec4(posFocus,1.0);                         // punt de llum a la cam
    vec3 L = normalize(focusSCO.xyz - vertSCO.xyz);

    gl_Position = proj * view * TG * vec4 (vertex, 1.0);
}
