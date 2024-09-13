/******************************************************************************
Este es un copy paste del programa que está en mi multi programa
Solo para mostrarle que mi código si funciona pero no sé porque
allá no lo hace, por eso se lo adjunto a parte.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf

int main()
{
    //Programa 2: Calculadora con caracteres
    int n1,n2;
    float res;
    char mat;
    p("***Calculadora con Caracteres***\n\n");
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
        default: p("\nAlguna Opción es Inválida. Intenta de Nuevo.\n");
    }
    p("\nFin del programa.");
    return 0;
}


