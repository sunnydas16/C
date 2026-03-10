#include<stdio.h>

int main(){

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int digit;
    int add = 0;
    
    while(num != 0){
        digit = num % 10;
        if(digit % 2 == 0){
            
            add = add + digit;
        }
        num = num / 10;
    }
    printf("%d\n", add);
    return 0;
}