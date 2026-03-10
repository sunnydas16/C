#include<stdio.h>

int main(){

    int num;
    printf("Enter the num : ");
    scanf("%d", &num);
    
    int dig;
    int rev = 0;

    for(int i = 0; i < 3; i++){
        dig = num % 10;
        rev = (rev * 10) + dig;
        num = num / 10;
    }

    printf("%d\n", rev);
    return 0;
}