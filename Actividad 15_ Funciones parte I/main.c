/******************************************************************************

La vida es una lenteja, o la toma' o la deja'

*******************************************************************************/
#include <stdio.h>

void ejemplo()//Función de tipo de retorno nulo sin paso de parámetros owo
{
    printf("\nEsta es mi primer funcion");
  //ejemplo2(); Bucle infinito jeje
}

void ejemplo2(); //Prototipado de funciones

int suma(int num1, int num2)//Función con paso de parámetros
{
    int sum,opc; //Variable local
    sum = num1 + num2;
    printf("\n%d + %d = %d",num1,num2,sum);
    printf("\n\nDesea hacer otra suma?:\n1. Si\n2. No\nOpción: ");
    scanf("%d",&opc);
    if(opc==1){
        printf("\nIngrese el primer dato: "); scanf("%d", &num1);
        printf("Ingrese el segundo dato: "); scanf("%d", &num2);
        suma(num1,num2);
    }
    //return sum;
}

void saludo(char nombre[],char mensaje[]){
    printf("\n%s %s", mensaje,nombre);
}

//Función de tipo flotante que reciba 2 parámetros (Datos)
//Divide a esos datos y retorna el resultado
float Division(float n1, float n2);
//Función de tipo void que reciba 3 parámetros de diferentes tipos
void datos(char nombre[], int edad, float altura);

void main() //Función principal uwu
{
    float A;
    A = Division(20,32);
    printf("****División****\n\n");
    printf("20 / 32 = %.4f", A);
    printf("\n\n****Nombre****\n");
    datos("Angel", 22, 1.72);
    //saludo("Angel", "Buenos días...");
    //saludo("Buenos días...", "Angel");
    //saludo("Jorge", "adiós");
    //suma(10,7);
    //int A;
    //A = suma(10,7);
    /*ejemplo();
    ejemplo2();
    suma(10,7);*/
    //printf("\n%d",suma(10,7));
   // printf("\n%d",A);
}

void ejemplo2()//Definir la función prototipo
{
    ejemplo();
    printf("\nHola mundo");
}

float Division(float n1, float n2){
    float res=(n1/n2);
    return res;
}

void datos(char nombre[], int edad, float altura){
    printf("\nNombre = %s\nEdad = %d\nEstatura = %.2f", nombre,edad,altura);
}
