#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1,number2,number3;

    printf("enter first number\n");
    scanf("%d",&number1);
    printf("enter second number\n");
    scanf("%d",&number2);
    printf("enter three number\n");
    scanf("%d",&number3);

    if (number1>number2&&number1>number3){
        printf("first number is max");
    }
    else if (number2>number1&&number2>number3){
        printf("second number is max");
    }
    else
        printf("three is max");
    return 0;
}
