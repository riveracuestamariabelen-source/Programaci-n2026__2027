#include <stdio.h>
int num_Docs=0;
int num_Imgs=0;
int num_Vids=0;
int num_Programas=0;
float tam_Docs=0;
float tam_Imgs=0;
float tam_Vids=0;
float tam_Programas=0;
float espacio_Disco_GB=0;
float espacioDocs_mb=0;
float espacioImgs_mb=0;
float espacioVids_mb=0;
float espacioProgramas=0;
float espacioTotal_mb=0;
float espacioTotal_gb=0;
float porcentaje_Usado=0;

void main(){
    printf("Ingrese el numero de documentos: \n");
    scanf("%d", &num_Docs);
    printf("Ingrese el tamaño aproximado de los documentos en MB: \n");
    scanf("%f", &tam_Docs);
    printf("Ingrese el numero de imagenes: \n");
    scanf("%d", &num_Imgs);
    printf("Ingrese el tamaño aproximado de las imagenes en MB: \n");
    scanf("%f", &tam_Imgs);
    printf("Ingrese el numero de videos: \n");
    scanf("%d", &num_Vids);
    printf("Ingrese el tamaño aproximado de los videos en MB: \n");
    scanf("%f", &tam_Vids);
    printf("Ingrese el numero de programas: \n");
    scanf("%d", &num_Programas);
    printf("Ingrese el tamaño aproximado de los programas en MB: \n");
    scanf("%f", &tam_Programas);
    printf("Ingrese el tamaño del disco en GB: \n");
    scanf("%f", &espacio_Disco_GB);
    espacioDocs_mb = (num_Docs*tam_Docs);
    espacioImgs_mb = (num_Imgs*tam_Imgs);
    espacioVids_mb = (num_Vids*tam_Vids);
    espacioProgramas = (num_Programas*tam_Programas);
    espacioTotal_mb = (espacioDocs_mb + espacioImgs_mb + espacioVids_mb + espacioProgramas);
    espacioTotal_gb = (espacioTotal_mb/1024);
    porcentaje_Usado = (espacioTotal_gb*100)/espacio_Disco_GB;
    printf("El espacio total usado es: %.2f MB\n", espacioTotal_mb);
    printf("El espacio total usado es: %.2f GB\n", espacioTotal_gb);
    printf("El porcentaje de espacio usado es: %.2f %%\n", porcentaje_Usado);
    printf("El tamaño de disco en GBes: %.2f GB\n", espacio_Disco_GB);
    printf("El espacio total de documentos es: %.2f MB\n", espacioDocs_mb);
    printf("El espacio total de imagenes es: %.2f MB\n", espacioImgs_mb);
    printf("El espacio total de videos es: %.2f MB\n", espacioVids_mb);
    printf("El espacio total de programas es: %.2f MB\n", espacioProgramas);

}