#include<stdio.h>
int main(void) {
int alunos,c;
float notas,acumulador=0,media;
printf("Informe o numero de alunos:");
scanf("%d",&alunos);
for(c=1; c <= alunos; c++){
printf("informe a nota do aluno %d\n", c);
scanf("%f",&notas);
acumulador += notas;
}
media = acumulador / alunos;
printf("a media do aluno e: %.2f", media);
return 0;
}
