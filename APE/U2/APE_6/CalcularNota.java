import java.util.Scanner;

public class CalcularNota {
    public static void main(String[] args) {
        float ev_individual, t_grupal, ev_final, notaFinal = 0.0f;
        float porcentaje_eva_individual=0.30f;
        float porcentaje_eva_final=0.40f;
        float porcentaje_t_grupal=0.30f;
        Scanner scanner = new Scanner(System.in);
        //INGRESO DE DATOS
        System.out.println("Bienvenido a tu calculadora de notas finales");
        System.out.println("Introduce tu nota obtenida en la evaluación individual: ");
        ev_individual = scanner.nextFloat();
        System.out.println("Introduce tu nota obtenida en el trabajo grupal: ");
        t_grupal = scanner.nextFloat();
        System.out.println("Introduce tu nota obtenida en la evaluación final: ");
        ev_final = scanner.nextFloat();
        if(ev_final>0 & ev_final<=10 & t_grupal>0 & t_grupal<=10 & ev_individual>0 & ev_individual<=10){
            ev_individual= ev_individual*porcentaje_eva_individual;
            ev_final= ev_final*porcentaje_eva_final;
            t_grupal= t_grupal*porcentaje_t_grupal;
            notaFinal= ev_final+ ev_individual+ t_grupal;
        System.out.println("Poderacion de nota de evaluación individual (30%):"+ ev_individual);
        System.out.println("Poderacion de nota de trabajo grupal (30%):"+ t_grupal);
        System.out.println("Poderacion de nota de evaluación final (40%):"+ ev_final);
        System.out.println("Nota Final:"+ notaFinal);
            if (notaFinal >= 9 && notaFinal <= 10) {
                System.out.println("Nivel de Desempeño: Excelente");
                System.out.println("¡Felicitaciones! Rendimiento sobresaliente");
            } else if (notaFinal >= 8 && notaFinal < 9) {
                System.out.println("Nivel de Desempeño: Muy bueno");
            } else if (notaFinal >= 7 && notaFinal < 8) {
                System.out.println("Nivel de Desempeño: Bueno");
            } else if (notaFinal >= 5 && notaFinal < 7) {
                System.out.println("Nivel de Desempeño: Regular");
                System.out.println("El estudiante requiere refuerzo académico");
            } else {
                System.out.println("Nivel de Desempeño: Deficiente");
                System.out.println("El estudiante requiere refuerzo académico");
            }
            if(notaFinal>7){
                System.out.println("Estado: Aprobado");
            }else if(notaFinal<=7){
                System.out.println("Estado: Reprobado");
            }
         }else{
            System.out.println("Las notas deben estar en un rango de 0 a 10, porfavor introduzca datos validos");
         }    
        scanner.close();
    }
}