#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i;
    int sum=0;
    printf("enter the number \n");
    scanf("%d",&number);
     for(i=1;i<=number;i++){
        sum=sum+i;

     }
     printf("sum = %d",sum);




    return 0;
}
