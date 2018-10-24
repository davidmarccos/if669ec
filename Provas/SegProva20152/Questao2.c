/*
Escreva um programa que procura em uma matriz elementos que sejam ao mesmo tempo o maior da linha e o menor da coluna.
As dimensões da matriz devem ser pedidas ao usuário. Defina funções para (1) alocar memoria para a matriz, 
(2) ler os valores da matriz e (3) procurar o elemento que é o maior da linha e menor da coluna.
*/


#include <stdio.h>
#include <stdlib.h>
int i, j;


int** alocamatriz(int **matriz, int linha, int coluna){
   
   matriz = (int**) malloc(linha*sizeof(int*)); //alocando vetor de ponteiros
   if(matriz == NULL){
      printf("Erro ao alocar matriz!");
      exit(1);
   }
   for(i = 0; i < linha; i++){
      matriz[i] = (int*) malloc(coluna*sizeof(int)); // alocando vetores-linha
      if(matriz[i] == NULL){
         printf("Erro ao alocar matriz!");
         exit(1);
      }
   }
   
   return matriz;
}

void lermatriz(int **matriz, int linha, int coluna){
   
   printf("Digite os valores da matriz %dx%d\n", linha, coluna);
   
   for(i = 0; i < linha; i++){
      for(j = 0; j < coluna; j++){
         printf("Elemento [%d][%d] = ", i, j);
         scanf("%d", &matriz[i][j]);
      }
   }
   
}

void maiorelemento(int **matriz, int linha, int coluna){
   
   int maiorlinha;
   int maiorcoluna;
   int aux = 0;
   
   //achando o maior da linha
   for(i = 0; i < linha; i++){
      for(j = 0; j < coluna; j++){
         if(aux < matriz[i][j]){
            aux = matriz[i][j];
         }
      }
      maiorlinha = aux;
      aux = 0;
   }
   printf("Elemento maior da linha é: %d", maiorlinha);
   
   //achando o maior da coluna
   for(i = 0; i < linha; i++){
      for(j = 0; j < coluna; j++){
         if(aux < matriz[i][j]){
            aux = matriz[i][j];
         }
      }
      maiorcoluna = aux;
      aux = 0;
   }
   printf("Elemento maior da coluna é: %d", maiorcoluna);
}

int main(){
   
   int linha, coluna;
   
   printf("Informe a quantidade de linhas e colunas da matriz: (ex: 2 2):\n");
   scanf("%d %d", &linha, &coluna);
   
   int **matriz;
   
   //PASSO 1
   alocamatriz(matriz, linha, coluna);
   
   //PASSO 2
   lermatriz(matriz, linha, coluna);
   
   //PASSO 3
   maiorelemento(matriz, linha, coluna);
   
   
   return 0;
}