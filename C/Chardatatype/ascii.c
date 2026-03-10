#include<stdio.h>

int main(){

    char ch;
    printf("Enter the Char : \n");
    scanf("%c", &ch);
    
    printf("ch = : %c, ascii : %d, octal : %o, hexal : %x\n"
    , ch,ch,ch,ch );

    return 0;
}