#include<stdio.h>
int main(){

    int size;
    printf("enter the size of items : \n");
    scanf("%d", &size);
    printf("enter the Price of items : \n");
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++){
        printf("Elements are %d \n", arr[i]);
    }
    int add = 0;
    for(int i = 0;  i < size; i++){
        add = add + arr[i];
    }
    printf("enter the percentage of gst you want to enter : ");
    int gst;
    scanf("%d", &gst);
    int fans = add +(add*gst/100);
    printf("%d", fans);


    return 0;
}