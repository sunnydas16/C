#include<stdio.h>

int main(){

    int n;
    printf("Enter the 3 digit number you want : ");
    scanf("%d", &n);
    int a;
    int add = 0;
    while(n != 0){
        a = n % 10;
        add = add + a;
        n = n / 10;
    }

    printf("%d\n", add);



    return 0;
}