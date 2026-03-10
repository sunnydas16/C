#include<stdio.h>

int main(){

    char name1[10], name2[10];
    printf("Enter name 1 : ");
    scanf("%s", name1);
    printf("Enter name 2 : ");
    scanf("%s", name2);
    int i = 0;
    int flag = 0;

    while(name1[i] != '\0' && name2[i] != '\0'){
        if(name1[i] == name2[i]){
            flag = 1;
        }
       i++;   
    }

    if(flag == 1){
        printf("Strings are Equal \n");
    }
    else{
        printf("Strings are not Equal \n");
    }
    

    return 0;
}