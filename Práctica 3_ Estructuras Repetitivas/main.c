/******************************************************************************
This is an Easter Egg
La vida es una lenteja, o la toma o la deja
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define p printf
#define s scanf
#define g getchar()

int main()
{
    int op, h=0,num,num2,i,j,x,y,z,par,imp,ap,rep,may,men;
    double res,ij,jk,xy;
    do{
        p("****Multiprograma. seleccione su programa a ejecutar****\n\n");
        p("1. Decremento en 2\n2. Calculadora de factoriales\n3. Conjetura de ULAM\n4. Números primos\n5. Calculadora de Fibonacci\n6. Contadora de Dígitos\n7. Adivinar el número aleatorio\n8. Calculador de MCD\n9. Contador de Dígitos Pares e Impares\n10. Calculador de Todos los Divisores\n11. Primeros 20 números Primos\n12. Números Primos Entre 2 Números\n13. 24 Calificaciones Aleatorias\n14. Triángulo Rectángulo con Números\n15. Suma de la Serie 1+11+111+1111+...n\n0. Salir del programa\n\nOpción: ");s("%i", &op);system("clear");
        switch(op){
            case 0://Cerrar programa
                p("\nSaliendo del programa....");
                h=1;
            break;
            
            case 1://Número decrementado
                p("****Decrementadora en 2 de un número entero positivo****\n\n");
                p("Introduce un número entero positivo: ");s("%i",&num);
                if(num>=0){
                    while(num>=0){
                        p("%i\n",num);
                        num-=2;
                    }
                }
                else
                p("%i es un número menor que 0\n", num);
                p("\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 2://Factoriales
                p("****Calculadora de factoriales****\n\n");
                p("Introduce un número entero positivo: ");s("%i",&num);i=1;res=1;
                if(num>0){
                    p("%i! = ", num);
                    while(i<=num){
                        res= res*i;
                        p("%i ",i);
                        if(i!=num)
                        p("x ");
                        i++;
                    }
                    p("= %.0lf", res);
                }
                else{
                    if(num==0)
                    p("%i! = %.0lf", num,res);
                    else
                    p("%i es un número negativo, no se ejecutará el programa", num);
                }
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 3://Conjetura ULAM
                p("****Conjetura ULAM****\n\n");
                p("Introduce un número entero positivo: ");s("%i",&num);
                if(num>0){
                    p("\nLa conjetura ULAM para el número %i es:\n", num);
                    p("%i\n",num);
                    while(num!=1){
                        if(num%2==0)
                            num=num/2;
                        else
                            num=(num*3)+1;
                        p("%i\n",num);
                    }
                }
                else{
                    if(num==0){
                        p("\nLa conjetura ULAM para el número %i es:\n", num);
                        p("1");
                    }
                    else
                    p("%i es un número negativo, no se ejecutará el programa", num);
                }
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 4://Números primos
                p("****Calculadora de números primos****\n\n");
                p("Introduce un número natural: ");s("%i",&num);i=1;x=0;
                if(num>0){
                    while(i<=num){
                        if(num%i==0)
                            x++;
                        i++;
                    }
                }
                if(x==2)
                    p("\n%i es un número primo.",num);
                else
                    p("\n%i no es un número primo.",num);
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 5://Suseción de Fibonacci
                p("****Calculadora de Suseción de Fibonacci****\n\n");
                p("Introduce un número entero: ");s("%i",&num);i=1;x=0;y=1;z=1;
                if(num>0){
                    p("\nLa suseción de Fibonacci del número %i es:\n",num);
                    while(i<=num){
                        if((i+ 3)%3==1 && i<=num){
                            p("%i\n",x);
                            i++;
                        }
                        if((i+ 3)%3==2 && i<=num){//sé que seguramente haya una mejor forma de hacerlo pero no quise copiar código y me esforcé para hacerlo yo xD
                            p("%i\n",y);
                            i++;
                        }
                        if((i+ 3)%3==0 && i<=num){
                            p("%i\n",z);
                            i++;
                        }
                        x=z+y;
                        y=x+z;
                        z=x+y;
                    }
                }
                else
                    p("\nNúmero inválido, no se ejecutará el programa");
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 6://Dígitos
                p("****Contadora de dígitos****\n\n");
                p("Introduce un número entero: ");s("%i",&num);i=1;y=0;
                do{
                    x = num<0 ? num*-1 : (num==0 ? 1 : num);
                    if(i<=x)
                        y++;
                    i=i*10;
                }while(i<=x);
                p("\nEl número %i tiene %i dígitos.", num, y);
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 7://Número aleatorio
                p("****Adivina el Número****\n\n");
                srand(time(NULL)); x= (rand()%20)+ 1;i=1;
                do{
                    p("Introduce un número del 1 al 20: ");s("%i",&num);
                    if(i!=5){
                        if(num>x)
                            p("Tú número es mayor que el mío\nVuelve a intentarlo\n\n");
                        if(num<x)
                            p("Tú número es menor que el mío\nVuelve a intentarlo\n\n");
                    }
                    else{
                        if(num>x)
                            p("Tú número era mayor que el mío\nTe quedaste sin intentos, el número a adivinar era: %i", x);
                        if(num<x)
                            p("Tú número era menor que el mío\nTe quedaste sin intentos, el número a adivinar era: %i", x);
                    }
                    if(num==x){
                        p("\n¡Felicidades! Lo lograste en %i intentos.",i);
                        break;
                    }
                    i++;
                }while(i<=5);
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 8://MCD
                p("****Calculadora de MCD (Máximo Común Divisor)****\n\n");
                p("Introduce el primer número entero: ");s("%i",&num);
                p("Introduce el segundo número entero: ");s("%i",&num2); i=1;
                may = num >= num2 ? num : num2;
                do{
                    if(num%i==0 && num2%i==0)
                        y=i;
                    i++;
                }while(i<=may);
                p("\nEl máximo común divisor entre %i y %i es: %i",num,num2,y);
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 9://Dígitos pares e impares
                p("****Detector de dígitos pares e impares****\n\n");
                p("Introduce un número entero: ");s("%i",&num);x=2;y=0;par=0;imp=0;
                do{
                    if(num%10!=0){
                        num--;y++;
                    }
                    else{
                        if(y%2==0)
                            par++;
                        else
                            imp++;
                        y=0;
                        num=num/10;
                    }
                    if(num==0)
                        x--;
                }while(x!=0);
                p("\nEl número tiene %i dígitos pares y %i impares",par,imp);
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 10://Todos los divisores de un número
                p("****Calculadora de Divisores****\n\n");
                p("Introduce un número entero: ");s("%i",&num);
                if(num!=0){
                    p("\nLos divisores de %i son: \n\n", num);i=1;
                    do{
                        num = num<0 ? num*-1 : num;
                        if(num%i==0)
                            p("%i ",i);
                        i++;
                    }while(num>=i);
                }
                else
                    p("\nLos divisores de %i son: Infiinitos", num);
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 11://20 Números Primos
                p("****Los Primeros 20 Números Primos****\n\n");
                p("Los primeros 20 números primos son:\n");x=0;y=0;
                for(i=1;y<20;i++){
                    for(j=1;j<=i;j++){
                        if(i%j==0)
                            x++;
                    }
                    if(x==2){
                        if(y!=19)
                            p("%i, ",i);
                        else
                            p("%i",i);
                        y++;
                    }
                    x=0;
                }
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 12://Números primos entre 2 inputs
                p("****Secuencia de Números Primos****\n\n");
                p("Introduce el primer número natural: ");s("%i",&num);
                p("Introduce el segundo número natural: ");s("%i",&num2);x=0;y=0;
                may= num>num2 ? num : num2;
                men= num<num2 ? num : num2;
                if(num>=0 && num2>0){
                    p("\nLos números primos entre %i y %i son:\n",men,may);
                    for(i=men;i<=may;i++){
                        for(j=1;j<=i;j++){
                            if(i%j==0)
                                x++;
                        }
                        if(x==2){
                            if(y!=0)
                                p("%i, ",y);
                            y=i;
                        }
                        x=0;
                    }
                    if(y!=0)
                        p("%i",y);
                    else
                        p("No hay números primos entre estos números");
                }
                else
                    p("\nAlgún número es inválido, no se ejecutará el programa");
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 13://24 Calificaciones Aleatorias
                p("****Generador de Calificaciones Aleatorias****\n\n");ap=0;rep=0;may=0;men=100;
                srand(time(NULL));res=0;
                for(i=1;i<=24;i++){
                    x=rand()%101;
                    res+=x;
                    if(x>=60)
                        ap++;
                    else
                        rep++;
                    may= x>may ? x : may;
                    men= x<men ? x : men;
                }
                p("En el grupo de 24 alumnos se tiene que:\nLa calificación promedio del grupo fue de %.2lf.\nHay %i alumnos aprobados y %i reprobados.\nLa mayor calificación fue %i y la menor %i.",res/24,ap,rep,may,men);
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 14://Triángulo rectángulo
                p("****Triángulo Rectángulo de Números****\n\n");
                p("Introduce la cantidad de filas que quiere visualizar en el triángulo: ");s("%i",&num);
                if(num>0){
                    for(i=1;i<=num;i++){
                        for(j=1;j<=i;j++){
                            p("%i",j);
                        }
                        p("\n");
                    }
                }
                else
                    p("\nNúmero inválido, no se ejecutará el programa");
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            case 15://Suma en Serie de Unos
                p("****Encontrar la Suma de la Serie 1+11+111+1111+...n****\n\n");
                p("(Por términos de memoria, si quieres un resultado exacto el número máximo permitido es 16)\nIntroduce la cantidad de términos en la secuencia: ");s("%i",&num);
                if(num>0){
                    p("\nLa serie para %i términos es:\n",num);xy=1;jk=1;res=0;
                    for(ij=1;jk<=num;ij+=xy){
                        if(jk!=num)
                            p("%.0lf + ",ij);
                        else
                            p("%.0lf",ij);
                        res+=ij;
                        xy=xy*10;
                        jk++;
                    }
                    p("\nLa suma total es: %.0lf",res);
                }
                else
                    p("\nNúmero inválido, no se ejecutará el programa");
                p("\n\nSaliendo del programa\nPresione enter para continuar...");
                g;g;
            break;
            
            default:
                p("\n\nOpción erronea, Intenta de nuevo");
                p("\nPresione enter para continuar...");
                g;g;
        }
        system("clear");
    }while(h==0);
    
    return 0;
}



