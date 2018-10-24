#include <stdio.h>
#include <string.h>
#include <ctype.h>

//ler um arquivo e gera outro com todas as letras convertidas em maiusculas

int main(){
   
   int caractere;
   char texto[121]; //o usuário fornece o nome do arquivo
   FILE *entrada;
   FILE *saida;
   
   printf("Infome o nome do arquivo que deseja criar:\n");
   scanf("%120s", texto);
   
   entrada = fopen(texto, "r");
   if(entrada == NULL){
      printf("Impossível abrir o arquivo de entrada.");
   }
   
   saida = fopen(strcat(texto,"_maiusculo"),"wt");
   if(saida == NULL){
      printf("Impossível abrir o arquivo de entrada");
   }
   
   while((caractere = fgetc(entrada)) != EOF){ //enquanto eu percorrer caractere por caractere até que eu chegue no final do arquivo entrada
      fputc(toupper(caractere), saida);
   }
   
   fputs("Arquivo Convertido!", saida);
   
   fclose(entrada);
   fclose(saida);
   
   return 0;
   
   
   
   //OUTRAS FORMAS DE ESCRITA NO MODO TEXTO
   
   //int fputc(arquivo, char c);
   //escreve um caractere de um arquivo, retorna o codigo do caractere escrito, retorna EOF se chegar no fim do arquivo
   
   //char* fputs(char* s, arquivo);
   //s é a cadeia de caracteres que será escrita, retorna ponteiro para a cadeia s
}