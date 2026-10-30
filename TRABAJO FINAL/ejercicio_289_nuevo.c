#include <stdio.h>
float PH_MIN=6.5;
float PH_MAX=8.5;
float TURBIDEZ_MAX= 5.0;
float CLORO_MIN=0.2;
int BACTERIAS_MAX=100;
float ph=0.0;
float turbidez=0.0;
float nivel_cloro=0.0;
float nivel_bacterias=0.0;
//P=pozo, R=río, A=agua potable
char tipo_de_fuente;
void main(){
    printf("Ingrese el PH registrado del agua potable: \n");
    scanf(" %f", &ph);
    printf("Ingrese la turbidez registrada en el suministro de agua potable: \n");
    scanf(" %f", &turbidez);
    printf("Ingrese el nivel de cloro registrado en el suministro de agua: \n");
    scanf(" %f", &nivel_cloro);
    printf("Ingrese el nivel de bacterias detectadas en el suministro: \n");
    scanf(" %d", &nivel_bacterias);
    (ph>PH_MAX || ph<PH_MIN)? printf("ALERTA. El PH del agua no es adecuado se recomienda un rango de %.2f - %.2f \n", PH_MAX, PH_MIN) : printf("El ph esta dentro del rango, es seguro el consumo de agua \n");
    (turbidez>TURBIDEZ_MAX)? printf("ALERTA. La turbidez del agua es elevada, se recomienda no consumirla sin antes hervirla \n") : printf("El agua se encuentra en condiciones optimas con respecto a su turbidez \n");
    (nivel_cloro<CLORO_MIN)? printf("Se ha detectado niveles de cloro por debajo del limite seguro en el suministro, se recomienda usar agua embotellada \n"): printf(" \n");
    (nivel_bacterias>BACTERIAS_MAX)? printf("ALERTA. Se ha detectado una concentracion bacteriana por encima de los limites seguros. NO BEBA NI USE EL AGUA DEL GRIFO \n"): printf(" \n");
}

