#include <stdio.h>
#include <stdlib.h>
int factorial(int num);
int main()
{
    int num,i;


    printf("enter the number\n");
    scanf("%d",&num);

    printf("factorial=%d",factorial(num));
    return 0;
}
int factorial(int num){
          int fact=1,i;
    for(i=1;i<=num;i++)
            fact=fact*i;
  return fact;

}
