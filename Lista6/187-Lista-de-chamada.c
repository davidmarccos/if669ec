#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   
   int n, k; // n alunos e k numero sorteado
   int i, j; //contadores
   char** lista; //vetor de strings
   //char lista[100];
   
   char* temp = (char*) malloc(20*sizeof(char)); //alocando a variavel temp
   
   do{ //saber quantos n alunos serão colocados na lista e qual numero k sorteado
      scanf("%d %d",&n, &k);
   }while(n < 1 || n > 100 || k < 1 || k > n || k > 100);
   
   //fiz isso por um problema que dá no free (nao sei )
   n = n+1;
   
   lista = (char**) malloc(n*sizeof(char**)); //alocando o tamanho da lista
   
   //adicionando os n alunos na lista de chamada
   for(i = 0; i < n; i++){
      lista[i] = (char*) malloc(20*sizeof(char)); //alocando cada i da lista
      fgets(lista[i], 20, stdin); // palavra com no maximo 20 caracteres
   }
   
   //ordenando a lista
   for(i = 0; i < n; i++)
      for(j = 0; j < n-1; j++)
         if(strcmp(lista[j],lista[j+1]) > 0){
            strcpy(temp,lista[j]);
            strcpy(lista[j],lista[j+1]);
            strcpy(lista[j+1],temp);
         }
         
      free(temp);
   
   
   //agora que os nomes estão ordenados, vamos imprimir a posicao k sorteada pela prof
   printf("%s", lista[k]);
   
   /*
   //aqui imprimo a lista ordenada, caso pedisse
   for(i = 0; i <= n;++i)
     printf("%s",lista[i]);
   */
   
   // liberando a memória alocada dinamicamente
   for(i = 0; i < n;++i)
      free(lista[i]);
   
    // liberando a memória alocada dinamicamente
    free(lista);
    
         
   return(0);
}