#include <stdio.h>

int main(){
   
   int n, l, i, j, k, cont=0;
   
   
   do{
      scanf("%d", &n);
   }while(n <= 0 /*&& printf("ops n menor que zero\n")*/);
   
   while(cont++ < n){   
      do{
         scanf("%d", &l);
      }while(l < 3 || l > 40);
      
      do{
         scanf("%d", &i);
      }while(i > l-2);
      
      /*printf("%d\n", n);
      printf("%d\n", l);
      printf("%d\n", i);*/
   }
   
   
   
   
   
}