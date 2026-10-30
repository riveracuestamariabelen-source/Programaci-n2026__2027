#include <stdio.h>
float HUM_MIN=0.0;
float HUM_MAX=0.0;
float TEMP_MIN=0.0;
float TEMP_MAX=0.0;
float HUM_AMBIENTE_MAX=0.0;
float HUM_AMBIENTE_MIN=0.0;
float HORA_LUZ_MAX=0.0;
float HORA_LUZ_MIN=0.0;
float hum_suelo=0.0;
float temp=0.0;
float hum_ambiente=0.0;
float horas_luz_solar=0.0;
// T=tomate, M=maiz, P=papa, f=FRIJOL
char tipo_de_cultivo;
int main(void){
    printf("Ingrese el tipo de cultivo (T=tomate, M=maiz, F=frijol, P=papa): \n");
    scanf(" %c", &tipo_de_cultivo);
    printf("Ingrese la humedad del suelo a la cual esta sometido su cultivo: \n");
    scanf("%f", &hum_suelo);
    printf("Ingrese la temperatura a la cual esta sometido su cultivo: \n");
    scanf("%f", &temp);
    printf("Ingrese la humedad ambiente a la cual esta sometido su cultivo: \n");
    scanf("%f", &hum_ambiente);
    printf("Ingrese las horas de luz a las cuales esta sometido su cultivo: \n");
    scanf("%f", &horas_luz_solar);
    switch (tipo_de_cultivo){
    case 'T':
        TEMP_MAX=25;
        TEMP_MIN=20;
        HUM_MIN=60;
        HUM_MAX=80;
        HUM_AMBIENTE_MAX=70;
        HUM_AMBIENTE_MIN=60;
        HORA_LUZ_MAX=10;
        HORA_LUZ_MIN=8;
        break;
    case 'M':
        TEMP_MAX=27;
        TEMP_MIN=21;
        HUM_MIN=60;
        HUM_MAX=80;
        HUM_AMBIENTE_MAX=70;
        HUM_AMBIENTE_MIN=60;
        HORA_LUZ_MAX=10;
        HORA_LUZ_MIN=8;
        break;
    case 'P':
        TEMP_MAX=20;
        TEMP_MIN=15;
        HUM_MIN=70;
        HUM_MAX=80;
        HUM_AMBIENTE_MAX=85;
        HUM_AMBIENTE_MIN=70;
        HORA_LUZ_MAX=12;
        HORA_LUZ_MIN=10;
        break;
    case 'F':
        TEMP_MAX=24;
        TEMP_MIN=18;
        HUM_MIN=50;
        HUM_MAX=70;
        HUM_AMBIENTE_MAX=70;
        HUM_AMBIENTE_MIN=50;
        HORA_LUZ_MAX=8;
        HORA_LUZ_MIN=6;
        break;
    default:
        printf("OPCION NO VALIDA\n");
        return 1;
    }
    if (hum_suelo>HUM_MAX || hum_suelo<HUM_MIN) {
        printf("La humedad de suelo no es adecuada, se recomienda un rango de entre %.2f %% y %.2f %% \n ", HUM_MIN, HUM_MAX);
    }
    if (temp>TEMP_MAX || temp<TEMP_MIN) {
        printf("La temperatura no es adecuada, se recomienda un rango de entre %.2f º y %.2f º \n ", TEMP_MIN, TEMP_MAX);
    }
    if (hum_ambiente>HUM_AMBIENTE_MAX || hum_ambiente<HUM_AMBIENTE_MIN) {
        printf("La humedad ambiente no es adecuada, se recomienda un rango de entre %.2f %% y %.2f %% \n ", HUM_AMBIENTE_MIN, HUM_AMBIENTE_MAX);
    }
    if (horas_luz_solar>HORA_LUZ_MAX || horas_luz_solar<HORA_LUZ_MIN) {
        printf("Las horas de luz brindadas al cultivo no son adecuadas, se recomienda un rango de entre %.2f y %.2f por dia \n ", HORA_LUZ_MIN, HORA_LUZ_MAX);
    }
}

