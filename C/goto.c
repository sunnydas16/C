#include<stdio.h>

int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    if(n < 10){
        goto noteligible;
    }
    else{
        goto eligible;
    }

    noteligible:
        printf("Yes you are eligible ");
        goto end;
    eligible:
        printf("You are Not Eligible ");
        goto end;
    end:
        printf("\n");
    
    
    return 0;
}
