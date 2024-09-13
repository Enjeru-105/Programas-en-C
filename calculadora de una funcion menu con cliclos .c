#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int patitowhile(float x);
int patitodo(float x);
int patitofor(float x);

int main(){
	int opc,rep;
	float num=-8;
	for(rep=1;rep;){//Ciclo para que el programa se repita tantas veces como quiera el usuario
        p("CALCULADORA DE VALORES DE LA FUNCI%CN: f(x)=(x+2)/(x-2)\n\n",162);
        p("Con que funci%Cn quieres hacerlo?\n1. While\n2. Do While\n3. For\n0. Salir\nSelecci%cn: ",162,162);
        s("%i",&opc);
        switch(opc){//Menu para ejecutar la calculadora con diferente ciclo
            case 1:
                patitowhile(num);break;
            case 2:
                patitodo(num);break;
            case 3:
                patitofor(num);break;
            case 0:
                p("\n\nSaliendo del programa...");
                rep=0;break;
            default:
                p("\n\nOpci%cn Incorrecta, Int%ctelo De Nuevo...",162,130);
        }
        if(opc==1 || opc==2 || opc==3){//Si el usuario elige no salir del programa, preguntar si quiere repetir
            do{
                p("\nDesea repetir el programa?\n1. Si\n0. No\nSelecci%cn: ",162);
                s("%i",&rep);
                if(rep!=1 && rep!=0){//Si la opcion es diferente de 1 o de 0, imprime que es incorrecta y se repite la pregunta
                    p("\nOpci%cn Incorrecta, Int%ctelo De Nuevo...\n\n",162,130);
                }
                if(rep==0){//Si es 0, sale del programa
                    p("\n\nSaliendo del programa...");
                }
            }while(rep!=1 && rep!=0);//Se repetira si la seleccion es diferente de 1 o 0
        }
        if(rep==1){//Siempre que se cumpla la condicion del for, va a pausar el programa y limpiar la pantalla para que se repite
            system("pause");system("cls");
        }
	}
	return 0;
}

int patitodo(float x){
    float res;
    do{
		if(x!=2){
			res = ((x+2)/(x-2));
			p("\nf(%.0f)->(x+2)/(x-2) = (%.0f+2)/(%.0f-2) = %.2f",x,x,x,res);
		}
		else
			p("\nf(%.0f)->(x+2)/(x-2) = (%.0f+2)/(%.0f-2) = Indeterminado",x,x,x);
        x++;
	}while(x<=8);
	p("\n\n");
	return 0;
}

int patitowhile(float x){
    float res;
    while(x<=8){
		if(x!=2){
			res = ((x+2)/(x-2));
			p("\nf(%.0f)->(x+2)/(x-2) = (%.0f+2)/(%.0f-2) = %.2f",x,x,x,res);
		}
		else
			p("\nf(%.0f)->(x+2)/(x-2) = (%.0f+2)/(%.0f-2) = Indeterminado",x,x,x);
        x++;
	}
	p("\n\n");
	return 0;
}

int patitofor(float x){
    float res;
    for(;x<=8;x++){
		if(x!=2){
			res = ((x+2)/(x-2));
			p("\nf(%.0f)->(x+2)/(x-2) = (%.0f+2)/(%.0f-2) = %.2f",x,x,x,res);
		}
		else
			p("\nf(%.0f)->(x+2)/(x-2) = (%.0f+2)/(%.0f-2) = Indeterminado",x,x,x);

	}
	p("\n\n");
	return 0;
}
