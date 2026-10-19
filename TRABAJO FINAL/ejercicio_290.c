#include <stdio.h>
//biblioteca para usar booleanos
#include <stdbool.h>
//constantes
int DIA_MAX=31;
int MES_MAX=12;
int ANO_MAX=2025;
int dia=0;
int mes=0;
int ano=0;
bool fecha_valida=true;
int edad=0;
bool calculo_edad=true;
void main(){
    printf("Ingrese su dia de nacimiento: \n");
    scanf("%d", &dia);
    printf("Ingrese el mes de nacimiento: \n");
    scanf("%d", &mes);
    printf("Ingrese el ano de nacimiento: \n");
    scanf("%d", &ano);
    fecha_valida= (dia>0 & dia<=DIA_MAX) & (mes>0 & mes<=MES_MAX) & (ano>0 & ano<=ANO_MAX);
    calculo_edad= ano>1 & ano<=ANO_MAX;
    edad= (2026-ano)*calculo_edad;
    printf("La fecha  ingresada es: \n");
    printf("1=valida \n");
    printf("0=invalida \n");
    printf("%d \n",fecha_valida);
    printf("La edad es: \n");
    printf("%d \n",edad);

}