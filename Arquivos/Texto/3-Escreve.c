#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
   
   char palavra[121];
   FILE *fp;
   
   fp = fopen("3-teste.txt","a");
   if(fp == NULL){
      printf("Impossível abrir o arquivo");
   }
   
   printf("Digite a palavra:\n");
   scanf(" %120[^\n]", palavra);
   
   fprintf(fp,"%s\n", palavra);
   
   fclose(fp);
   //APRIMORANDO MAIS O CODIGO
   //PROCURAR UMA PALAVRA NO ARQUIVO
   
   char procura[121];
   char linha[121];
   int i, cont=0;
   char aux[121];
   
   fp = fopen("3-teste.txt","r");
   if(fp == NULL){
      printf("Impossível abrir o arquivo");
   }
   
   printf("Digite a palavra que voce quer procurar:\n");
   scanf(" %120[^\n]", procura);
   
   
   for(i = 0; i < 120; i++){
      aux[i] = toupper(procura[i]); //caso haja essa palavra em maiusculo devemos contar tambem
   }
   
   while(fgets(linha,121,fp) != NULL){
      if(strstr(linha,procura) != NULL || strstr(linha,aux) != NULL){
         if(cont < 1){
            printf("Existe e está na linha %d", cont+1);
         }
         else{
            printf(", %d", cont+1);
         }
      }
      cont++;
   }
   
   fclose(fp);
   

   return 0;
}