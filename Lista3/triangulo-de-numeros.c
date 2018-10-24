#include <stdio.h>

int main(){
    
    int cont, n, i; 
    
    do{
        //printf("digite n: ");
        scanf("%d", &n);
    }while(n < 1 && n > 9);
    
    
    for(i=0;i<=n;i++){
        for(cont=1;cont<=i;cont++){
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}