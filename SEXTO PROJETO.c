#include<stdio.h>
int main(){
    float comprimento;
    float largura;
    float valor;
    float custototal;
    printf("digite o comprimento da sala:");
    scanf("%f",&comprimento);
    printf("digite a largura da sala:");
    scanf("%f",&largura);
    printf("digite o valor do metro quadrado do carpete:");
    scanf("%f",&valor);
    custototal = (comprimento*largura)*valor;
    printf("%f", custototal);
}