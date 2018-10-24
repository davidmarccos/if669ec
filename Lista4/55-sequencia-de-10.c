#include <stdio.h>

int main(){
   int cont=0, i;
   int vetor[11];
   
   //ler vetor
   for(i=1;i<11;i++){
      scanf("%d", &vetor[i]);
   }
   
   //sequencia
   for(i = 1; i<11; i++){
      if(vetor[i] == vetor[10])
         cont++;
   }
   printf("O numero %d apareceu %d vezes", vetor[10], cont);
   
   return 0;
}