#include<stdio.h>
#include<math.h>
int main(){
float idadenadador;
float categoria;
printf("qual a idade do nadador?:");
scanf("%f",&idadenadador);
if (idadenadador <= 10){
printf("infantil:");
}
if (idadenadador > 10 && idadenadador <= 17 ){
printf("juvenil:");
}
if (idadenadador >17 ){
printf("senior:");  
}

}