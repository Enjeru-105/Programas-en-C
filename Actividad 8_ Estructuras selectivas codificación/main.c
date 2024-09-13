/******************************************************************************

Multiprograma con Estructuras de control selectivas

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main()
{
    int Op;
    p("***Multiprograma***\n");
    p("Bienvenido al multiprograma de Angel, selecciona una opción para el programa que quieras ejecutar:");
    p("\nOpcion 1 -Calculadora de admitidos UDG");
    p("\nOpcion 2 -Pagos para la Alberca Olímpica UdeG 2024");
    p("\nOpcion 3 -Meses del Año\n\nDigita el numero de la opcion que quieras ejecutar: ");
    s("%i", &Op);
    system("clear");
    switch(Op){
        case 1:
        //Programa 1: calculadora de admitidos
            float Cal1, Cal2, PromF;
            p("***Admisión a la Universidad de Guadalajara***\n\n");
            p("Ingresa tu promedio final de la preparatoria: ");
            s("%f",&Cal1);
            p("Ingresa tu promedio del examen de admisión: ");
            s("%f",&Cal2);
            PromF = (Cal1+Cal2)/2;
            if(Cal1>0 && Cal1<=100 && Cal2>0 && Cal2<=100){
                if(PromF>=85){
                    p("\nFuiste Admitido! :)\n Tu promedio fue de %.2f", PromF);
                }
                else{
                    p("\nNo fuiste admitido :(\n Tu promedio fue de %.2f", PromF);
                }
            }
            else{
                p("\nAlguna de tus calificaciones es inválida. Intenta de nuevo");
            }
        break;
            
        case 2:
            //Programa 2: Calculadora de pago
            int Opc;
            float Insc=500, Mens=1750;
            p("***Pagos para la Alberca Olímpica UdeG 2024***\n\n");
            p("¿Eres Alumno?\nDigita 1 para Si ó 2 para No y presiona enter: ");
            s("%i", &Opc);
            switch(Opc){
                case 1: p("Tu cuota de inscipción es de $%.2f\nY tu mensualidad es de $%.2f\nEl total a pagar sería de %.2f\n", Insc*0.65,Mens*0.65, Insc*0.65+Mens*0.65);
                        break;
                case 2: p("Tu cuota de inscipción es de $%.2f\nY tu mensualidad es de $%.2f\nEl total a pagar sería de %.2f\n", Insc,Mens, Insc+Mens);
                        break;
                default: p("Opción inválida, intenta de nuevo.");
            }
        break;
            //Programa 3: meses del año
        
        case 3:    
            int Mes;
            p("***Programa Para Saber Cuantos Días Tiene Un Mes***\n\n");
            p("Digita el número de mes que quieras comprobar (Numero del 1 al 12): ");
            s("%i", &Mes);
            switch(Mes){
                case 1: p("\nTu mes es Enero y tiene 31 días");
                        break;
                case 2: p("\nTu mes es Febrero y tiene 28 días o 29 si es año biciesto");
                        break;
                case 3: p("\nTu mes es Marzo y tiene 31 días");
                        break;
                case 4: p("\nTu mes es Abril y tiene 30 días");
                        break;
                case 5: p("\nTu mes es Mayo y tiene 31 días");
                        break;
                case 6: p("\nTu mes es Junio y tiene 30 días");
                        break;
                case 7: p("\nTu mes es Julio y tiene 31 días");
                        break;
                case 8: p("\nTu mes es Agosto y tiene 31 días");
                        break;
                case 9: p("\nTu mes es Semptiembre y tiene 30 días");
                        break;
                case 10: p("\nTu mes es Octubre y tiene 31 días");
                        break;
                case 11: p("\nTu mes es Noviembre y tiene 30 días");
                        break;
                case 12: p("\nTu mes es Diciembre y tiene 31 días");
                        break;
                default: p("Ese número no corresponde a ningún mes, intenta de nuevo.");
            }
        break;
        
        default: p("Opción Invalida.\n");
    }
    p("\nFin del programa.");
    return 0;
}

