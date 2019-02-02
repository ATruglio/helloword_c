#include <stdio.h>
int main(){
int a,b,c,d,e,max;
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
max=a;
if (max<b)
	max=b;
if(max<c)
	max=c;
if(max<d)
	max=d;
if(max<e)
	max=e;
printf("Il numero maggiore e \n %d",a);
return 0;
}