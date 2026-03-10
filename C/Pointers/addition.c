#include<stdio.h>

int main(){

    int a,b,sum;
    printf("Enter numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);

    int *ptr1 = &a;
    int *ptr2 = &b;

    sum = *ptr1 + *ptr2;

    printf("%d\n", sum);

    return 0;
}