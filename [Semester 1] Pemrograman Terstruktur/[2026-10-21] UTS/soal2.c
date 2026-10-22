#include <stdio.h>

int i;

void main(){
    for(i=1; i<=50; i++){
        if(i%3==0 && i%5==0){
            printf("TRE ");
        }
        else if(i%3==0){
            printf("TR ");
        }
        else if(i%5==0){
            printf("Elektronika ");
        }
        else{
            printf("%d ", i);
        }
    }
}