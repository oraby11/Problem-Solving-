#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstnumber,secondnumber;
    int x;
    printf("Enter the firstnumber\n");
    scanf("%d",&firstnumber);
    printf("Enter the secondnumber\n");
    scanf("%d",&secondnumber);
    // swap //


    firstnumber=firstnumber+secondnumber;
    secondnumber=firstnumber-secondnumber;
    firstnumber= firstnumber -secondnumber;
     printf("firstnumber=%d\n",firstnumber);
     printf("secondnumber=%d",secondnumber);

    return 0;
}
