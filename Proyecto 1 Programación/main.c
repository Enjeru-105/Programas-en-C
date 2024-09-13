/*
Declarar variables

Indicaciones:

tipo_dato nombre_variable;
tipo_dato nombre_variable = valor_asignado;

int -> dato de tipo entero
float-> dato de tipo flotante o real
char -> caracter y cadena

%d ó %i -> Clave ler y desplegar datos de tipo entero
%f -> flotante
%c -> dato de tipo caracter
%s -> dato de tipo cadena

Sintaxis:
    printf("<texto_a_mostrar> <clave_de_tipo_de_dato>", <>Variable_a_mostrar);
*/

#include <stdio.h> //Librería estandar para funciones de entrada y salida
#include <math.h> //Funciones matemáticas

int main()
{ //Inicio del programa principal
    int num_entero = 7;
    float num_real = 8.35;
    char caracter = 'A'; //Caracter -> 'Comillas simples' ; Cadena -> "Comillas dobles"
    char texto[20] = "Hola mundo";
    
    //salto de linea \n
    //Salida de datos en la pantalla -> printf
    printf ("Número entero: %d\n", num_entero);
    printf ("Número flotante: %f\n", num_real);
    printf ("Caracter: %c\n", caracter);
    printf ("Texto: %s\n", texto);
        
    //Operadores
    int A=20, B=10, C;
    printf ("\n\n---Operadores Aritméticos---");
    printf ("\nSuma: %d", A+B); //printf ("\nSuma: %d", A+B)
    printf ("\nResta: %d", A-B);
    printf ("\nMultiplicación: %d", A*B);
    printf ("\nDivisión: %d", A/B);
    printf ("\nMódulo: %d", A%B);
    C= pow(A, 2); //pow -> operación de la potencia
    printf ("\nPotencia: %d", C);
    //A = A + B;
    
    //operadores relacionales
    //A igual a B: respuesta
    printf ("\n\n---Operadores Relacionales o de la Comapración---");
    printf ("\n%d igual a %d: %d", A, B, A==B); //C = A==B;
    printf ("\n%d diferente a %d: %d", A, B, A!=B);
    printf ("\n%d mayor que %d: %d", A, B, A>B);
    printf ("\n%d menor que %d: %d", A, B, A<B);
    printf ("\n%d mayor o igual a %d: %d", A, B, A>=B);
    printf ("\n%d menor o igual a %d: %d", A, B, A<=B);
    
    //Operadores Lógicos A = 20, B = 10
    int op_and, op_or, op_not;
    op_and = A > B && B != A;
    op_or = A == B || A < B;
    op_not = !(A>B);
    printf ("\n\n---Operadores Lógicos---");
    printf ("\nOperador and: %d", op_and);
    printf ("\nOperador or: %d", op_or);
    printf ("\nOperador not: %d", op_not);
    
    //Operadores de asignación
    printf ("\n\n---Operadores de Asignación---");
    printf ("\nValor de A: %d", A);
    A+=B; // A = A + B
    printf ("\nValor de A con Suma: %d", A);
    A-=B;
    printf ("\nValor de A con Resta: %d", A);
    A*=B;
    printf ("\nValor de A con Multiplicación: %d", A);
    A/=3;
    printf ("\nValor de A con División: %d", A);
    A%=4;
    printf ("\nValor de A con Módulo: %d", A);
    
    
    return 1; //valor de retorno a la salida
} //Final
