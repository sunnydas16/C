#include<stdio.h>

int main(){

    int num;
    printf("Enter the num : ");
    scanf("%d", &num);

    int rem;
    int rev = 0;

    while(num != 0){
        rem = num % 10;
        if(num % 2 != 0){
            rev = rev * 10 + rem;
        }
        num = num / 10;
    }

    printf("%d\n", rev);

    return 0;
}