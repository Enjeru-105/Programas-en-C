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
    int i;
    char j, l1, l2, may, men;
    p("****Números del 1 al 10****\n");
    for(i=1;i<=10;i++){//Ejemplo 1
        if(i<=9)
            p("%i, ",i);
        else
            p("%i",i);
    }
    p("\n\n****Letras de la A a la Z****\n");//Ejemplo 2
    for(j='A';j<='Z';j++){
        if(j<='Y')
            p("%c, ",j);
        else
            p("%c",j);
    }
    p("\n\n****Letras de la Z a la A****\n");//Ejemplo 2.1
    for(j='Z';j>='A';j--){
        if(j>='B')
            p("%c, ",j);
        else
            p("%c",j);
    }
    p("\n\n****Letras de la A a la Z exceptuando las Redondas****\n");//Ejemplo 2.2
    for(j='A';j<='Z';j++){
        if(j=='C'||j=='O'||j=='S'||j=='U'||j=='Q')
            continue;
        if(j<='Y')
            p("%c, ",j);
        else
            p("%c",j);
    }
    p("\n\n****Rango de letras del abecedario****\n");//Mostrar un rango de letras establecido por el usuario Ejemplo 2.3
    p("Introduzca 2 letras de rango\n(Introduzca ambas letras seguidas SIN ESPACIOS y presione enter): ");
    l1=getchar();fflush(stdin);
    l2=getchar();fflush(stdin);
    /*p("Introduzca una segunda letra mayúscula: ");
    s("%c", &l2);fflush(stdin);*/ //Código basura
    if(l1>l2){
        may=l1;
        men=l2;
    } 
    else{
        may=l2;
        men=l1;
    }
    for(j=men;j<=may;j++){
        if(j<=may-1)
            p("%c, ",j);
        else
            p("%c",j);
    }/*
    for(j='A';j<=l1;j++){
        if(j<=l1-1)
            p("%c, ",j); //Código basura
        else
            p("%c",j);
    }*/
    p("\n\n****Números del 1 al 15 exceptuando múltiplos de 3****\n");//Ejemplo 3
    for(i=1;i<=15;i++){
        if(i%3==0)
            continue;
        if(i<=13)
            p("%i, ",i);
        else
            p("%i",i);
    }
    p("\n\n****Leer Cualquier dato del teclado****\n");//Ejemplo 4
    for(;;){
        p("Introduzca cualquier caracter del teclado y presiona enter\nSi desea salir, introduzca 'S'\nEntrada: ");
        //j=getchar();fflush(stdin);
        s("%c", &j);fflush(stdin);
        if(j=='s'|| j=='S')
            break;
        p("\n");
    }
    return 0;
}

