#include <stdio.h>
//biblioteca para usar booleanos
#include <stdbool.h>
double num1 = 0.0;
double num2 = 0.0;
double n2_valido = 0.0;
char operador = ' ';
double resultado = 0.0;
//variables booleanas
bool suma = false;
bool resta = false;
bool producto = false;
bool division = false;
bool division_no_valida = false;
void main() {
    printf("Ingrese el primer numero: \n");
    scanf("%lf", num1);
    printf("Ingrese el segundo numero: \n");
    scanf("%lf", num2);
    printf("Ingrese la operacion a realizar (+, -, *, /): \n");
    scanf(" %c", operador);
    suma= (operador=='+');
    resta= (operador=='-');
    producto= (operador=='*');
    division= (operador=='/');
    division_no_valida= (operador=='/' & num2==0);
    n2_valido= num2 + (num2 == 0.0);
    resultado= (num1 + num2)*suma + (num1 - num2)*resta + (num1 * num2)*producto + (num1 / n2_valido)*(division & !division_no_valida);
    printf("Primer numero: %lf \n", num1);
    printf("Segundo numero: %lf \n", num2);
    printf("Operacion: %c \n", operador);
    printf("%.2f %c %.2f = ", num1, operador, num2);
    printf("%.2f", resultado);

}