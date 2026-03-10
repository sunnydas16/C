#include<stdio.h>
int main(){

    for(int i = 0; i < 4; i++){
        printf("*");
        for(int j = 1; j<=i; j++){
            printf("**");
        }
        
        printf("\n");
    }
    return 0;
}

// or

// #include<stdio.h>
// int main(){

//     for(int i = 0; i < 4; i++){
//         for(int j = 1; j<=(2*i - 1); j++){
//             printf("*");
//         } 
//         printf("\n");
//     }

//     return 0;
// }