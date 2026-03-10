#include<stdio.h>

void func(int arr[], int size);

int main(){

    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of array : ");

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    func(arr,size);

    return 0;
}

void func(int arr[],int size){

    printf("Elements are Even : ");
    for(int i = 0; i < size; i++){
        if(arr[i]%2 == 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("Elements are odd : ");

    for(int i = 0; i < size; i++){
        if(arr[i]%2 != 0){
            printf("%d ", arr[i]);
        }
    }

}