/******************************************************************************
This is an Easter Egg
La vida es una lenteja, o la toma o la deja
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main()
{
    int op, i=0, j;
    do{
        j=0;
        p("****Multiprogramas Enjeru****\nSeleccione el programa que quiera realizar\n\n");
        p("Opción 1. Multiplicadora de 2 números\nOpción 2. Calculadora de aprobados y reprobados\nOpción 3. Números pares del 1 al 50\nOpción 4. Los primeros 10 números enteros positivos\nOpción 5. Salir del programa\n\nOpción: ");
        s("%i", &op);
        system("clear");
        switch(op){
            case 1:
                float num1,num2;
                while(j==0){
                    p("****Calculadora de Multiplicaciones****\nPara salir del programa, ingrese un número 0 en cualquiera de las siguientes opciones\n\n");
                    p("Ingrese un primer número real :"); s("%f", &num1);
                    p("Ingrese un segundo número real :"); s("%f", &num2);
                    if(num1!=0 && num2!=0){
                        p("\n%.2f x %.2f = %.4f", num1, num2, num1*num2);
                        p("\nPresiona enter para continuar\n"); getchar();getchar(); system("clear");
                    }
                    else{
                        p("\n\nSaliendo del programa...");
                        p("\nIntroduzca 1 para volvera al menú principal\nIntroduzca cualquier otro número para salir\nOpcion: "); s("%i",&op);
                        switch(op){
                            case 1:
                                system("clear"); j=1; break;
                            default: system("clear"); j=1;i=1; break;
                        }
                    }
                }
                break;
            case 2:
                int alum, ap=0, rep=0, num=1;
                float cal;
                while(j==0){
                    p("****Programa para calcular alumnos Aprobados y Reprobados****\n\n");
                    p("Ingrese la cantidad de alumnos: ");s("%i", &alum);
                    while(num<=alum){
                        p("Ingrese la calificación del alumno %i: ",num); s("%f", &cal);
                        if(cal>0 && cal<=100){
                            if(cal>=60){
                                ap++; num++;
                            }
                            else{
                                rep++; num++;
                            }
                        }
                        else{
                            p("Calificación no válida, inténtalo de nuevo.\n");
                        }
                    }
                    p("En su clase hay %i alumnos, de los cuales %i están aprobados y %i están reprobados.", alum, ap, rep);
                    p("\n\nPrograma terminado.");
                    p("\nIntroduzca 1 para volvera al menú principal\nIntroduzca cualquier otro número para salir\nOpcion: "); s("%i",&op);
                    switch(op){
                        case 1:
                            system("clear"); j=1; break;
                        default: system("clear"); j=1;i=1; break;
                    }
                }
                break;
            case 3:
                int k,res;
                k=1;
                do{
                    p("****Sumatoria de numeros pares entre el 1 y el 50****\n\n");
                    p("El resultado de la suma de: ");
                    do{
                        if(k%2==0){
                            res+=k;
                            p("%i", k);
                            if(k<50){
                                p(" + ");
                            }
                        }
                        k++;
                    }while(k<=50);
                    p(" = %i", res);
                    p("\n\nPrograma terminado.");
                    p("\nIntroduzca 1 para volvera al menú principal\nIntroduzca cualquier otro número para salir\nOpcion: "); s("%i",&op);
                    switch(op){
                        case 1:
                            system("clear"); j=1; break;
                        default: system("clear"); j=1;i=1; break;
                    }
                }while(j==0);
                break;
            case 4:
                j=1;
                p("****Los primeros 10 números enteros positivos****\n\n");
                do{
                    p("%i",j);
                    if(j<10){
                        p(", ");
                    }
                    j++;
                }while(j<=10);
                p("\n\nPrograma terminado.");
                    p("\nIntroduzca 1 para volvera al menú principal\nIntroduzca cualquier otro número para salir\nOpcion: "); s("%i",&op);
                    switch(op){
                        case 1:
                            system("clear"); j=1; break;
                        default: system("clear"); j=1;i=1; break;
                    }
                break;
            case 5:
                i=1; break;
            default: p("Opción Invalida, intenta otra vez\nPresiona Enter para continuar...");getchar();getchar();
            system("clear");
        }
    }while(i==0);
    
    p("\nFin del programa.");
    return 0;
}

