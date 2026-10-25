#include <stdio.h>

float DESCUENTO = 1.8;
float temp_Celcius = 0.0;
float temp_Fahrenheit = 0.0;

void main (){
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &temp_Celcius);
    temp_Fahrenheit = (temp_Celcius * DESCUENTO) + 32;
    printf("%.2f ºC equivale a %.2f ºF\n", temp_Celcius, temp_Fahrenheit);

}