/******************************************************************************

    Entrada de datos por medio de la instrucción scanf()

            Tipo de dato y guardar ese dato en una variable
    Clave:
    %d o %i -> Leer números de tipo enteros
    %f -> Leer números de tipo real
    %c -> Leer datos de tipo caracter
    %s -> Leer datos de tipo cadena
    
    Sintaxis:
    scanf("<clave_tipo_dato>", &<variable>);  -> Datos de tipo entero, real, caracter
    scanf("<clave_tipo_dato>", <variable>);  -> Datos de tipo cadena
*******************************************************************************/
#include <stdio.h>

int main()
{
    /*
    //Solicitar 4 calificaciones y desplegar el promedio
    //Variables
    float cal1, cal2, cal3, cal4, suma, prom;
    
    //solicitar las calificaciones mediante scanf
    printf("Ingresa la primer calificación: ");
    scanf("%f", &cal1);
    printf("Ingresa la segunda calificación: ");
    scanf("%f", &cal2);
    printf("Ingresa la tercera calificación: ");
    scanf("%f", &cal3);
    printf("Ingresa la cuarta calificación: ");
    scanf("%f", &cal4);
    
    //proceso
    suma = cal1+cal2+cal3+cal4 ;
    prom = suma/4 ;
    
    //Despliegue de resultados
    printf("\n\nTu promedio es: %f", prom);
    
    //Acotar la cantidad de decimales %.<cantidad de decimales>f
    printf("\n\nTu promedio es: %.2f", prom);
    */
    
    //solicitar datos de tipo cadena y caracter
    //solicitar el nombre de la persona y una letra
    char letra;
    char nombre[100];
    int edad;
    printf("Ingresa una letra: ");
    scanf("%c", &letra);
    printf("Ingresa tu edad: ");
    scanf("%i", &edad);
    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);
    
    
    printf("\n\nTú nombre es: %s \nTu edad es: %i \nY la letra ingresada fue: %c", nombre, edad, letra);
    
    return 0;
}
