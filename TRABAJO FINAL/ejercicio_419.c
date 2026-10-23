#include <stdio.h>
float PI=3.1416;
float radio=0.0;
float area=0.0;
void main(){
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);
    area = PI * (radio * radio);
    printf("El área del círculo es: %.2f\n", area);
}