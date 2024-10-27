#include <stdio.h>
#include <stdlib.h>
int number(int num);
int main()
{
    int num;


    printf("enter the number\n");
    scanf("%d",&num);
    number(num);
    return 0;
}
int number(int num){

 return(num%2==0) ? even: odd ;
}
