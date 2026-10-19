#include <stdio.h>
//biblioteca para usar booleanos
#include <stdbool.h>
//biblioteca para usar cadenas de caracteres
#include <string.h>
//constantes
int MIN_LONGITUD=8;
int MAX_LONGITUD=20;
//variables
char contrasena[20]="";
bool es_valida=true;
bool contiene_mayuscula=true;
int longitud=0;

int main(void){
    printf("Ingrese la contraseña\n");
    printf("Minimo 8 caracteres\n");
    printf("Maximo 20 caracteres\n");
    scanf("%s", contrasena );
    //la función strlen() devuelve la longitud de la cadena de caracteres
    longitud= strlen(contrasena);
    //la función strpbrk() busca un caracter en una cadena de caracteres
    contiene_mayuscula=(strpbrk(contrasena, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    es_valida= longitud>=MIN_LONGITUD & longitud<=MAX_LONGITUD & 
    contiene_mayuscula==true;
    printf("Su contrasena es: \n");
    printf("1=valida \n");
    printf("0=invalida \n");
    printf("%d",es_valida);
}

