#include<stdio.h>
#include<string.h>
int main(){

    char word[10];
    int vowels = 0;
    int consonents = 0;
    printf("Enter the word : ");
    scanf("%s", word);

    int len = strlen(word);

    for(int i = 0; i < len; i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i]== 'u' || 
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i]== 'U'){
            vowels++;
        }
        else if(word[i] >= 'a' && word[i] <= 'z' || word[i] >= 'A' && word[i] <= 'Z' )
            consonents++;
        
    }

    printf("Vowels are : %d ", vowels);
    printf("consonents are : %d ", consonents);

    return 0;
}