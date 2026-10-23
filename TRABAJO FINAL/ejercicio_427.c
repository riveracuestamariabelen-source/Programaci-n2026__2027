#include <stdio.h>

bool q= true;
bool n= false;
bool operacion_and= true;
bool operacion_or= true;
bool operacion_not_q= true;
bool operacion_not_n= true;
void main(){
    operacion_and = (q && n);
    operacion_or = (q || n);
    operacion_not_q = (!q);
    operacion_not_n = (!n);
    printf("q = verdadero\n");
    printf("n = falso\n");
    printf("El operador AND (&, ^) sirve para evaluar si las dos condiciones se cumplen\n");
    printf("q AND n es: %s\n", operacion_and ? "Verdadero" : "Falso");
    printf("El operador OR (|, v) sirve para evaluar si al menos una de las condiciones se cumple\n");
    printf("q OR n es: %s\n", operacion_or ? "Verdadero" : "Falso");
    printf("El operador NOT (!) sirve para negar una condicion\n");
    printf("NOT q es: %s\n", operacion_not_q ? "Verdadero" : "Falso");
    printf("NOT n es: %s\n", operacion_not_n ? "Verdadero" : "Falso");
}