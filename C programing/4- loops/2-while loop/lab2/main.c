#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=0.75;
    double y=0.75  ;
    if (x>y)
        printf("float");
    else if (x<y)
        printf("double");
    else
        printf("==");
    return 0;
}
