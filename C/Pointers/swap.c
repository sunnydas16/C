#include<stdio.h>

void swap(int *pa, int *pb);

int main(){

    int a,b;
    printf("Enter the 2 number : \n");
    scanf("%d%d", &a,&b);

    swap(&a, &b);

    printf("new A is : %d and new B is : %d", a, b);

    return 0;
}

void swap(int *pa, int *pb){
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}