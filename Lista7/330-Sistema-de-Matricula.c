#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stru{
   char codaluno[31];
   char nomealuno[501];
   int idade;
   int sexo;
   float notaenem;
}cadastro;

typedef struct stru2{
   char coddisciplina[26];
   char nomedisciplina[101];
}disciplina;

typedef struct stru3{
   char codaluno[31];
   char cod[26];
}matricula;


/*ORDEM ALFABETICA - RACIOCÍNIO
saida strcmp(str1,str2)
   == 0: str1 é igual a str2
   > 0: str1 vem depois de str2
   < 0: str1 vem antes de str2
*/


int main(){
   int i;
   int n;
   
   scanf("%d", &n);
   
   cadastro = (stru*) malloc(n*sizeof(stru));
   if(cadastro == NULL){
      exit(1);
   }
   
   for(i = 0; i < n; i++){
      scanf(" %[^\n]", cadastro.codaluno);
      scanf(" %[^\n]", cadastro.nomealuno);
      scanf("%d", &cadastro.idade);
      scanf("%d", &cadastro.sexo);
      scanf("%f", &cadastro.notaenem);
   }
   
   int m;
   
   scanf("%d", &m);
   
   disciplina = (stru2*) malloc(m*sizeof(stru2));
   if(disciplina == NULL){
      exit(1);
   }
   
   for(i = 0; i < m; i++){
      scanf(" %[^\n]", disciplina.coddisciplina);
      scanf(" %[^\n]", disciplina.nomedisciplina);
   }

   int p;
   scanf("%d", &p);
   
   for(i = 0; i < p; i++){
      scanf("%s %s", matricula.codaluno, matricula.coddisciplina);
   }
   
   
}