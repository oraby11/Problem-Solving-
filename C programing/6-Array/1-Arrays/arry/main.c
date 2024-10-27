#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i,sum=0;

    for(i=0;i<10;i++ ){
    printf("enter the 10 number %d\n:",i+1 );
    scanf("%d\n",&arr[i]);
    sum=sum+i;
    }
    printf("sum =%d\n",sum);
    printf("average is =%0.1f",sum/10.0);
    return 0;
}
