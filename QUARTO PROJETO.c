#include<stdio.h>
int main(){
    int imc;
    int peso;
    float altura;
    printf("digite o peso:");
    scanf("%d",&peso);
    printf("digite sua altura:");
    scanf("%f",&altura);
    imc = peso/(altura*altura);
    printf("%d", imc);
}