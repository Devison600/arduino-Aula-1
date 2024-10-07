#include<stdio.h>
int main(){
    int distancia;
    float combustivel;
    float cmv;
    printf("digite a distancia percorrida:");
    scanf("%d",&distancia);
    printf("digite o consumo de combustivel:");
    scanf("%f",&combustivel);
    cmv = distancia / combustivel;
    printf("%f", cmv);
}