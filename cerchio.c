#include <stdio.h>
int main(){
double pi=3.14,a,c;
int r;
printf("Inserire il raggio del cerchio");
scanf("%d",&r);
a=r*r*pi;
c=2.*r*pi;
printf("La circonferenza del cerchio e %f \n",c);
printf("La superfice  del cerchio e %f \n",a);
return 0;
}