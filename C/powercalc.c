#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Enter the Number and power ");
    scanf("%d", &a);
    scanf("%d", &b);

    int an = 1;
    for(int i=0; i < b; i++){
        an = an*a;
    }

    printf(" the Ans is : %d ",an);

    return 0;
}