/******************************************************************************
This is an Easter Egg
La vida es una lenteja, o la toma o la deja
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define p printf
#define s scanf
#define g getchar()
int i,j;//Variables Globales

//Prototipado de funciones
void Arr_Inv();//Función arreglo inverso
void Arr_Cub();//Función arreglo al cubo
void Mult_Arr();//Función multiplicación de arreglos
void Arr_Ran();//Función arreglo aleatorio
void Arrcad_rep();//Función arreglo cadena repetida

int main()
{
    int rep=1,op;
    do{
        p("****Multiprograma Arreglos Unidimensionales****\n\n");
        p("1. Arreglo Inverso\n2. Arreglo al Cubo\n3. Multiplicación de Vectores\n4. Vector Aleatorio sin Repeticiones\n5. Cadena con Letras Repetidas\n0. Salir\nOpción: ");
        s("%i", &op);
        system("clear");
        switch(op){
            case 0:
                rep=0;break;
            case 1:
                Arr_Inv();break;//Función arreglo inverso
            case 2:
                Arr_Cub();break;//Función arreglo al cubo
            case 3:
                Mult_Arr();break;//Función multiplicación de arreglos
            case 4:
                Arr_Ran();break;//Función arreglo aleatorio
            case 5:
                Arrcad_rep(); break;//Función arreglo cadena repetida
            default:
                p("\nOpción erronea, intente otra vez");
        }
        p("\n\nPresione Enter para continuar...");
        g;g;
        system("clear");
    }while(rep==1);

    return 0;
}

void Arr_Inv(){//Función arreglo inverso Ejercicio 1
    int ran[8]={5,10,1,26,1,4,2,-7};
    p("\nArreglo original:\n|");
    for(i=0;i<=7;i++)
        p(" %i |",ran[i]);
    p("\n\nArreglo en forma inversa:\n|");
    for(i=7;i>=0;i--)
        p(" %i |",ran[i]);
}

void Arr_Cub(){//Función arreglo al cubo Ejercicio 2
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    p("\nArreglo original:\n|");
    for(i=0;i<10;i++)
        p(" %i |",arr[i]);
    p("\nArreglo al cubo:\n|");
    for(i=0;i<10;i++)
        p(" %.0f |",pow(arr[i],3));
}

void Mult_Arr(){//Función multiplicación de arreglos Ejercicio 3
    int arr1[10]={1,2,3,4,5,6,7,8,9,10},arr2[10]={10,20,30,40,50,60,70,80,90,100},arr3[10];
    p("Vector 1:\n|");
    for(i=0;i<10;i++)
        p(" %i |",arr1[i]);
    p("\n\nVector 2:\n|");
    for(i=0;i<10;i++)
        p(" %i |",arr2[i]);
    p("\n\nVector a partir de la multiplicación del vector 1 y el vector 2:\n|");
    for(i=0;i<10;i++){
        arr3[i]=arr1[i]*arr2[i]; //Multiplica lo que hay en la posición del vector 1 y 2 y lo guarda en el vector 3
        p(" %i |",arr3[i]);
    }
}

void Arr_Ran(){//Función arreglo aleatorio Ejercicio 4
    int arr[20], no_rep[20],x=0,y=0;//'x' y 'y' son variabels auxiliares
    p("Vector aleatorio:\n|");
    srand(time(NULL));
    for(i=0;i<20;i++){
        y=0;//Variable auxiliar que cuenta cuantas veces se repite una letra
        arr[i]=(rand()%11);
        no_rep[i]=-1;//Lleno el vector de '-1' para que cuando encuentre un 0 en el vector 'arr[]' no piense que se repitió ya
        p(" %i |",arr[i]);
        for(j=0;j<i;j++){//Recorre el vector hasta donde se ha llenado
            if(no_rep[j]!=arr[i]){//Verifica cuantas veces NO se repite un número
                y++;//Guarda el número de veces que NO se repite ese número
            }
        }
        if(y==j){//Si el número de veces que NO se repite un número es igual al de espacios llenados actuales del vector, significa que no se ha repetido
            no_rep[x]=arr[i];//guardas el valor que no se ha repetido aún en la posición x del vector no_rep
            x++;//x será la variable que nos ayude a contar cuantos espacios finales tendrá el vector no_rep
        }
    }
    p("\n\nVector sin repetición:\n|");
    for(i=0;i<x;i++){//x es el número final de números guardados que no se repiten
        p(" %i |",no_rep[i]);
    }
}

void Arrcad_rep(){//Función arreglo cadena repetida Ejercicio 5
    char cad[32]="p i r i p i t i f l a u t i c a";//Palabra separada con espacios, ocupa el doble de caracteres
    int arr[16],x=0;
    p("Cadena: %s",cad);
    p("\nVector: ");
    for(i=0;i<32;i+=2){
        x=0;//Variable auxiliar que guardará las veces que se repite una letra
        for(j=0;j<32;j+=2){
            if(cad[j]==cad[i])//Busca cuantas veces aparece una letra en la cadena
                x++;
        }
        if(i!=30)//Verifica la posición de la cadena para imprimir o no la ','
            p("%i,",x);
        else
            p("%i",x);
    }
}
