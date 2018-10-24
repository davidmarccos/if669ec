#include <stdio.h>

int main(){
   
   float grana, acumulador=0, media, cont=0;
   
   do{
      scanf("%f", &grana);
      
      if(grana > 0){
         acumulador = grana + acumulador;
         cont++;
      }
      
   }while(grana > 0);
   
   if(cont > 0){
   media = acumulador/cont;
   }
   printf("%.2f\n", acumulador);
   printf("%.2f", media);
   
   return 0;
}