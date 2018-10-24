#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stru{
   int o, p, b;
}medalhas;

typedef struct stru2{
   int pais; 
}final

int main(){
   int n /*num de paises*/, m /*num de modalidades esportivas na competicao*/;
   int i;
   
   do{
      scanf("%d %d", &n, &m);
   }while(n < 1 || n > 100 || m < 1 || m > 100);
   
   medalhas = (stru*) malloc(m*sizeof(stru));
   if(medalhas == NULL){
      exit(1);
   }
   
   for(i = 0; i < m; i++){
      do{
         scanf("%d %d %d", &medalhas.o, &medalhas.p, &medalhas.b);
      }while(o < 1 || o > n || p < 1 || p > n || b < 1 || b > n);
   }
   
   for(i=0;i<m;i++){
      
   }
   
}