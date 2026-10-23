#include <stdio.h>

int MAXIMO=100;
int z=50;
int n1=0;
int producto=0;
int suma=0;
bool pasa_umbral = true;
bool valores_validos = true;

void main(){
    printf("Ingrese un número: ");
    scanf("%d", &n1);
    valores_validos = (z > 0 && n1 > 0);
    suma= z + n1;
    pasa_umbral = (suma > MAXIMO);
    producto= z * n1;
    printf("El producto de %d y %d es: %d\n", z, n1, producto);
    printf((valores_validos) ? "" : "Los valores no son válidos \n");
    printf((pasa_umbral) ? "La suma de los valores supera el umbral\n" : "La suma de los valores no supera el umbral\n");

}
