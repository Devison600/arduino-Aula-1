#include <stdio.h>
int main() {
 int cont;
 char voto;
 int somaA=0;
 int somaB=0;
 int somaC=0;
 int somaX=0;
 int e;
 printf("Quantos Eleitores?:");
 scanf("%d", &e);
 for(cont = 1; cont <=e; cont++){
 printf("%d voto: (candidatos: a, b, c. nulo = qualquer letra) ", cont);
 scanf("%*C%c", &voto);
 if(voto == 'a'){
 somaA++;
 } 
 else if(voto =='b'){
    somaB++;
}
 else if(voto =='c'){
somaC++;
}
 else{
    somaX++;
 }
}
 printf("Candidato A = %d votos\n", somaA);
 printf("Candidato B = %d votos\n", somaB);
 printf("Candidato C = %d votos\n", somaC);
 printf("Votos Nulos = %d \n", somaX);
}
