#include <stdio.h>

int main(){
   
   char c;
   int ncaracteres = 0;
   int nlinhas = 0;
   FILE *fp;
   
   fp = fopen("1-test.txt","r");
   if(fp == NULL){
      printf("Impossível abrir o arquivo");
      //exit(1);
   }
   
   while((c = fgetc(fp)) != EOF){ //fgetc retorna o codigo do caractere que pegou. fgetc pega um caractere por vez. enquanto os caracteres que eu pegar for diferente do final do arquivo (EOF)
      if(c == '\n'){ //se achei um \n é porq achei um final de linha
         nlinhas++;
      }
      else
         ncaracteres++;
   }
   
   fclose(fp);
   
   printf("Quantidade de caracteres no arquivo: %d\n", ncaracteres);
   printf("Quantidade de linhas no arquivo: %d", nlinhas);
   
   return 0;
   
   
}