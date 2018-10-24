#include <stdio.h>

int main(){
   
   int i, a, b, aux=0;
   
   scanf("%d %d", &a, &b);
   
   if(a<=b){
      for(i=a;i<=b;i++){
         if (i%400==0){
      	   printf("%d\n", i);	
      	   aux++;
      	}
      	else if ((i % 4 == 0) && (i % 100 != 0)) {
      		printf("%d\n", i);	
      		aux++;
      	}
      }
   }
   if(aux==0){
     printf("-1");
   }
   
   return 0;
}