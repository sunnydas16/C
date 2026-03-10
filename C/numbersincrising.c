#include<stdio.h>

int main(){

    int n;
    printf("Enter the number till you want : ");
    scanf("%d", &n);
    int numbers = 1;
    int count = 1;

    printf(" %d ", numbers);
    for(int i=1; i <= n; i++){
        numbers = numbers + count;
        printf("%d ", numbers);
        count ++;
    }

    return 0;
}