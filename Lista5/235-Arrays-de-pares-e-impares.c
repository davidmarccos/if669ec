#include <stdio.h>

int main(){
   
   int par[5];
   int impar[5];
   //int n,i,j, aux1=0, aux2=0, k1=0,k2=0;
   
   int i,j,tam1=0,tam2=0, n, aux1=0, aux2=0, lotou1=0, lotou2=0;
   int p1=0, p2=0;
   
   for(i=0;i<=14;i++){
      
      scanf("%d", &n);
      
      if(lotou1==0){
         if(n%2==0){
            par[tam1] = n;
            tam1++;
            if(tam1 >= 5){
               aux1++;
            }
         }
      }
      
      if(lotou2==0){
         if(n%2==1){
            impar[tam2] = n;
            tam2++;
            if(tam2 >= 5){
               aux2++;
            }
         }
      }
      
      //PAR
      if(tam1 == 5 && lotou1 == 0){
         for(j=0;j<=4;j++){
            printf("par[%d] = %d\n", j, par[j]);
         }
         lotou1 = 1;
      }
      //IMPAR
      if(tam2 == 5 && lotou2 == 0){
         for(j=0;j<=4;j++){
            printf("impar[%d] = %d\n", j, impar[j]);
         }
         lotou2 = 1;
      }
      
      
      //DEPOIS DE UM DOS DOIS PREENCHIDOS
      
      //IMPAR
      if(lotou2 = 1){
         for(j=0;j<=aux2;j++){
            if(aux2 < 5){
            printf("impar[%d] = %d\n", j, impar[j]);
            }else{
               p2++;
            }
         }
         if(p2 > 0){
            for(j=0;j<=p2;j++){
               printf("impar[%d] = %d\n", j, impar[j]);
            }
         }
      }
      
      
      //PAR
      if(aux1 < 5 && i == 14){
         for(j=0;j<=aux1;j++){
            if(aux1 < 5){
            printf("par[%d] = %d\n", j, par[j]);
            }else{
               p1++;
            }
         }
         if(p1 > 0){
            for(j=0;j<=p1;j++){
               printf("par[%d] = %d\n", j, par[j]);
            }
         }
      }
   
      
   }
   
   
   
   /*for(i=1;i<=10;i++){
      scanf("%d", &n);
      if(n%2==0){
         par[aux1] = n;
         aux1++;
         if(aux1 >= 6){
            k1++;
         }
      }else{
         impar[aux2] = n;
         aux2++;
          if(aux1 >= 6){
            k1++;
         }
      }
      if(aux1 == 4){
         for(j=0;j<=aux1-1 && j<5;j++){
            printf("par[%d] = %d\n", j, par[j]);
         }
      }
      if(aux2 == 4){
         for(j=0;j<=aux2-1 && j<5;j++){
            printf("impar[%d] = %d\n", j, impar[j]);
         }
      }
   }
   
   aux1 = 0;
   aux2 = 0;
   
   for(i=0;i<=4;i++){
      scanf("%d", &n);
      if(n%2==0){
         par[aux1] = n;
         aux1++;
      }else{
         impar[aux2] = n;
         aux2++;
      }
      if(i == 4){
         for(j=0;j<aux2+k2;j++){
            printf("impar[%d] = %d\n", j, impar[j]);
         }
         for(j=0;j<aux1+k2;j++){
            printf("par[%d] = %d\n", j, par[j]);
         }
         
      }
   }*/
   
   return 0;
}