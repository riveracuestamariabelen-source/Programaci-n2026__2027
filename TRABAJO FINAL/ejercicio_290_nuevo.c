#include <stdio.h>
float PRECIO_BASE= 20.0;
float FACTOR_JUNIOR=1.0;
float FACTOR_SENIOR=1.5;
float FACTOR_MASTER=2.0;
float FACTOR_LARGO=1.5;
float RECARGO_URG=1.3;
float costo=0.0;
//C=corte, T=tinte, M=maquillaje, P= peinado
char tipo_servicio;
float duracion=0.0;
//J=junior, S=senior, M=master
char nivel_estilista;
//C=corto, M=mediano, L=largo
char tipo_cabello;
int urgencia;
float factor=0.0;
float recargo=0.0;
void main(){
    printf("Ingrese el tipo de servicio (C=corte, T=tinte, M=maquillaje, P= peinado):\n");
    scanf(" %c", &tipo_servicio);
    printf("Ingrese la duracion de servicio en horas:\n" );
    scanf(" %f", &duracion);
    printf("Ingrese la urgencia por el tratamiento (1= urgente, 0=no es urgente):\n");
    scanf(" %d", &urgencia);
    printf("Ingrese su tipo de cabello (C=corto, M=mediano, L=largo):\n");
    scanf(" %c", &tipo_cabello);
    printf("Ingrese el nivel del estilista (J=junior, S=senior, M=master):\n");
    scanf(" %c", &nivel_estilista);
    factor= (nivel_estilista=='S')? FACTOR_SENIOR : ((nivel_estilista=='J')? FACTOR_JUNIOR : ((nivel_estilista=='M')? FACTOR_MASTER : printf("OPCION NO VALIDA")));
    FACTOR_LARGO= (tipo_cabello=='C' || tipo_cabello == 'M')? FACTOR_LARGO*0 : FACTOR_LARGO;
    recargo= (urgencia==1)? recargo=RECARGO_URG : recargo;
    costo=PRECIO_BASE + factor + FACTOR_LARGO + recargo;
    printf("El costo total de su servicio es: %.2f \n", costo);
    printf("Su servicio tiene una duracion de: %.2f \n", duracion);
    printf("Su tipo de cabello es: %c \n", tipo_cabello);

}


