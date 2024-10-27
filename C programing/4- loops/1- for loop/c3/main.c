#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i,num,sum=0;
    float avg;
    for(i=0;i<10;i++){

        printf("enter the number\n");
        scanf("%d",&num);

        sum =sum+num;
        avg = (float)sum/10.0;
    }
    printf("sum= %d\n",sum);
     printf("average=%0.1f\n",avg);
    return 0;
}
