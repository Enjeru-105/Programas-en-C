#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main(){
	float calif;
	int intcalif;
	p("****Evaluador de calificaciones****\n\n");
	p("Introduzca su calificaci%cn del 0 al 10: ",162); s("%f",&calif);
	if(calif<=10)
		intcalif = calif;
	else
		intcalif = 11;
	switch(intcalif){
		case 10: case 9:
			p("\n%.2f Es una calificaci%cn Sobresaliente.\n",calif,162);break;
		case 8: case 7:
			p("\n%.2f Es una calificaci%cn Notoria.\n",calif,162);break;
		case 6:
			p("\n%.2f Es una calificaci%cn Aprobatoria.\n",calif,162);break;
		case 5: case 4: case 3: case 2: case 1: case 0:
			p("\n%.2f Es una calificaci%cn Reprobatoria.\n",calif,162);break;
		default:
			p("\nCalificaci%cn Introducida Erronea. Saliendo del programa.\n",162);
	}
	return 0;
}
