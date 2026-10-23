#include <stdio.h>

float base=0.0;
float altura=0.0;
float area=0.0;
bool area_positiva = true;
bool valores_positivos = true;

void main(){
    printf("Ingrese la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triángulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2.0;
    area_positiva = (area > 0);
    valores_positivos = (base > 0 && altura > 0);
    printf("El área del triángulo es: %.2f\n", area);
    printf("El área es positiva: %s\n", area_positiva ? "Verdadero" : "Falso");
    printf("Los valores de base y altura son positivos: %s\n", valores_positivos ? "Verdadero" : "Falso");
}