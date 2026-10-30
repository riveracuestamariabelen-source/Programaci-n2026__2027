#include <stdio.h>

int anio = 0;
float INICIO_SIGLO_XXI = 2001;
float FIN_SIGLO_XXI = 2100;
char es_siglo_xxi[10] = "";
int factorial = 1;

void main() {
    printf("Ingrese el anio a anlizar: \n");
    scanf("%d", &anio);

    if (anio >= INICIO_SIGLO_XXI && anio <= FIN_SIGLO_XXI) {
        sprintf(es_siglo_xxi, " pertenece ");
    } else {
        sprintf(es_siglo_xxi, " no pertenece ");
    }

    printf("El anio %d %9s al siglo XXI", anio, es_siglo_xxi);

    if (anio < 10) {
        for (int i = 1; i <= anio; i++) {
            factorial *= i;
        }
        printf("\nEl factorial de %d es: %d", anio, factorial);
    }

}
