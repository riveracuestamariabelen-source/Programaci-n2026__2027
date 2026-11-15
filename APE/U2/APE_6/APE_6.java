import java.util.Scanner;
public class APE_6 {
    public static void main(String[] args) {
        float HUM_MIN=0.0f, HUM_MAX=0.0f, TEM_MIN=0.0f, TEM_MAX=0.0f, HUM_AMBIENTE_MIN=0.0f, HUM_AMBIENTE_MAX=0.0f, HORA_LUZ_MAX=0.0f, HORA_LUZ_MIN=0.0f, 
        hum_suelo=0.0f, temp=0.0f, hum_ambiente=0.0f, horas_luz_solar = 0.0f;
        char tipo_de_cultivo;
        Scanner scanner = new Scanner(System.in);
        //MENU
        System.out.println("Ingrese el tipo de cultivo (T=tomate, M=maiz, F=frijol, P=papa):");
        //INGRESO DE DATOS
        tipo_de_cultivo = scanner.next().charAt(0);
        System.out.println("Ingrese la humedad del suelo a la cual esta sometido su cultivo:");
        hum_suelo = scanner.nextFloat();
        System.out.println("Ingrese la temperatura del ambiente a la cual esta sometido su cultivo:");
        temp = scanner.nextFloat();
        System.out.println("Ingrese la humedad del ambiente a la cual esta sometido su cultivo:");
        hum_ambiente = scanner.nextFloat();
        System.out.println("Ingrese las horas de luz solar a la cual esta sometido su cultivo:");
        horas_luz_solar = scanner.nextFloat();
        switch (tipo_de_cultivo) {
            case 'T':
                HUM_MIN = 80;
                HUM_MAX = 60;
                TEM_MIN = 20;
                TEM_MAX = 25;
                HUM_AMBIENTE_MIN = 60;
                HUM_AMBIENTE_MAX = 70;
                HORA_LUZ_MAX = 10;
                HORA_LUZ_MIN = 8;
                break;
            case 'M':
                HUM_MIN = 60;
                HUM_MAX = 80;
                TEM_MIN = 21;
                TEM_MAX = 27;
                HUM_AMBIENTE_MIN = 60;
                HUM_AMBIENTE_MAX = 70;
                HORA_LUZ_MAX = 12;
                HORA_LUZ_MIN = 10;
                break;
            case 'F':
                HUM_MIN = 50;
                HUM_MAX = 70;
                TEM_MIN = 18;
                TEM_MAX = 24;
                HUM_AMBIENTE_MIN = 50;
                HUM_AMBIENTE_MAX = 70;
                HORA_LUZ_MAX = 8;
                HORA_LUZ_MIN = 6;
                break;
            case 'P':
                HUM_MIN = 70;
                HUM_MAX = 80;
                TEM_MIN = 15;
                TEM_MAX = 20;
                HUM_AMBIENTE_MIN = 70;
                HUM_AMBIENTE_MAX = 85;
                HORA_LUZ_MAX = 12;
                HORA_LUZ_MIN = 10;
                break;
            default:
            System.out.println("Tipo de cultivo no valido");
        }
        if (hum_suelo>HUM_MAX || hum_suelo<HUM_MIN) {
            System.out.println("La humedad de suelo no es adecuada, se recomienda un rango de entre "+ HUM_MIN+ "% hasta "+HUM_MAX+ "%");
        }
        if (temp>TEM_MAX || temp<TEM_MIN) {
            System.out.println("La temperatura no es adecuada, se recomienda un rango de entre "+ TEM_MIN+ "ºC  hasta "+TEM_MAX+ "ºC");
        }   
        if (hum_ambiente>HUM_AMBIENTE_MAX || hum_ambiente<HUM_AMBIENTE_MIN) {
            System.out.println("La humedad ambiente no es adecuada, se recomienda un rango de entre "+ HUM_AMBIENTE_MIN+ "%  hasta "+HUM_AMBIENTE_MAX+ "%");
        }
        if (horas_luz_solar>HORA_LUZ_MAX || horas_luz_solar<HORA_LUZ_MIN) {
            System.out.println("Las horas de luz brindadas al cultivo no son adecuadas, se recomienda un rango de entre"+ HORA_LUZ_MIN+ "  hasta "+HORA_LUZ_MAX+ "horas por día");
        }
        scanner.close();
    }   

}