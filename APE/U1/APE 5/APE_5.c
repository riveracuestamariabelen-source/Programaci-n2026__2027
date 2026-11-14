#include <stdio.h>

void main (){
    float c1=0.0;
    float c2=0.0;
    float c3=0.0;
    float nCertamenes=0.0;
    float nlab=0.0;
    float n_Min_Aprobar=6;

    printf("Ingrese la calificacion obtenida en el certamen uno:\n");
    scanf("%f", &c1);
    printf("Ingrese la calificacion obtenida en el certamen dos:\n");
    scanf("%f", &c2);
    printf("Ingrese la calificacion de laboratorio obtenida en los tres certamenes:\n");
    scanf("%f", &nlab);
    nCertamenes= (n_Min_Aprobar-(nlab * 0.3))/0.7;
    c3=(3*nCertamenes)-c1-c2;
    (c3>0)? printf("La nota que necesitas en el certamen 3 para aprobar la asignatura es: %.2f", c3) : 
    printf("Usted esta aprobado sin esa nota");
}