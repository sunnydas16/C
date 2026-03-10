#include<stdio.h>

int main(){
    
    int size;
    printf("Enter the Size of array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the size of elements of array : ");

    for(int i = 0; i<=size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array in rev order : ");
    for(int i = size; i>=0; i--){
        printf(" %d ",arr[i]);
    }

    printf("\n");
    int count = 0;
    printf("Enter the num you want to check occurence : ");
    int num;
    scanf("%d",&num);

    for(int i =0; i <= size; i++){
        if(arr[i] == num){
            count++;
        }
    }
    printf("The %d Occured : %d times \n", num,count);


    
    return 0;
}