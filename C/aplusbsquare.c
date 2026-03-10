#include<stdio.h>
#include<math.h>
int main(){

    int a = 9;
    int b = 2;

    int c = pow(a, 2) + 2*(a*b)+ pow(b, 2);

    printf("%d\n", c);

    return 0;
}