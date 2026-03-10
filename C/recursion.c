#include<stdio.h>

int facto(int n);

int main(){
    printf("Factorial of n is : %d \n", facto(8));
    return 0;
}

int facto(int n){
    if(n == 1){
        return 1;
    }
    int ult = facto(n-1);
    int calc = ult * n;
    return calc;

}


