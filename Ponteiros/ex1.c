#include <stdio.h>
#include <stdlib.h>

int main(){ 
   int a=10, b=50; 
   int *ptr;            //  ponteiro de inteiroint 
   int **ptrPtr;    //  ponteiro de um ponteirointeiro
   ptr = &a; 
   ptrPtr = &ptr; 
   
   int *pti; 
   int i = 10; 
   pti = &i;
   
   //endereco do ponteiro usando %p
   printf("%p\n", pti);
   
   //valor do ponteiro
   printf("%d\n", *pti);
   
   //modificando o valor de i pelo ponteiro
   *pti = 20;

   //vendo q i agora é 20
   printf("%d\n", i);

   //mudando o valor de i
   i = 30;
   
   //ponteiro tem valor 30 agora
   printf("%d", *pti);
   
   
   
   return 0; 
}