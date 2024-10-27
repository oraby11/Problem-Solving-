#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n1,n2,n3;

    printf("enter 3 number\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    goto exit;
    int max=(n1>n2)&&(n1>n3)?n1:(n2>n3)? n2:n3 ;
    printf("%d",max);
    exit:
    printf("thank you");
    return 0;
}
