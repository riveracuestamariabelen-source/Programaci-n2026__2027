#include <stdio.h>
//biblioteca para usar booleanos
#include <stdbool.h>
int val1=0;
int val2=0;
int val3=0;
float promedio=0.0;
bool es_mayor_val1 = true;
bool es_mayor_val2 = true;
bool es_mayor_val3 = true;
void main(){
    printf("Ingrese el primer valor: ");
    scanf("%d", &val1);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &val2);
    printf("Ingrese el tercer valor: ");
    scanf("%d", &val3);
    promedio = (val1 + val2 + val3) / 3.0;
    es_mayor_val1 = (val1 > promedio);
    es_mayor_val2 = (val2 > promedio);
    es_mayor_val3 = (val3 > promedio);
    printf("El promedio es: %.2f\n", promedio);
    printf("Val1 es mayor que el promedio: %s\n", es_mayor_val1 ? "Verdadero" : "Falso");
    printf("Val2 es mayor que el promedio: %s\n", es_mayor_val2 ? "Verdadero" : "Falso");
    printf("Val3 es mayor que el promedio: %s\n", es_mayor_val3 ? "Verdadero" : "Falso");
}