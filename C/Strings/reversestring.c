#include<stdio.h>
#include<string.h>

int main(){

    char name[10];
    printf("Enter the name : ");
    scanf("%s", name);
    int len = strlen(name);

    for(int i = len - 1; i >= 0; i--){
        printf("%c ", name[i]);
    }


    return 0;
}