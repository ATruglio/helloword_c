#include <stdio.h>
int main(){
int a,b,c,d,e;
printf("Inserisci un numero \n");
scanf("%d",&a);
printf("Inserisci un secondo numero \n");
scanf("%d",&b);
printf("Inserisci un terzo numero \n");
scanf("%d",&c);
printf("Inserisci un quarto numero \n");
scanf("%d",&d);
printf("Inserisci un quinto numero \n");
scanf("%d",&e);
if (a<b)
	a=b;
if(a<c)
	a=c;
if(a<d)
	a=d;
if(a<e)
	a=e;
printf("Il numero maggiore e \n %d",a);
return 0;
}