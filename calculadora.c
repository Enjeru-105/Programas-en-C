/*********************
This is an Easter Egg 
*********************/

#include <stdio.h> //Biblioteca
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf

int main(){
	int num1,num2,res; //num1 = operador 1; num2 = operador 2; res= resultado de las operaciones entre num1 y num2
	float nf1,nf2,rf; //Variables flotantes para convertir y usar mis operadores en la división
	int i=1, opc; //i = contador para la estructura repetitiva; opc= las opciones del switch
	do{
		system("cls");
		p("****CALCULADORA****\n");
		p("Realiza operaciones con 2 n%cmeros enteros que ingreses\n",163);
		p("Selecciona una operaci%cn a realizar:\n1 = Suma\n2 = Resta\n3 = Multiplicaci%cn\n4 = Divisi%cn\n0 = Salir Del Programa\nSelecci%cn: ",162,162,162,162);
		s("%i",&opc);
		if(opc>0&&opc<=4){
			system("cls");
			p("Introduce el primer Operando: ");s("%i",&num1);
			p("Introduce el segundo Operando: ");s("%i",&num2);
		}
		switch(opc){
			case 1: //Suma
				res=num1+num2; //hago la suma del operador 1 y el operador 2 y la guardo en la variable res
				p("\n%i + %i = %i",num1,num2,res);
				
				break;
			case 2: //Resta
				res=num1-num2;
				p("\n%i - %i = %i",num1,num2,res);break;
			case 3: //Multiplicación
				res=num1*num2;
				p("\n%i x %i = %i",num1,num2,res);break;
			case 4: //División
				if(num2!=0){
					nf1 = (float)num1; //Casteo variable 1
					nf2 = (float)num2; //Casteo variable 2
					rf = nf1/nf2;
					p("\n%.2f / %.2f = %.2f",nf1,nf2,rf);break;
				}
				else
					p("\nLAS DIVISIONES ENTRE 0 NO SON POSIBLES");break;
			case 0:
				i=0; break;
			default:
				p("\n\nOpci%cn inv%clida, int%cntalo otra vez.\n",162,160,130);
		}
		if(opc>0&&opc<=4){
			p("\n\nDesea repetir el programa?\nCualquier n%cmero entero = Si\n0 = No\nSelecci%cn: ",163,162);
			s("%i",&i);
			switch(i){
				case 0:
					p("\nCerrando el programa\n");i=0;;break;
				default:
					system("cls");
					p("\nReiniciando el programa");
			}
		}
		system("pause");system("cls");
	}while(i!=0);
	return 0;
}
