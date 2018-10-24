#include <stdio.h>

int main(){
   
   int  n, t[1000], v[1000], i, distanciatotal=0;
   
   do{
      scanf("%d", &n);
   }while(n < 1 || n > 1000);
   
   for(i=0;i<n;i++){
      
      do{
         scanf("%d",&t[i]);
      }while(t[i] < 1 || t[i] > 100);
      
      do{
         scanf("%d",&v[i]);
      }while(v[i] < 0 || v[i] > 120);
      
   }
   
   for(i=0;i<n;i++){
      distanciatotal += t[i]*v[i];   
   }
   
   printf("%d", distanciatotal);
}