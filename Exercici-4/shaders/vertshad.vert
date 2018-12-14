#version 330 core

in vec3 vertex;
in vec3 normal;

in vec3 matamb;
in vec3 matdiff;
in vec3 matspec;
in float matshin;

out vec3 normalSCOF;
out vec4 vertSCOF;

out vec3 matambF;
out vec3 matdiffF;
out vec3 matspecF;
out float matshinF;

uniform mat4 proj;
uniform mat4 view;
uniform mat4 TG;
uniform int cam;

// Valors per als components que necessitem dels focus de llum
vec3 colFocus = vec3(0.8, 0.8, 0.8);
vec3 llumAmbient = vec3(0.2, 0.2, 0.2);
vec3 posFocus = vec3(0, 2, 0);
uniform vec3 posFocus1;
uniform vec3 posFocus2;

out vec3 fcolor;

void main()
{	

    vec4 vertSCO = (view * TG * vec4 (vertex, 1.0));              //SCO
    mat3 normalMatrix = inverse (transpose (mat3 (view * TG)));   //
    vec3 normalSCO =  normalize(normalMatrix * normal);

    vertSCOF = vertSCO;
    normalSCOF = normalSCO;

    matambF = matamb;
    matdiffF = matdiff;
    matspecF = matspec;
    matshinF = matshin;

    gl_Position = proj * view * TG * vec4 (vertex, 1.0);
}
