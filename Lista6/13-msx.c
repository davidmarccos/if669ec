#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char** textos;
   int i=0, aux;
   
   do{
      textos[i] = (char*) malloc(75*sizeof(char));
      fgets(textos[i],75,stdin);
      i++;
   }while(strcmp("the end",textos[i]) != 0); //retorna um inteiro. se for negativo(é menor), se for positivo(é maior), se for 0(são identicas)
   
   for(aux=0;aux<=i;aux++){
      if(aux<i){
         puts(strupr(textos[aux]));
         //printf("%s\n",strupr(textos[aux])); //não roda no ubuntu, apenas no windoe
         printf("\n");
         free(textos[aux]);
      }else{
         puts(strupr(textos[aux]));
         free(textos[aux]);
      }

   }
   
   free(textos);
   return 0;
}