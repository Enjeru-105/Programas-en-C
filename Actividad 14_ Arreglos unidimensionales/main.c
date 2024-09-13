/******************************************************************************
This is an Easter Egg
La vida es una lenteja, o la toma o la deja
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf
#define g getchar()

int main()
{
    int A[5]={15,13,149,87,22}, i, sum=0;
    for(i=0;i<=4;i++)
        sum+=A[i];
    p("La suma total es: %i",sum);
    p("\n\nPresione ENTER para continuar..."); g;system("clear");
    
    int op;
    p("Los elementos del arreglo son: ");
    for(i=0;i<=4;i++){
        if(i<4)
            p("%i, ",A[i]);
        else
            p("%i",A[i]);
    }
    p("\nDeseas cambiar algún elemento:\n1. Si\n2. No\nOpción: ");s("%i",&op);
    if(op==1){
        p("\nIngresa la posición a cambiar: ");s("%i", &i);
        p("Ingresa el nuevo elemento: ");s("%i", &A[i]);
        p("El nuevo arreglo es: ");
        for(i=0;i<=4;i++){
            if(i<4)
                p("%i, ",A[i]);
            else
                p("%i",A[i]);
        }
    }
    p("\n\nPresione ENTER para continuar..."); g;g;system("clear");
    
    int cant, dato;
    p("Cuantos Datos tendrá el arreglo de enteros: ");s("%i", &cant);p("\n");
    int B[cant];
    for(i=0;i<cant;i++){
        p("Ingrese el %i° dato entero: ",i+1);s("%i", &dato);
        B[i]=dato;
    }
    p("\nSu arreglo final es: ");
    for(i=0;i<cant;i++){
        if(i<cant-1)
            p("%i, ",B[i]);
        else
            p("%i",B[i]);
    }
    return 0;
}
