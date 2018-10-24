#include <stdio.h>

int main(){
   
   char texto[1000];
   
   FILE *fp;
   
   fp = fopen("4-teste.txt","w");
   if(fp == NULL){
      printf("Impossível abrir o arquivo!");
      //exit(1);
   }
   
   printf("O que você quer escrever?\n");
   scanf(" %[^\n]", texto); //primeiro tenho que armazenar em memória
   
   fprintf(fp,"%s\n", texto); //agora armazeno em memória SD
 //fprintf(arquivo, formatacao normal do printf, variavel);
 
   fclose(fp);
   
   return 0;
   
   
   //OUTRAS FORMAS DE ESCRITA NO MODO TEXTO
   
   //int fputc(arquivo, char c);
   //escreve um caractere de um arquivo, retorna o codigo do caractere escrito, retorna EOF se chegar no fim do arquivo
   
   //char* fputs(char* s, arquivo);
   //s é a cadeia de caracteres que será escrita, retorna ponteiro para a cadeia s
   
}