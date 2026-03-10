#include<stdio.h>

int main(){

    char ch;
    printf("Enter the Char : ");
    scanf("%c", &ch);

    int num = ch;

    if(num > 64 && num < 90){
        ch = ch + 32;
        printf("char is : %c, ascii : %d \n",ch, ch);
    }
    else if(num > 96 && num < 123){
        ch = ch - 32;
        printf("char is : %c, ascii is %d \n", ch,ch);
    }
    else{
        printf("Please give Correct Input\n");
    }

    return 0;
}