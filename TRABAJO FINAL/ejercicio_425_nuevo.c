#include <stdio.h>
float PI=3.1416;
float distancia_km=0.0;
float consumo_gasolina_l=0.0;
float precio_gasolina=0.0;
float gasto_total=0.0;
float calculo_adicional=0.0;
void main(){
    printf("Ingrese la distancia recorrida en kilometros: \n");
    scanf(" %f", &distancia_km);
    printf("Ingrese los litros de combustible consumidos por km:\n");
    scanf(" %f", &consumo_gasolina_l);
    printf("Ingrese el precio del litro de combustible:\n");
    scanf(" %f", &precio_gasolina);
        if( distancia_km ==0 || consumo_gasolina_l ==0 || precio_gasolina==0){
            printf("NO VALIDOS");
        }else{
        gasto_total= distancia_km * consumo_gasolina_l * precio_gasolina;
        calculo_adicional= gasto_total * PI;
        printf("El gasto total es: $ %.2f \n", gasto_total);
        printf("El producto de %.2f * %.2f es: %.2f" , PI, gasto_total, calculo_adicional);
}
}
