/*
1) Escreva um programa que leia um nome completo e imprima o sobrenome com todas
as letras maiusculas, seguido por ',' (virgula) e pelo restante do nome.
Exemplo: Joao Marcos Antoniel == ANTONIEL, Joao Marcos
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
   
   char nome[100];
   char sobrenome[100];
   char restodonome[100];
   
   printf("Digite seu nome: ");
   scanf(" %[^\n]", nome);
   
   int i, j = 0, k = 0; //contador
   int cont; //armazena o numero de espacos que tem no nome completo
   int pos;  //armazena a posicao da ultima palavra do nome completo
   
   for(i = 0; i < strlen(nome); i++){
      if(nome[i] == ' '){
         pos = i;
         cont++;
      }
   }
   
   if(cont != 0){ //só procuro a ultima palavra se o nome tiver ao menos 1 espaço
      for(i = pos+1; i < strlen(nome); i++){ //lendo a ultima palavra escrita do nome completo
         sobrenome[j] = nome[i];
         j++;
      }
      
      for(i = 0; i < pos; i++){ //lendo o resto do nome sem o sobrenome
         restodonome[k] = nome[i];
         k++;
      }
   }
   else{ //se não tem espacos no nome, eu imprimo logo a palavra
      nome[i] = '\0';
      printf("%s", nome);
   }
   
   for(i = 0; i < strlen(sobrenome); i++){
      sobrenome[i] = toupper(sobrenome[i]); //transformando em maiusculo o sobrenome
   }
   
   printf("%s, %s", sobrenome, restodonome);
   return 0;
   
}