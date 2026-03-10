#include<stdio.h>

int main(){

    char name[20];
    printf("Enter the name : ");
    scanf("%s", name);
    int i = 0;

    while(name[i] != '\0'){
        i++;
    }

    printf("%d", i);

    return 0;
}