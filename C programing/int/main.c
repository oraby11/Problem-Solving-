#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
    int a=2,d=0,m;
    int digits = log10(a)+1;
   int shifted = a * pow(10, digits);
   m = shifted + d;
   m = a * pow(10, (int)log10(d)+1) + d;
   printf("%d",m);


    return 0;
}
