#include<stdio.h>
#include<math.h>
int main(){;
int copia;
float calculo;
printf("qual a quantidade de copias:");
scanf("%d",&copia);
if ( copia > 100 ){
calculo = (copia*0.20);
printf ("valor a ser pago: %.2f",calculo);
}
if (copia <=100){
calculo = (copia*0.25);
printf ("valor a ser pago: %.2f",calculo);
}


}