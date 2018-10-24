#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct c{
   int codigo;
   char produto[50];
   float preco;
} cardapio;

int imprime(float valorcompra){
   printf("%.2f", valorcompra);
   exit(0);
}

int main(){
   
   cardapio *cadastro;
   int n=0;
   int i; //contadores
   
   scanf("%d", &n);
   
   //alocando n produtos na memoria
   cadastro = (cardapio*) malloc(n*sizeof(cardapio));
   if(cadastro == NULL){
      printf("Memória Insuficiente.");
      exit(1);
   }
   
   //adicionando os produtos na estrutura
   for(i = 0; i < n; i++){
      
      //printf("codigo %d: ", i+1);
      scanf("%d", &cadastro[i].codigo);
      
      //printf("descricao do produto %d: ", i+1);
      scanf(" %[^\n]", cadastro[i].produto);
      
      //printf("preco %d: ", i+1);
      scanf("%f", &cadastro[i].preco);
   }
   
   //variaveis do pedido
   int pedidocod, pedidoqtditens, aux = 0;
   float valorcompra = 0.00;

   do{
      //ignorar quando o valor do codigo do pedido não tiver cadastrado
      do{
         scanf("%d", &pedidocod);
         if(pedidocod == 0){
            imprime(valorcompra);
         }
         
      //}while(aux == 0);
      printf("ops1");
      //ignorar quando a quantidade de pedidos é 0 ou negativo
      do{
         scanf("%d", &pedidoqtditens);
      }while(pedidoqtditens < 1);
      
      //procurando o codigo
      for(i = 0; i < n; i++){
            if(pedidocod == cadastro[i].codigo){
               aux++;
               printf("ops2");
            } 
         }
      }while(aux == 0); 
      //calculando o valor total do pedido
      for(i = 0; i < n; i++){
         if(pedidocod == cadastro[i].codigo){
            valorcompra += cadastro[i].preco * pedidoqtditens; 
         } 
      }
   }while(pedidocod != 0); //quando o codigo do pedido for 0, sai
   
   //imprimindo o valor final
   printf("%.2f", valorcompra);
   
   //liberando a memoria
   free(cadastro);
   
   return 0;
}