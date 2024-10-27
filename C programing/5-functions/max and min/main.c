#include <stdio.h>
#include <stdlib.h>
 int max(int num1,int num2);
int main()
{
    int num1,num2;
    int num;
     printf("Enter number1: \n");
    scanf("%d", &num1);
     printf("Enter number2\n ");
    scanf("%d", &num2);
   num= max(num1,num2);
    printf("the max is %d",num);
    return 0;
}
 int max(int num1,int num2){
     if (num1>num2){
        return(num1);
     }
      else if (num2>num1){
        return(num2);

     }
 else{

    return 0 ;
 }
 }
