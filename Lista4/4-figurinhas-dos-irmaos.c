#include <stdio.h>

int main(){
   
   int j=0, m=0, smaria=0, sjoao=0, auxj=0, auxm=0;
   int i, n, k, nserie[10000];
   
   do{
   scanf("%d", &n);
   }while(n > 10000);
   
   for(i=0;i<n;i++){
      scanf("%d", &nserie[i]);
      if(nserie[i]%2==0){
         j++;
      }
      else{
         m++;
      }
   }
   
   for(i=0;i<n;i++){
      for(k=0; k<n;k++){
         if(nserie[i] == nserie[k])
      }   
   } 
   for(i=0;i<n;i++){
      for(k=0; k<n;k++){
         if(nserie[i]%2==0){
            sjoao += nserie[i];
            if(nserie[i] != nserie[k]){
               auxj += [i];
               //sjoao += nserie[i]; 
            }
         }
      }
   }
   
   for(i=0;i<n;i++){
      for(k=0; k<n;k++){
         if(nserie[i]%2==1){
            smaria += nserie[i];
            if(nserie[i] == nserie[k]){
               auxm += nserie[i];
               //smaria += nserie[i]; 
            }
            
         }
      }
   }
   
   sjoao = sjoao - auxj;
   smaria = smaria - auxm;
   
   printf("%d\n", j);
   printf("%d\n", m);
   if(sjoao > smaria){
      printf("%d\n", sjoao);
   }
   else{
      printf("%d\n", smaria);
   }
}