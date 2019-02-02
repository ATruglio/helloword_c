#include <stdio.h>
int main(){
int a,b;
printf("Inserisci un numero \n");
scanf("%d",&a);
printf("Inserisci un secondo numero \n");
scanf("%d",&b);
if(a<b)
	a=b;
printf("Il numero maggiore tra i due e \n %d",a);
return 0;
}