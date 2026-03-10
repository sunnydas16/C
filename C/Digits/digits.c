#include<stdio.h>

int main(){

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int digit;
    int add = 0;
    
    for(int i = 0; i < 3; i++){
        digit = num % 10;
        add = add + digit;
        num = num / 10;
    }
    printf("%d\n", add);

    return 0;
}