#include<stdio.h>

int main(){

    int n;
    printf("Enter the number you want : ");
    scanf("%d", &n);
    int lastdigit;
    int second;
    int ans;
    lastdigit = n % 10;

    while(n > 100){
        n = n / 10;
    }
    second = n % 10;

    ans = lastdigit + second;

    printf("%d\n", ans);



    return 0;
}