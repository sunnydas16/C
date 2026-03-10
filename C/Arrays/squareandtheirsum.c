#include<stdio.h>

void func(int[]);

int main(){

    int arr[6] = {1,2,3,4,5,6};
    func(arr);

    printf("Contents of array is : ");
    for(int i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void func(int arr[]){
    int sum = 0; 
    for(int i = 0; i<6; i++){
        arr[i] = arr[i] * arr[i];
        sum = sum + arr[i];
    }

    printf("the sum of square is : %d \n", sum);
}