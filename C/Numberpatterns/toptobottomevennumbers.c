#include<stdio.h>

int main(){

    for(int i = 6; i > 0; i-=2){
        for(int j = i; j > 0; j-=2){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
