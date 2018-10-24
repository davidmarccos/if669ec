#include <stdio.h>
#include <string.h>

int main(){
   
   char frase[399]; //array da frase
   char palavra[399]; //array da ultima palavra
   int i=0, j=0, pos=0, cont=0;
   
   scanf(" %[^\n]", frase); //ler a frase
   
   for(i=0; i < strlen(frase);i++){ //percorrendo o tamanho da frase
      if(frase[i] == ' '){          //procuro a quantidade de espaços entre as palavras
         pos = i;                   //guardo o ultimo espaço para achar a posicao da ultima palavra
         cont++;                    //guardo o numero de espacos na frase
      }
   }
   
   if(cont != 0){                               //so procuro a ultima palavra se na frase tiver ao menos 1 espaco
      for(i=pos+1; i < strlen(frase);i++){      //ler a frase a partir do ultimo espaco
         palavra[j] = frase[i];                 //inserindo a ultima palavra da frase no array palavra
         j++; 
      }
   }
   else{ //se nao tiver nenhum espaco na frase, logo so tem uma palavra
      frase[i] = '\0';
      printf("%s", frase); //assim, imprimo a propria frase
   }
   
   palavra[j] = '\0';
   printf("%s", palavra); //teve mais de 1 espaco, logo imprimo a ultima palavra
   
   return 0;
}
