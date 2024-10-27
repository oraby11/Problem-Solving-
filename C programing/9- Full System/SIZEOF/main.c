#include <stdio.h>
#include <stdlib.h>
#define SET_BIT(var,BITNO)     num|=(1<<bitno)
#define CLR_BIT(var,BITNO)     num=num&(~(1<<bitno))
#define TOGGLE_BIT(var,BITNO)   num=num^(1<<bitno)
#define GET_BIT(var,BITNO)      ((num >>bitno)&1)
int main()
{
    int num=10;
    int bit=1;


    printf("%d\n",SET_BIT(num,bit));


    return 0;
}
