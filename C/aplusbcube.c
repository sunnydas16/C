#include<stdio.h>
#include<math.h>
int main(){

    int a = 2;
    int b = 3;

    int c = pow(a, 3) + 3*pow(a, 2)*b + 3*a*pow(b, 2) + pow(b, 3);

    printf("%d\n", c);

    return 0;
}