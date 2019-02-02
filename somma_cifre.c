#include <stdio.h>
int main(){
int a,b,c,d,s;
printf("Inserire un numero a tre cifre");
scanf("%d",&a);
if(a<100)
	printf("Il numero inserito e minore di tre cifre");
else if(a>999)
	printf("Il numero inserito e maggiore di tre cifre");
else {
	b=a%10;
	a/=10;
	c=a%10;
	a/=10;
	d=a%10;
	s=b+c+d;
	printf("La somma delle cifre e \n %d",s);
}
return 0;
}