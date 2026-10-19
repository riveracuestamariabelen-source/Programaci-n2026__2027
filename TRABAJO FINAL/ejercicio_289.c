#include <stdio.h>
//biblioteca para usar booleanos
#include <stdbool.h>
int UMBRAL=5;
int num = 0;
int unidad;
int decena;
int centena;
bool pasa_umbral=true;
void main(){
    printf("Ingrese un numero de 3 digitos: \n");
    scanf("%d", &num);
    unidad= num%10;
    decena= ((num%100)-unidad)/10;
    centena= (num - decena - unidad)/100;
    pasa_umbral= (unidad > UMBRAL || decena > UMBRAL || centena > UMBRAL);
    printf("Del numero %d,\n", num);
    printf("la centena es: %d \n", centena);
    printf("la decena es: %d \n", decena);
    printf("la unidad es: %d \n", unidad);
    printf("Hay digitos mayores que el umbral: \n");
    printf("1=si hay digitos mayores que el umbral \n");
    printf("0=no hay digitos mayores que el umbral \n");
    printf("%d \n",pasa_umbral);

}