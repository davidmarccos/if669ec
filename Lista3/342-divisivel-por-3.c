#include <stdio.h>

int main(){
   int i, n, r=0;
   
   scanf("%d", &n);
   
   for (i=1;i<=n;i++) {
   if(n%i==0 &&i%3==0)
      r++;
   }
   
   if(r==0)
      printf("O numero nao possui divisores multiplos de 3!\n");
   else
      printf("%d\n", r);
   
   return 0;
}
