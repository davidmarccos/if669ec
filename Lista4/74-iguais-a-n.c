#include <stdio.h>

int main(){
   int cont=0, i;
   int vetor[101];
   
   //ler vetor
   for(i=0;i<101;i++){
      scanf("%d", &vetor[i]);
   }
   
   //sequencia
   for(i = 0; i<10; i++){
      if(vetor[i] == vetor[100]){
         cont++;
         printf("%d\n", i);
      }
   }
  
   return 0;
}