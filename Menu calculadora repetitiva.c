#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main(){
	int num1,num2,res;
	char oper;
	char opc;
	do{
		p("Que estructura de control quieres usar?\n1) For\n2) While\n3) Do While\n0) Salir\nSelecci%cn: ",162);
		s("%c",&opc);fflush(stdin);
		if(opc=='1' || opc=='2' || opc=='3'){
			p("\nIngresa el primer operador entero: ");s("%i",&num1);
			p("\nIngresa el segundo operador entero: ");s("%i",&num2);fflush(stdin);
		}
		switch(opc){
			case '1':
				for(;oper!='0';){
					p("\nQue operaci%cn quieres realizar?\n1) +\n2) -\n3) ^\n4) ||\n5) |\n6) &&\n7) &\n0) Salir\nSelecci%cn: ",162,162);s("%c",&oper);fflush(stdin);
					switch(oper){
						case '1':
							res= num1+num2;
							p("\n%i + %i = %i",num1,num2,res);
							break;
						case '2':
							res= num1-num2;
							p("\n%i - %i = %i",num1,num2,res);
							break;
						case '3':
							res= num1^num2;
							p("\n%i ^ %i = %i",num1,num2,res);
							break;
						case '4':
							res= num1||num2;
							p("\n%i || %i = %i",num1,num2,res);
							break;
						case '5':
							res= num1|num2;
							p("\n%i | %i = %i",num1,num2,res);
							break;
						case '6':
							res= num1&&num2;
							p("\n%i && %i = %i",num1,num2,res);
							break;
						case '7':
							res= num1&num2;
							p("\n%i & %i = %i",num1,num2,res);
							break;
						case '0':
							p("\nSaliendo del programa...");
							break;
						default:
							p("\nSelecci%cn erronea. Int%cntelo de nuevo...",162,130);
					}
					p("\n\n");
					p("Reiniciando el programa...");
				}
				break;
			case '2':
				while(oper!='0'){
					p("\nQue operaci%cn quieres realizar?\n1) +\n2) -\n3) ^\n4) ||\n5) |\n6) &&\n7) &\n0) Salir\nSelecci%cn: ",162,162);s("%c",&oper);fflush(stdin);
					switch(oper){
						case '1':
							res= num1+num2;
							p("\n%i + %i = %i",num1,num2,res);oper='0';
							break;
						case '2':
							res= num1-num2;
							p("\n%i - %i = %i",num1,num2,res);oper='0';
							break;
						case '3':
							res= num1^num2;
							p("\n%i ^ %i = %i",num1,num2,res);oper='0';
							break;
						case '4':
							res= num1||num2;
							p("\n%i || %i = %i",num1,num2,res);oper='0';
							break;
						case '5':
							res= num1|num2;
							p("\n%i | %i = %i",num1,num2,res);oper='0';
							break;
						case '6':
							res= num1&&num2;
							p("\n%i && %i = %i",num1,num2,res);oper='0';
							break;
						case '7':
							res= num1&num2;
							p("\n%i & %i = %i",num1,num2,res);oper='0';
							break;
						case '0':
							p("\nSaliendo del programa...");
							break;
						default:
							p("\nSelecci%cn erronea. Int%cntelo de nuevo...",162,130);
					}
					p("\n\n");
					p("Reiniciando el programa...");
				}
				break;
			case '3':
				do{
					p("\nQue operaci%cn quieres realizar?\n1) +\n2) -\n3) ^\n4) ||\n5) |\n6) &&\n7) &\n0) Salir\nSelecci%cn: ",162,162);s("%c",&oper);fflush(stdin);
					switch(oper){
						case '1':
							res= num1+num2;
							p("\n%i + %i = %i",num1,num2,res);oper='0';
							break;
						case '2':
							res= num1-num2;
							p("\n%i - %i = %i",num1,num2,res);oper='0';
							break;
						case '3':
							res= num1^num2;
							p("\n%i ^ %i = %i",num1,num2,res);oper='0';
							break;
						case '4':
							res= num1||num2;
							p("\n%i || %i = %i",num1,num2,res);oper='0';
							break;
						case '5':
							res= num1|num2;
							p("\n%i | %i = %i",num1,num2,res);oper='0';
							break;
						case '6':
							res= num1&&num2;
							p("\n%i && %i = %i",num1,num2,res);oper='0';
							break;
						case '7':
							res= num1&num2;
							p("\n%i & %i = %i",num1,num2,res);oper='0';
							break;
						case '0':
							p("\nSaliendo del programa...");
							;break;
						default:
							p("\nSelecci%cn erronea. Int%cntelo de nuevo...",162,130);
					}
					p("\n\n");
					p("Reiniciando el programa...");
				}while(oper!='0');
				break;
			case '0':
				p("\nSaliendo del programa...");
				break;
			default:
				p("\nSelecci%cn erronea. Int%cntelo de nuevo...",162,130);
		}
		p("\n\n");
		system("pause"); 
		if(opc!='0')
			system("cls");
	}while(opc!='0');
	return 0;
}
