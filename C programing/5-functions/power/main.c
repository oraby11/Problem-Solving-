#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num,ecpo;
    printf("enter the number\n");
    printf("enter the ecpo\n");
    scanf("%d%d",&num,&ecpo);
  //  int powe=pow(num,ecpo);
    printf("%d^%d=%d",num,ecpo,num^ecpo);

    return 0;
}
