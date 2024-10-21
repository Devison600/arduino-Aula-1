#include<stdio.h>
int main(){
int numero;
printf("digite o numero:");
scanf("%d",&numero);
if(numero == 1){
printf("saldo");
}
if(numero ==2){
printf("extrato");
}
if(numero ==3){
printf("saque");
}
if(numero == 4){
printf("sair");
}
if(numero!=1&&2&&3&&4){
printf("programa falhou");
}
}