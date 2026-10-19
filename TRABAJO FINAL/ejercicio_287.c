#include <stdio.h>
//biblioteca para usar booleanos
#include <stdbool.h>
//constante
int UMBRAL=100;
double n1=0.0;
double n2=0.0;
double n3=0.0;
double suma_n=0.0;
double num_mayor=0.0;
double num_menor=0.0;
double num_medio=0.0;
bool pasa_umbral=true;
bool hay_negativos=true;
void main(){
    printf("Ingrese el primer numero: \n");
    scanf("%lf", &n1);
    printf("Ingrese el segundo numero: \n");
    scanf("%lf", &n2);
    printf("Ingrese el tercer numero: \n");
    scanf("%lf", &n3);
    //se usa el operador ternario para determinar el numero mayor y menor
    // estructura "condición ? resultado_si_verdadero : resultado_si_falso"
    num_mayor= (n1>n2 & n1>n3)? n1: (n2>n1 & n2>n3)? n2: n3;
    num_menor= (n1<n2 & n1<n3)? n1: (n2<n1 & n2<n3)? n2: n3;
    suma_n= n1+n2+n3;
    num_medio= (suma_n)-(num_mayor)-(num_menor);
    pasa_umbral= num_mayor>UMBRAL;
    hay_negativos= (n1<0 || n2<0 || n3<0);
    printf("El numero mayor es: %.2f \n", num_mayor);
    printf("El numero menor es: %.2f \n", num_menor);
    printf("El numero medio es: %.2f \n", num_medio);
    printf("El numero mayor es: \n");
    printf("1=mayor que el umbral \n");
    printf("0=menor que el umbral \n");
    printf("%d \n",pasa_umbral);
    printf("Hay numeros negativos: \n");
    printf("1=si hay negativos \n");
    printf("0=no hay negativos \n");
    printf("%d \n",hay_negativos);
}
