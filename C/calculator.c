#include<stdio.h>
int main(){
  printf(" 1: Add \n 2:Subs \n 3:Multiply \n 4:Divide \n");
  printf("Please enter your choice : \n");
  int num;
  int x,y,z;
  scanf("%d",&num);
  if(num < 5){
    printf("Enter the numbers : ");
    scanf("%d %d",&x,&y);
    switch(num){
      case 1: z=x+y;
      printf("Addition is : %d \n",z);
      break;
      case 2: z=x-y;
      printf("Substraction is %d \n",z);
      break;
      case 3: z=x*y;
      printf("Multiplication is %d \n",z);
      break;
      case 4: z=x/y;
      printf("Division is %d \n",z);
      break;
      default: 
      printf("Thank You");
    }
  }
  else
      printf("You Excedded Limit of choice ");
}