#include <stdio.h>

float MINIMO=0.621371;
float distancia_km=0.0;
float distancia_millas=0.0;
void main(){
    printf("Ingrese la distancia en kilómetros: ");
    scanf("%f", &distancia_km);
    distancia_millas= distancia_km * MINIMO;
    printf("%.2f km equivalen a %.2f millas", distancia_km, distancia_millas);
}
