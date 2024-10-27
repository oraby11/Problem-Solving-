#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    float ratio ;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    printf("enter the three number\n");
    scanf("%d",&c);
    printf("enter the four number\n");
    scanf("%d",&d);

    if (c-d!=0){
   ratio =(float)(a+b)/(float)(c-d);
   printf("ratio is= %f ",ratio);
    }
   else {
    printf("error");
   }

    return 0;
}
