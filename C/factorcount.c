#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int count = 0;
    for(int i=1; i<=num; i++){
        if(num % i == 0){
            printf(" %d ", i);
            count++;
        }
    }
    printf("\n");
    printf("Total count of factors are : %d ", count);
}