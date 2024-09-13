/******************************************************************************
૮ • ﻌ - ა     (La vida es una lenteja, o la toma o la deja)    ฅ^•ﻌ•^ฅ
*******************************************************************************/
#include <stdio.h>
#define p printf
#define s scanf
#define g getchar()

void salida(int total, char denom[]){
    p(" %i %s\n",total,denom);
}

void proceso(int cantidad){
    int sig,ans,mss;
    ans = cantidad/12;
    mss=cantidad%12;
    sig = ans/100;
    ans-=sig*100;
    p("%i meses equivalen a:\n",cantidad);
    salida(sig,"siglo(s)");
    salida(ans,"año(s)");
    salida(mss,"mes(es)");
}

void verf(char mail[]);
void impr(int valid);

int main()
{
    int meses;
    char email[50];
    system("clear");
    p("Ingrese la cantidad de meses: "); s("%i", &meses);
    proceso(meses);
    p("\n\nPresione Enter para continuar al siguiente programa...");g;g;
    system("clear");
    p("Ingrese su dirección de Email: "); fgets(email,50,stdin);
    verf(email);
    return 0;
}

void verf(char mail[]){
    int i,x=0;
    for(i=0;i<50;i++){
        if(mail[i]=='@')
            x++;
    }
    impr(x);
}

void impr(int valid){
    if(valid!=0)
        p("\nSu dirección de correo es válida");
    else
        p("\nSu dirección de correo es inválida");
}