#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i=0;
     int res;
    printf("enter the number");
    scanf("%d",&num);
   /* for(i=0;i<=num;i++){

        res=num*i;
        printf("%d*%d=%d\n",num,i,res);
    }  */

    while(i<=num){
        res=num*i;
        printf("%d*%d=%d\n",num,i,res);
        i++;
    }
}



