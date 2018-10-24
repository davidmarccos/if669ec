#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[50];
    int i,c, cont=0, aux=0;

    fgets(texto, 150, stdin);
    c = strlen(texto);
    printf("Numero de letras = %d", c);

   /*for(i=0; texto[i] != '\0'; i++){
      if(texto[i]==' ') {
      conta++;
      }
   }*/
   
   for(i=0; texto[i] != '\0'; i++){
      cont++;
   }
   
   
   for(i=0; texto[i] != '\0'; i++){
      if (aux==cont-1){
         printf("%s", texto[i]);
      }
      aux++;
   }
   
   //printf("%d",cont+1);
   return 0;
}