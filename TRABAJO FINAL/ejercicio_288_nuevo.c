#include <stdio.h>
float PRECIO_HORA_GRUPAL=10.0;
float PRECIO_HORA_INDIVIDUAL=25.0;
float PRECIO_HORA_ONLINE=8.0;
float DESC_BASICO=0.1;
float RECARGO_AVANZADO=1.2;
float costo_curso=0.0;
float precio_hora=0.0;
int horas_curso=0;
int idioma=0;
//B=basico, I=intermedio, A=avanzado
char nivel;
//G=grupal, I=individual, O=online
char modalidad;
void main(){
    printf("Ingrese las horas que dura su curso: \n");
    scanf(" %d", &horas_curso);
    printf("Ingrese el idioma del curso que realizo (1=Ingles, 2=Ruso, 3=Aleman, 4=Frances, 5=Portugues, 6=ESpañol) \n");
    scanf(" %d", &idioma);
    printf("Ingrese el nivel de su curso (B=basico, I=intermedio, A=avanzado): \n");
    scanf(" %c", &nivel);
    printf("Ingrese la modalidad del curso (G=grupal, I=individual, O=online): \n");
    scanf(" %c", &modalidad);

   precio_hora= (modalidad=='G')? PRECIO_HORA_GRUPAL : ((modalidad=='I')? PRECIO_HORA_INDIVIDUAL : (modalidad=='O')? PRECIO_HORA_ONLINE : printf("OPCION NO VALIDA \n"));
   costo_curso= horas_curso*precio_hora;
   if (nivel=='B') {
        costo_curso=costo_curso-(costo_curso*DESC_BASICO);
   }else if (nivel=='A') {
        costo_curso=costo_curso + RECARGO_AVANZADO;
   }
   printf("El costo total de su curso es: $ %.2f", costo_curso);

}

