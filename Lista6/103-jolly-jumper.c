#include <stdio.h>
   
int main() {
   
   int n, numeros[3000];

   int i, aux = 0, k = 1;
   
   do{
      //lendo o numero
      scanf("%d", &n);
      
      //adicionando os numeros no array numeros
      for(i = 0; i < n; i++){
         scanf("%d", &numeros[i]);
      }
      
      for(i = 0; i < n; i++){
         if (numeros[i] < numeros[i + 1]){
            if ((numeros[i + 1] - numeros[i]) == (n - k))
               aux++;
            else
               break;
         }
         else{
            if ((numeros[i] - numeros[i + 1]) == (n - k))
               aux++;
            else
               break;
         }
         
         k++;
      }
      
      if (aux == (n-1))
         printf("Jolly\n");
      else
         printf("Not jolly\n");
         
   }while(!feof(stdin));
}
