#include<stdio.h>

int main(){

    int n;
    printf("Enter the number you want : ");
    scanf("%d", &n);
    int count = 0;
    int lastdigit;
    int ans;
    lastdigit = n % 10; 
    while(n > 10){
        n = n / 10;
    }
    ans = lastdigit + n;
    printf("%d", ans);

    return 0;
}