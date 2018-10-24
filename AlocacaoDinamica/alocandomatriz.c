#include <stdio.h>
#include <stdlib.h>
int i, j;


void lermatriz(int linha, int coluna, int **matriz){
   printf("Digite os valores da matriz %dx%d\n", linha, coluna);
   
   for(i = 0; i < linha; i++){
      for(j = 0; j < coluna; j++){
         printf("Elemento [%d][%d] = ", i, j);
         scanf("%d", &matriz[i][j]);
      }
   }
}

void liberamatriz(int linha, int **matriz){
   
   //int i, j;
   
   for(i = 0; i < linha; i++){
      free(matriz[i]); //libera primeiro cada vetor linha
   }
   
   free(matriz); //libera depois vetor de ponteiros
   
   printf("\nMemoria liberada!");
}

void imprimematriz(int linha, int coluna, int **matriz){
   
   //int i, j;
   
   for(i = 0; i < linha; i++){
      for(j =0; j < coluna; j++){
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   }
}


int main(){
   
   int linha, coluna;
   //int i, j;
   
   printf("Informe a quantidade de linhas e colunas da matriz (ex: 2 5):\n");
   scanf("%d %d", &linha, &coluna);
   
   int **matriz; //alocar matriz precisa de ponteiro para ponteiro
   
   matriz = (int**) malloc(linha*sizeof(int*)); //alocando vetor de ponteiros
   for(i = 0; i < linha; i++){
      matriz[i] = (int*) malloc(coluna*sizeof(int)); //alocando vetores-linha
   }
   
   
   lermatriz(linha, coluna, matriz);
   imprimematriz(linha, coluna, matriz);
   liberamatriz(linha, matriz);
   
   return 0;
}