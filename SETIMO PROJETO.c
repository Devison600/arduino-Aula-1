#include<stdio.h>
int main(){
    float tamanho;
    float velocidade;
    float tempo;
    printf("digite o tamanho do arquivo:");
    scanf("%f",&tamanho);
    printf("digite a velocidade da conexao:");
    scanf("%f",&velocidade);
    tempo = (tamanho / velocidade);
    printf("%f", tempo);
}