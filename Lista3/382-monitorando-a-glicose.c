#include <stdio.h>

int main(){
    
    int i=0, taxa=0, cont=0, media=0; 
    
    do{
        scanf("%d", &taxa);
        if(taxa!=0){
            i++;
            cont+=taxa;
        }
    }while(taxa!=0);
    
    if(i!=0){
    media = cont/i;
    }
    
    if(media<110){
        printf("Glicose Normal");
    }else if(media>=200){
        printf("Glicose Muito Alta");
    }else{
        printf("Glicose Alterada");
    }
    return 0;
}