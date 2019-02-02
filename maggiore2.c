#include <stdio.h>
int main(){
int a,b,max;
printf("Inserisci un numero \n");
scanf("%d",&a);
printf("Inserisci un secondo numero \n");
scanf("%d",&b);
max=a;
if(a<b)
	max=b;
printf("Il numero maggiore tra i due e \n %d",max);
return 0;
}