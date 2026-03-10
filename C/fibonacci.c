#include<stdio.h>

int fibo(int n);

int main(){
    fibo(8);

    return 0;
}

int fibo(int n){
    int a = 0;
    int b = 1;
    int c;
    for(int i = 0; i < n;i++){
        printf("Fibo is : %d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

