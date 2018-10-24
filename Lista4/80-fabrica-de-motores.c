/*Não funciona na ultima checagem do The Huxley, a dica dada é a seguinte: 
"Existem várias formas de representar os dados nesse problema. A mais comum é através de matrizes. Então, primeiro tente 
definir como as informações serão armazenadas e como você irá manipulá-las. Só então parta para a implementação."
*/

#include "stdio.h"

int main (){

	int i, m[12][2];
	float c0, l0, c1, l1, ca0 = 0, la0 = 0, ca1 = 0, la1 = 0;//custos, lucros, custos anuais e lucros anuais de M0 e M1

	for (i = 0; i < 12; i++){ //loop de recebimento de dados
		scanf ("%d %d\n", &m[i][0], &m[i][1]);
	}

	scanf ("%f %f", &c0, &l0); //custo e lucro de M0
	scanf ("%f %f", &c1, &l1); //custo e lucro de M1
	
	for (i = 0; i < 12; i++){ //loop de impressão dos resultados de M0
		printf("Motor[0], Mes[%d], custo=[%.2f], lucro=[%.2f]\n", i+1, m[i][0]*c0, m[i][0]*l0);
	}

	for (i = 0; i < 12; i++){ //loop de impressão dos resultados de M1
		printf("Motor[1], Mes[%d], custo=[%.2f], lucro=[%.2f]\n", i+1, m[i][1]*c1, m[i][1]*l1);
	}

	for (i = 0; i < 12; i++){ //loop de cálculo dos lucros e custos anuais de M0 e M1
		ca0 += m[i][0]*c0;
		la0 += m[i][0]*l0;
		ca1 += m[i][1]*c1;
		la1 += m[i][1]*l1;
	}

	//impressão dos resultados anuais de M0 e M1

	printf("Motor[0], anual, custo=[%.2f], lucro=[%.2f]\n", ca0, la0);
	printf("Motor[1], anual, custo=[%.2f], lucro=[%.2f]\n", ca1, la1); //OBS: Já tentei tirando e colocando \n no final dessa linha

	return 0;
}

/*#include <stdio.h>

int main(){
   
   int matriz[14][14];
   int i, j, cont=0;
   
   for(i=0;i<14;i++)
      for(j=0;j<14;j++){
         scanf("%d", &matriz[i][j]);
         fflush(stdin);
      }
   
   
   
   for(i=0;i<14;i++){
      for(j=0;j<14;j++){
         print("%d %d\n", matriz[i][], matriz[][j]);
      }
   }
   
   
   return 0;
}*/