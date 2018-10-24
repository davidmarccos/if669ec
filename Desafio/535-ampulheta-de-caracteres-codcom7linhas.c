#include <stdio.h>

int main(int argc, char const *argv[]) {
   int n, l, i, cont = 0, tmpi, tmpj;
   scanf("%d", &n);
   while(cont++ < n && scanf("%d%d", &l, &i) && printf("Caso %d:\n", cont)) {
      for (tmpi = 0; tmpi < (l*2) && printf("*"); ++tmpi, printf("*\n"))
         for (tmpj = 0; tmpj < (l*2) - 1; printf("%c", (tmpi == 0 || tmpi == ((l*2) - 1)) ? (tmpj % 2 == 0 ? '*' : ' ')))
   }
}