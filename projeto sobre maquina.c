#include<stdio.h>
#include<math.h>
int main(){
int produzidas;
int defeituosas;
float calculo;
printf("qual a quantidade de pecas produzidas:");
scanf("%d",&produzidas);
printf("qual a quantidade de pecas defeituosas:");
scanf("%d",&defeituosas);
calculo = produzidas * 10/100;
if(defeituosas >= calculo){
printf("maquina precisa de manutencao");
}
if(defeituosas < calculo){
printf("maquina nao precisa de manutencao");
}}




