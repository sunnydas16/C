#include<stdio.h>
#include<string.h>
int main(){

    char word[10];
    printf("Enter the word ; ");
    scanf("%s", word);
    int flag = 0;
    int len = strlen(word);

    for(int i = 0; i <= len/2; i++ ){
        if(word[i] != word[len-i-1]){
            flag = 1;
        }
    }

    if(flag){
        printf("this is not Palindrome \n");
    }
    else{
        printf("It is Palindrome \n");
    }

    return 0;
}