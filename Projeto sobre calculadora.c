#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int operacao;
    printf("Escolha uma operacao:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("Digite o numero da operacao (1-4): ");
    scanf("%d", &operacao);
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    if (operacao == 1) {
        resultado = num1 + num2;
        printf("Resultado da adicao: %.2f\n", resultado);
    } 
    else if (operacao == 2) {
        resultado = num1 - num2;
        printf("Resultado da subtracao: %.2f\n", resultado);
    } 
    else if (operacao == 3) {
        resultado = num1 * num2;
        printf("Resultado da multiplicacao: %.2f\n", resultado);
    } 
    else if (operacao == 4) {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado da divisao: %.2f\n", resultado);
        } else {
            printf("Erro: Divisao por zero nao e permitida!\n");
        }
    } 
    else {
        printf("Operacao invalida!\n");
    }

    return 0;
}