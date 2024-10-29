#include <stdio.h>
int main(){
float M1,M2,M3;
printf("digite a medida 1:");
scanf("%f",&M1);
printf("digite a medida 2:");
scanf("%f",&M2);
printf("digite a medida 3:");
scanf("%f",&M3);
if(M1 == M2 && M2 == M3 && M1 == M3){
printf("triangulo equilatero");
}
if(M1==M2 && M1!=M3 || M1==M2 && M2!=M3 || M1==M3 && M1!=M2 || M2==M3 && M2!=M1 || M2==M3 && M3!=M1){
printf("triangulo isosceles");
}
if(M1 != M2 && M2 != M3 && M1 != M3){
printf("triangulo escaleno");
}
}