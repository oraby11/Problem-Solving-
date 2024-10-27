#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1,number2;

    printf("Enter the first number\n");
    scanf("%d",&number1);
     printf("Enter the second number\n");
    scanf("%d",&number2);

    if (number1>number2){
        printf(" max is %d",number1);
    }
         else if (number2>number1){

            printf("max is %d",number2);
   }
     else{

        printf("equal");
   }
    return 0;
}
