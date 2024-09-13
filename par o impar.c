/*********************
This is an Easter Egg 
*********************/

#include <stdio.h> //Biblioteca
#include <stdlib.h>
#define p printf
#define s scanf

int main()
{
	int num,i,opc;
	for(i=0;i!=1;){
		p("Ingresa un n%cmero entero: ",163);
		s("%i",&num);
		if(num%2==0 && num!=0)
		p("\n %i es un n%cmero par",num,163);
		else{
			if(num%2!=0 && num!=0)
			p("\n %i es un n%cmero impar",num,163);
			else
			p("\n %i no es par ni impar",num,163);
		}
		for(opc=0;opc!=1&&opc!=2;){
			p("\n\nQuieres repetir el programa?\n1 = Si\t2 = No\nRespuesta: ");
			s("%i",&opc);
			switch(opc){
				case 1:
					system("cls"); break;
				case 2:
					i=1;break;
				default:
					system("cls");p("\nError\nError\nError\nError\nREINICIA EL PROGRAMA...\n\n");system("pause");system("cls");break;
			}
			break;
		}
	}
	return 0;
}
