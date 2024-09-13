/******************************************************************************
Easter Egg: Hola Mundo :3
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf

//Agregué varios comantarios para usted con la cita "PARA LA MTRA" por mi código por si los gusta revisar
int main()
{
    int Op;
    p("***Multiprograma 2.0***\n");
    p("Bienvenido al multiprograma de Angel, selecciona una opción para el programa que quieras ejecutar:");
    p("\nOpcion 1 -Ordenar 2 números de menor a mayor y viceversa");
    p("\nOpcion 2 -Calcular Años Biciestos");
    p("\nOpcion 3 -Etapas de la vida");
    p("\nOpcion 4 -Conversor de Grados");
    p("\nOpcion 5 -Números en un Dado");
    p("\nOpcion 6 -Características de un Número");
    p("\nOpcion 7 -Calculadora del Número Mayor y Menor");
    p("\nOpcion 8 -Conversor de Medidas al Sistema Inglés");
    p("\nOpcion 9 -Cobro en un Estacionamiento");
    p("\nOpcion 10 -Detector de Letras rectas y/o Curvas *FUERA DE SERVICIO*");//PARA LA MTRA: Este programa y el 11 no me funcionan por los caracteres, se cierra solos :(
    p("\nOpcion 11 -Calculadora con Caracteres *FUERA DE SERVICIO*");//PARA LA MTRA: ya probé copiándolos en otro proyecto nuevo y ahí si funcionan, se los mandaré a parte copiándolos
    p("\n\nDigita el numero de la opcion que quieras ejecutar: ");
    s("%i", &Op);
    system("clear");
    switch(Op){
        case 1:
        //Programa 1: organizadora de numeros
            int n1, n2;
            p("***Organizador de 2 Números***\n\n");
            p("Introduzca el primer número para ordenar: ");
            s("%i", &n1);
            p("Introduzca el primer número para ordenar: ");
            s("%i", &n2);
            if(n1 == n2){
                p("\n\nLos Números ingresados son iguales:\n%i = %i", n1,n2);
                break; //PARA LA MTRA: Originalmente lo había anidado, pero después vi que en el archivo no decía "(Anidado)" como en el 3ro y lo cambié para respetar las indicaciones
            }
            if(n1>n2){
                p("\n\nLos números ingresados en orden ascendente son:\n%i, %i\n\n", n2,n1);
                p("Los números ingresados en orden descendente son:\n%i, %i\n\n", n1,n2);
            }
            else{
                p("\n\nLos números ingresados en orden ascendente son:\n%i, %i\n\n", n1,n2);
                p("Los números ingresados en orden descendente son:\n%i, %i\n\n", n2,n1);
            }
        break;
            
        case 2:
        //Programa 2: Calcular años biciestos
            int ans;
            p("***Calculadora de Años Biciestos***\n\n");
            p("Ingresa el año (D.C.) a saber: ");
            s("%i", &ans);
            if(ans%4==0 && (ans%100!=0 || ans%400==0)){
                p("\n\nEl año %i es biciesto.", ans);
            }
            else{
                p("\n\nEl año %i no es biciesto.", ans);
            }
        break;
        
        case 3:  
        //Programa 3: Determinar la época de vida del usuario
            int edad;
            p("***Determinador de Etapa de Vida***\n\n");
            p("Ingresa tu edad: ");
            s("%i", &edad);
            if(edad>=0 && edad<=200){
                if(edad<=12){
                    p("\nUsted es Infante");
                }
                else{
                    if(edad<=17){
                        p("\nUsted es Adolescente");
                    }
                    else{
                        if(edad<=80){
                            p("\nUsted es Adulto");
                        }
                        else{
                            p("\nUsted es Anciano");
                        }
                    }
                }
            }
            else{
                p("\nEdad Erronea. Intenta otra vez.");
            }
        break;
            
        case 4:
        //Programa 4: Calcular temperaturas
            int opc;
            float g1, g2;
            p("***Conversor de Grados***\n");
            p("Ingresa la opción que quieres ejecutar\n\n");
            p("Opcion 1. De Celsius ºC a Farenheit ºF\n");
            p("Opcion 2. De Celsius ºC a Kelvin ºK\n");
            p("Opcion 3. De Farenheit ºF a Celsius ºC\n");
            p("Opcion 4. De Farenheit ºF a Kelvin ºC\n");//PARA LA MTRA: Decidí agregar esta opción porque no había ninguna que convirtiera directamente Farenheit a Kelvin o al revés
            p("Opcion 5. De Kelvin ºK a Celsius ºC\n\nDigita el numero de la opcion que quieras ejecutar: ");
            s("%i", &opc);
            switch(opc){
                case 1:
                    p("\nIngresa la temperatura en grados Celsius: ");
                    s("%f", &g1);
                    g2=(g1*1.8)+ 32;
                    p("\n%.2f grados Celsius equivalen a %.2f grados Farenheit", g1, g2);
                break;
                case 2:
                    p("\nIngresa la temperatura en grados Celsius: ");
                    s("%f", &g1);
                    g2=g1+ 273.15;
                    p("\n%.2f grados Celsius equivalen a %.2f grados Kelvin", g1, g2);
                break;
                case 3:
                    p("\nIngresa la temperatura en grados Farenheit: ");
                    s("%f", &g1);
                    g2=(g1- 32)*0.5556;
                    p("\n%.2f grados Farenheit equivalen a %.2f grados Celsius", g1, g2);
                break;
                case 4:
                    p("\nIngresa la temperatura en grados Farenheit: ");
                    s("%f", &g1);
                    g2=(g1- 32)*0.5556+ 273.15;
                    p("\n%.2f grados Farenheit equivalen a %.2f grados Kelvin", g1, g2);
                break;
                case 5:
                    p("\nIngresa la temperatura en grados Kelvin: ");
                    s("%f", &g1);
                    g2=g1- 273.15;
                    p("\n%.2f grados Kelvin equivalen a %.2f grados Celsius", g1, g2);
                break;
                default: p("Opción invalida. Intenta de nuevo");
            }
        break;
            
        case 5: //PARA LA MTRA: En el archivo del classroom hay 2 ejercicios 4 así que este sería el 4.2 pero decidí marcarlo como 5 para mayor facilidad
        //Programa 5: Cara Opuesta del Dado
            int dd;
            p("***Calculadora de Lados Opuestos de un Dado de 6 Caras***\n\n");
            p("Ingresa el número de la cara que cayó el dado: ");
            s("%i", &dd);
            switch(dd){
                case 1: p("\nEl número que está en la cara opuesta del dado es: SEIS");
                break;
                case 2: p("\nEl número que está en la cara opuesta del dado es: CINCO");
                break;
                case 3: p("\nEl número que está en la cara opuesta del dado es: CUATRO");
                break;
                case 4: p("\nEl número que está en la cara opuesta del dado es: TRES");
                break;
                case 5: p("\nEl número que está en la cara opuesta del dado es: DOS");
                break;
                case 6: p("\nEl número que está en la cara opuesta del dado es: UNO");
                break;
                default: p("\nUn DADO de 6 caras no tiene ese número");
            }
        break;
           
        case 6:
        //Programa 6: Anidamiento Características de un Número
            int num;
            p("***Características de un Número***\n\n");
            p("Ingrese un número entero: ");
            s("%i", &num);
            if(num!=0){
                if(num>0){
                    p("\n\n%i Es un número positivo",num);
                    if(num%2==0){
                        p(" y es par");
                    }
                    else{
                        p(", es impar");
                        if(num%7==0){
                            p(" y es múltiplo de 7.");
                        }
                        else{
                            p(" y no es multiplo de 7.");
                        }
                    }
                    
                }
                else{
                    p("\n\n%i Es un número negativo", num);
                }
            }
            else{
                p("\n\nSu número es: CERO");
            }
        break;
          
        case 7:
        //Programa 7: Detectar el Número Mayor y Menor
            int nu1,nu2,nu3,nu4,nu5, may, men;
            p("***Detector del Número Mayor y Menor de 5***\n\n");
            p("Introduzca el primer dato: ");
            s("%i", &nu1);
            p("Introduzca el segundo dato: ");
            s("%i", &nu2);
            if(nu1>nu2){
                may=nu1;
                men=nu2;
            }
            else{
                may=nu2;
                men=nu1;
            }
            p("Introduzca el tercer dato: ");
            s("%i", &nu3);
            if(nu3>may){
                may=nu3;
            }
            if(nu3<men){
                men=nu3;
            }
            p("Introduzca el cuarto dato: ");
            s("%i", &nu4);
            if(nu4>may){
                may=nu4;
            }
            if(nu4<men){
                men=nu4;
            }
            p("Introduzca el quinto dato: ");
            s("%i", &nu5);
            if(nu5>may){
                may=nu5;
            }
            if(nu5<men){
                men=nu5;
            }
            if(may!=men){
                p("\n\nEl número mayor es %i y el menor es %i.", may, men);
            }
            else{
                p("\n\ntodos los números son iguales. No hay mayores ni menores");
            }
        break;
            
        case 8:
        //Programa 8: Conversor a sistema Inglés
            float md, res;
            p("***Conversor de Distancias a Sistema Inglés***\n\n");
            p("¿Que unidad desea trabajar?\nOpción 1.Metros\nOpción 2.Centimetros\n");
            p("\nDigite la Opción: ");
            s("%i", &opc);
            switch(opc){
                case 1:
                    p("\nIngresa la cantidad en Metros: ");
                    s("%f", &md);
                    p("\nSelecciona una opción a conversión: \n1. Metros a Yardas\n2. Metros a Pies\n3. Metros a Pulgadas\n\nOpción: ");
                    s("%i", &opc);
                    switch(opc){
                        case 1:
                            res= md*1.094;
                            p("\n\n%.2f Metros equivalen a %.2f Yardas", md, res);
                        break;
                        case 2:
                            res= md*3.281;
                            p("\n\n%.2f Metros equivalen a %.2f Pies", md, res);
                        break;
                        case 3:
                            res= md*39.37;
                            p("\n\n%.2f Metros equivalen a %.2f Pulgadas", md, res);
                        break;
                        default: p("Opción invalida. Intentalo de Nuevo.");
                    }
                    break;
                    
                case 2:
                    p("\nIngresa la cantidad en Centimetros: ");
                    s("%f", &md);
                    p("\nSelecciona una opción a conversión: \n1. Centimetros a Yardas\n2. Centimetros a Pies\n3. Centimetros a Pulgadas\n\nOpción: ");
                    s("%i", &opc);
                    switch(opc){
                        case 1:
                            res= md/91.44;
                            p("\n\n%.2f Centímetros equivalen a %.2f Yardas", md, res);
                        break;
                        case 2:
                            res= md/30.48;
                            p("\n\n%.2f Centímetros equivalen a %.2f Pies", md, res);
                        break;
                        case 3:
                            res= md/2.54;
                            p("\n\n%.2f Centímetros equivalen a %.2f Pulgadas", md, res);
                        break;
                        default: p("Opción invalida. Intentalo de Nuevo.");
                    }
                    break;
                default: p("Opción invalida. Intentalo de Nuevo.");
            }
        break;
            
        case 9:
        //Programa 9: Cobros de Estacionamiento
            int hrs, min, x;
            float cb;
            p("***Cobros de Estacionamiento***\n\n");
            p("Ingresa la cantidad de horas estacionado: ");
            s("%i", &hrs);
            p("Ingresa la cantidad de minutos estacionado: ");
            s("%i", &min);
            if(min>=60){
                hrs= hrs+(min/60);
                min= min%60;
            }
            x=hrs;
            if(min>=0 && hrs>=0){
                if(min>10 || hrs!=0){
                    if(min>=11 && min<=30){
                        cb=6;
                    }
                    if((min>=31 || hrs!=0)&&hrs<=4){
                        if(min>0){
                            x= hrs+ 1;
                        }
                        cb=x*15;
                        if(x==5){
                            cb=cb- 5;
                        }
                    }
                    if(hrs>4&&hrs<=10){
                        if(min>0){
                            x= hrs+ 1;
                        }
                        cb=60+((x-4)*10);
                        if(x==11){
                            cb=cb*0.8;
                        }
                    }
                    if(hrs>10){
                        if(min>0){
                            x= hrs+ 1;
                        }
                        cb=(60+((x-4)*10))*0.8;
                    }
                    p("\nEl precio a pagar por %i horas y %i minutos de estacionamiento es de $%.2f pesos", hrs, min, cb);
                }
                else{
                    if(min<=10 && min>=1 && hrs==0){
                        p("\nTu tiempo es menor o igual de 10 minutos, el estacionamiento ES GRATIS :)");
                    }
                    else{
                        p("\nAlgún Tiempo Ingresado Es Invalido. Intenta Otra Vez.\n");
                    }
                }
            }
            else{
                p("\nAlgún Tiempo Ingresado Es Invalido. Intenta Otra Vez.\n");
            } 
        break;
            
        case 10:
        //Programa 10: Letras mayúsculas
            char letra;
            p("***Detector de Letras Mayúsculas Rectas y/o Curvas - FUERA DE SERVICIO***\n\n");
            p("Ingrese una letra mayúscula de la (A - Z): ");
            s("%c", &letra);
            switch(letra){
        		case 'A':case 'E':case 'F':case 'H':case 'I':case 'K':case 'L':case 'M':case 'N':case 'T':case 'V':case 'W':case 'X':case 'Y':case 'Z':
        			p("\nLa letra %c es recta\n", letra);
        		break;
        		case 'C':case 'O':case 'S':case 'U':case 'Q':
        			p("\nLa letra %c es curva\n", letra);
        		break;
        		case 'B':case 'D': case 'G':case 'J':case 'P':case 'R':
        			p("\nLa letra %c es curva y recta\n", letra);
        		break;
        	default:p("\nCaracter Inválido. Intenta Otra Vez.\n");
        }
        break;
           
        case 11:
        //Programa 11: Calculadora con caracteres
            char mat;
            p("***Calculadora con Caracteres - FUERA DE SERVICIO***\n\n");
            p("Ingresa un operador matemático: ");
            s("%c", &mat);
            p("Ingresa el primer número entero: ");
            s("%i", &n1);
            p("Ingresa el segundo número entero: ");
            s("%i", &n2);
            switch(mat){
                case '+':
                    res=n1+n2;
                    p("\n\n%i + %i = %.0f", n1, n2, res);
                    break;
                case '-':
                    res=n1-n2;
                    p("\n\n%i - %i = %.0f", n1, n2, res);
                    break;
                case '*': case 'x': case 'X':
                    res=n1*n2;
                    p("\n\n%i * %i = %.0f", n1, n2, res);
                    break;
                case '/':
                    res=n1/n2;
                    p("\n\n%i / %i = %.2f", n1, n2, res);
                    break;
                case '%':
                    res=n1%n2;
                    p("\n\n%i %% %i = %.0f", n1, n2, res);
                    break;
                case '^':
                    res=pow(n1,n2);
                    p("\n\n%i ^ %i = %.0f", n1, n2, res);
                    break;
                default: p("Alguna Opción es Inválida. Intenta de Nuevo.\n");
            }
        break;
        
        default: p("Opción Invalida.\n");
    }
    p("\nFin del programa.");
    return 0;
}








