#include<stdio.h>

int main(){

    int twodarr[3][4];

    printf("Enter the 3*4 Matrix : ");

    for(int i=0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &twodarr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", twodarr[i][j]);
        }
        printf("\n");
    }

    return 0;
}