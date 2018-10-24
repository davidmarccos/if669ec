#include <stdio.h>

int main(){
   int a, b, i, resultado=0;
   
   scanf("%d", &a);
   //fflush(stdin);
   scanf("%d", &b);

   
   if(b>a){
   
       for(i=a;i<=b;i++){
          if(i>=0){
            resultado+=a;
          }
            a++;
       }   
       printf("%d", resultado);
   }
   
   else if(b<a){
   
       for(i=b;i<=a;i++){
          if(i>=0){
            resultado+=b;
          }
            b++;
       }   
       printf("%d", resultado);
   }
  
  return 0;
}