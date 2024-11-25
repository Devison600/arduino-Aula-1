#include <stdio.h> 
int main(void) { 
 int p,c,i,im = 0; 
 printf("informe o numero de idosos\n"); 
 scanf("%d",&p); 
 for(c=1; c<=p; c++) { 
 printf("digite a idade do paciente: %d\n", c); 
 scanf("%d",&i); 
 if(i > im){
 im = i;
 } 
 } 
 printf("O idoso mais velho tem %d anos\n", im); 
 return 0; 
}