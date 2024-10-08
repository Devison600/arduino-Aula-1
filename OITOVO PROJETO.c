#include<stdio.h>
#include<math.h>
int main(){
    float capital;
    float taxadejuros;
    float periodo;
    float montante;
    printf("digite o capital aplicado:");
    scanf("%f",&capital);
    printf("digite a taxa de juros mensal fixa:");
    scanf("%f",&taxadejuros);
    printf("digite o periodo de aplicacao:");
    scanf("%f",&periodo);
    montante = capital*pow((1+taxadejuros/100),periodo);
    printf("%f", montante);
}