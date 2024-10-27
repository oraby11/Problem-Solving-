#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,num,fact=1;
    printf("enter the number\n");
    scanf("%d",&num);
    while(i<=num){
    fact=fact*i;
    i++;
}
    printf("%d",fact);
    return 0;
}
