#include <stdio.h> 
int main(void) { 
 float c, j; 
 int p, i; 
 printf("Informe o capital: "); 
 scanf("%f",&c); 
 printf("Informe os juros: "); 
 scanf("%f",&j); 
 printf("Infome  periodo? "); 
 scanf("%d",&p); 
 for(i=1; i<=p; i++) { 
 c = (1+j/100)*c; 
 printf("%d. mes: R$ %.2f\n", i, c); 
 } 
 return 0; 
}