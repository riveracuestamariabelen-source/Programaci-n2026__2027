#include <stdio.h>
float PRECIO_PALABRAS=0.10;
float FACTOR_TECNICO=1.5;
float FACTOR_LEGAL=2.0;
float RECARGO_URG=1.5;
float DESC_LARGO=0.1;
int MIN_PALABRAS_DESC=5000;
float desc=0.0;
int num_palabras=0;
int idioma_origen=0;
int idioma_destino=0;
float costo_traduccion=0.0;
float costo_tipo=0.0;
float costo_palabras=0.0;
//1=general, 2=tecnico, 3=legal
int tipo_doc=0;
float urgencia=0.0;
void main(){
    printf("Ingrese el número de palabras del documento: ");
    scanf("%d", &num_palabras);
    printf("Ingrese el idioma de origen (1=Español, 2=Inglés, 3=Francés): ");
    scanf("%d", &idioma_origen);
    printf("Ingrese el idioma de destino (1=Español, 2=Inglés, 3=Francés): ");
    scanf("%d", &idioma_destino);
    printf("Ingrese el tipo de documento (1=General, 2=Técnico, 3=Legal): ");
    scanf(" %d", &tipo_doc);
    printf("Ingrese si la traducción es urgente (1=Sí, 0=No): ");
    scanf("%f", &urgencia);
    costo_palabras=PRECIO_PALABRAS*num_palabras;
    urgencia = (urgencia == 1) ? (urgencia * RECARGO_URG) : 0.0;
    costo_tipo = (tipo_doc==2) ? FACTOR_TECNICO : ((tipo_doc==3) ? FACTOR_LEGAL : costo_tipo);
    costo_traduccion = costo_palabras+costo_tipo+urgencia;
    if(num_palabras>=MIN_PALABRAS_DESC){
        desc=DESC_LARGO*costo_traduccion;
        costo_traduccion=costo_traduccion-desc;
    }
    printf("Características del documento:\n ");
    printf("Palabras: %d \n", num_palabras);
    printf("Idioma origen: %d \n", idioma_origen);
    printf("Idioma traducido: %d \n", idioma_destino);
    printf("Tipo de Texto: %d \n", tipo_doc);
    printf("Descuento: %.2f \n", desc);
    printf("El costo total de su traducción es: \n %.2f \n", costo_traduccion);
}