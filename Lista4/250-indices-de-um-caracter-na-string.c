#include <stdio.h>
#include <string.h>

int main(){
   char str[49], caractere;
   int i;
   
   scanf(" %[^\n]", str);

   scanf(" %c", &caractere);
   
   for(i=0; i < strlen(str); i++){
      if(caractere == str[i]){
         printf("%d\n", i);
      }   
   }
   
   printf("-1");
   
   return 0;
}