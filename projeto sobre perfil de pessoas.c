#include<stdio.h>
int main(){
int soma;
int data1;
int data2;
int resto;
printf("digite os dois primeros numeros da sua data de nascimanto:");
scanf("%d",&data1);
printf("digite os dois ultimos numeros da sua data de nascimento:");
scanf("%d",&data2);
soma = (data1+data2);
resto = (soma % 5);
if(resto == 0){
printf("timido");
}
if(resto ==1){
printf("sonhador");
}
if(resto ==2){
printf("paquerador");
}
if(resto == 3){
printf("atraente");
}
if(resto == 4){
printf("irrestivel:");
}
}