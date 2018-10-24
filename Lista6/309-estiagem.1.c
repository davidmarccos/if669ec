#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
   
   int n; 
   double *v;
   double *x;
   double *y;
   int primeiravez = 1;
   int i, contcidade=0;
   double j, k;
   int cont = 1, aux;
   
   do{
      
      do{
         
      scanf("%d", &n);
      
      //alocando a primeira cidade
      if(primeiravez == 1){
         x = (double*) malloc(n*sizeof(double));
         if(x == NULL){
            printf("Memória Insuficiente.");
            exit(1);
         }
         y = (double*) malloc(n*sizeof(double));
         if(y == NULL){
            printf("Memória Insuficiente.");
            exit(1);
         }
         v = (double*) malloc(sizeof(double));
         if(y == NULL){
            printf("Memória Insuficiente.");
            exit(1);
         }
      }
      
      //adicionando mais espaço de memória para a proxima cidade
      if(primeiravez == 0){
         x = (double*) realloc(x, n*sizeof(double));
            if(x == NULL){
               printf("Memoria insuficiente.");
               exit(1);
            }
         y = (double*) realloc(y, n*sizeof(double));
            if(x == NULL){
               printf("Memoria insuficiente.");
               exit(1);
            }
         v = (double*) realloc(v,contcidade*sizeof(double));
            if(x == NULL){
               printf("Memoria insuficiente.");
               exit(1);
            }
      }
      
      for(i=0;i<cont;i++){
         v[i] = n;
      }
      cont++;
      
      //caso digite 0, sai do loop
      if(n == 0)
         break;
      }while(n < 1 || n > pow(10,6) || n != 0);
      
     
      //add os x e y das n casas 
      for(i = 0; i < n; i++){
         do{
            scanf("%f %f", &x[i], &y[i]);
            //faço a media de y/x que será o valor real de y
            //uso round para arredondar o valor pra baixo, ceil arredonda pra cima
            y[i] = round(y[i]/x[i]);
            //y[i] = round(y[i]);
         }while(x < 1 || x > 10 || y < 1 || y > 20000);
      }
      
      //primera cidade já foi alocada, agora uso o realloc para realocar memoria para as proximas cidades
      primeiravez = 0;
      //saber quantas cidades cadastradas
      contcidade++;
      
   }while(n != 0);
   
   aux =0;
   for(j=0;j<contcidade;j++){
      aux++;
      printf("Cidade# %d", aux);
      for(k=0;k<v[j];k++){
         printf("%f-%f ",x[k],y[k]);
      }
   }
   
}