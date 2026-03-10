#include<stdio.h>

int main(){

    int num;
    printf("Enter the 3 digit number you want : ");
    scanf("%d", &num);
    int n;
    int add = 0;
    while(num != 0){
        n = num % 10;
        if(num % 2 == 0){
            add = add + n;
        }
        num = num / 10;
    }

    printf("%d\n", add);

    return 0;
}