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
    int i,num,mult,l=0;
    char j,k;
    p("****Números del 1 al 100 sin múltiplos del 7****\n\n");
    for(i=1;i<=100;i++){
        if(i%7!=0){
            if(i!=100)
            p("%i, ",i);
            else
            p("%i",i);
        }
    }
    p("\n\nPresiona enter para continuar al siguiente programa...");
    getchar();
    p("\n\n****Numeros perfectos****\n\n");
    p("Digite un número entero: ");s("%i", &num);
    for(i=1;i!=num;i++){
        if(num%i==0){
            mult+=i;
            if(i!=num)
            l=i;
        }
    }
    if(mult==num){
        p("%i es perfecto, porque %i = ", num,num);
        for(i=1;i!=num;i++){
            if(num%i==0){
                if(i==l)
                p("%i.",i);
                else
                p("%i + ",i);
            }
            
        }
    }
    else{
        p("%i no es perfecto, porque %i ≠ ", num,num);
        for(i=1;i!=num;i++){
            if(num%i==0){
                if(i==l)
                p("%i.",i);
                else
                p("%i + ",i);
            }
            
        }
    }
    p("\n\nPresiona enter para continuar al siguiente programa...");
    getchar();
    getchar();
    p("\n\n****Abecedatio****\n\n");
    for(j='z';j>='a';j--){
        for(k=j;k>='a';k--){
            p("%c",k);
        }
        p("\n");
    }
    p("\n\nFin del programa programa...");
    return 0;
}

