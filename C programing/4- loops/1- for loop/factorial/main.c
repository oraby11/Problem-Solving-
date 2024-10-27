#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,number;
    int fact=1;

    printf("enter the number\n");
    scanf("%d",&number);

    for(i=1;i<=number;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
