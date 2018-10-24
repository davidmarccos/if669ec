//conta ocorrencias de uma palavra em um arquivo com linhas de no maximo 120 caracteres

#include <stdio.h>
#include <string.h>

int main(){
   
   int nocorrencias = 0;
   char palavra[121];
   char linha[121];
   FILE *fp;
   
   printf("Digite a palavra que deseja procurar");
   scanf(" %120[^\n]", palavra); //palavra de no maximo 120 caracteres
   
   fp = fopen("2-teste.txt","r");
   if(fp == NULL){
      printf("Impossivel abrir o arquivo");
   }
   
   while(fgets(linha,121,fp) != NULL){ //lê uma linha e armazena em linha
      if(strstr(linha,palavra) != NULL){ //utiliza strstr para saber se a palavra é uma substring de linha
         nocorrencias++;
      }
   }
   
   fclose(fp);
   
   printf("Ocorrencias de %s = %d\n", palavra, nocorrencias);
   
   return 0;
}