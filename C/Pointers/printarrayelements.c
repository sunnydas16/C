#include<stdio.h>

int main(){

    int arr[] = {2,23,7,4,21,7};
    int *parr = arr;

    for(int i=0; i < 6; i++){
        printf("%d ", *(parr+i));
    }

    return 0;
}