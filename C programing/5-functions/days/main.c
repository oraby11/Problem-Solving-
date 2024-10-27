#include <stdio.h>
#include <stdlib.h>
//#define  1year=365*days
int main()
{
    int days;
    int year,week,day;
    printf("Enter the days\n");
    scanf("%d",&days);
    year=days/365;
    week = (days - (year*365))/7;
    day = days - ((year * 365) + (week* 7));
    printf("years=%d \nweek=%d\nday=%d \n",year,week,day);



    return 0;
}
