#include<stdio.h>
#include<math.h>
int main(){
float N1;
float N2;
float N3;
float N4;
float media;
printf("qual a nota 1 do aluno:");
scanf("%f",&N1);
printf("qual a nota 2 do aluno:");
scanf("%f",&N2);
printf("qual a nota 3 do aluno:");
scanf("%f",&N3);
printf("qual a nota 4 do aluno:");
scanf("%f",&N4);
media = (N1 + N2 + N3 + N4) / 4;
printf("%f",media);
if (media < 4){
printf("aluno reprovado:");
}
if (media >= 4 && media < 7 ){
printf("aluno no exame final:");
}
if (media >=7 ){
printf("aluno aprovado:");  
}

}