#include <stdio.h>
#include <stdlib.h>



int main()
{
    int const x=20;
    int *ptr=&x;
    *ptr=30;
    printf("%d",x);


}

