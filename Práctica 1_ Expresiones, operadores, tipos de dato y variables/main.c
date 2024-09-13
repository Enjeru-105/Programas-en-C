/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define p printf

int main()
{
    //Programa de datos personales
    char Nom[24] = "Angel Gómez Comparán", Uni[30]= "Universidad de Guadalajara", Carr[26] = "Ingeniería Informática";
    int Ed = 22, Cod = 216466212, Sem = 1;
    p("---- Datos Personales ----\n");
    p("Hola Mundo, mi nombre es %s tengo %i años\nEstudio en la %s, en la carrera de %s\nActualmente curso el %iº semestre y mi código de alumno es %i.", Nom, Ed, Uni, Carr, Sem, Cod);
    
    //Operaciones de variables
    float N1 = 55, N2 = 21.03, Pot1, Pot2;
    p("\n\n---- Suma de Variables ----");
    p("\nVariable 1: %.0f \nVariable 2: %.2f", N1, N2);
    p("\nSuma: %.2f", N1+N2); 
    p("\nResta: %.2f", N1-N2);
    p("\nMultiplicación: %.2f", N1*N2);
    p("\nDivisión: %.4f", N1/N2);
    p ("\nMódulo: %.2f", fmod(N1,N2));
    Pot1 = pow(N1, 3);
    Pot2 = pow(N2, 3);
    p("\nElevados a la 3ra potencia: 1º= %.0f, 2º= %.2f", Pot1, Pot2);
    
    //Operaciones Relacionales
    int A=26, B=5;
    p("\n\n---- Operadores Relacionales ----");
    p("\n%d igual a %d: %d", A, B, A==B); //C = A==B;
    p("\n%d diferente a %d: %d", A, B, A!=B);
    p("\n%d mayor que %d: %d", A, B, A>B);
    p("\n%d menor que %d: %d", A, B, A<B);
    p("\n%d mayor o igual a %d: %d", A, B, A>=B);
    p("\n%d menor o igual a %d: %d", A, B, A<=B);

    //Operaciones Lógicas
    int Op1, Op2;
    p("\n\n---- Operadores lógicas ----");
    Op1= !(A-5>=B+9 && B!=A);
    Op2= (B*5<A/3) || !(A==pow(B,2));
    p("\nResultado 1: %d", Op1);
    p("\nResultado 2: %d", Op2);

    return 0;
}

