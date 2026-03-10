#include<stdio.h>

int sumOfn(int n);

int main(){
    printf("Sum of n natural number is : %d \n", sumOfn(8));
    return 0;
}

int sumOfn(int n){
    if(n == 1){
        return 1;
    }
    int ult = sumOfn(n-1);
    int calc = ult + n;
    return calc;

}


