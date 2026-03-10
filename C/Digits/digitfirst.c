#include<stdio.h>

int main(){

    int num;
    printf("Enter the num : ");
    scanf("%d", &num);

    while(num >= 10){
        num = num / 10;
    }

    printf("%d\n", num);

    return 0;
}