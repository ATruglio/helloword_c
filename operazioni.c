#include <stdio.h>
int main(){
int a,b,dif,som,pro,div,r;
printf("Inserisci il primo numero");
scanf("%d",&a);
printf("Inserisci il secondo numero");
scanf("%d",&b);
som=a+b;
dif=a-b;
pro=a*b;
div=a/b;
r=a%b;
printf("La somma dei due numeri e %d \n" ,som);
printf("La differenza dei due numeri e %d \n" ,dif);
printf("Il prodotto dei due numeri e %d \n" ,pro);
printf("Il quoziente dei due numeri e %d \n", div);
printf("Il resto dei due numeri e %d \n" ,r);
return 0;
}