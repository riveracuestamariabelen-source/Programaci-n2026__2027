#include <stdio.h>

int CONSTANTE = 10;
int num=0;
int residuo=0;

void main(){
    printf("Ingrese un número: ");
    scanf("%d", &num);
    residuo = num % CONSTANTE;
    if(residuo == 0){
        printf("El numero %d es múltiplo de %d\n", num, CONSTANTE);
    }else{
        printf("El numero %d no es múltiplo de %d\n", num, CONSTANTE);
    }
}