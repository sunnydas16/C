#include<stdio.h>

int main(){

    int num;
    printf("Enter the num : ");
    scanf("%d", &num);
    
    int n;
    while(num > 10){
        n = num % 10;
        num = num / 10;
    }
    printf("%d\n", n);
    return 0;
}