#include <stdio.h>

int main() {
  
   int a[50][50], b[50][50], c[50][50];
   int i, j, k; // contadores
   int n, m, o;
   // n linhas de a
   // m colunas de a e linhas de b
   // o colunas de b 
   scanf("%d %d %d", &n, &m, &o);    
  
   //lendo matriz A
   for (i=0; i<n; i++){
      for(j=0; j<m; j++){
         scanf("%d", &a[i][j]);
      }
   }

   //lendo matriz B  
   for (i=0; i<m; i++){
      for (j=0; j<o; j++){
         scanf("%d", &b[i][j]); 

      }
   }

   //multiplicando c=a*b
   for (i=0;i<n; i++){
      for (j=0; j<n; j++){
         for (k=0; k<m; k++){
            c[i][j] = c[i][j] + (a[i][k] * b[k][j]); 
         }
      }
   }

   //imprimindo matriz c
   for (i=0; i<n; i++){
      for (j=0; j<o; j++)
         if(i+1==n && j==)
         printf("%d ", c[i][j]);
      printf("\n");
   }

   return(0);  
}