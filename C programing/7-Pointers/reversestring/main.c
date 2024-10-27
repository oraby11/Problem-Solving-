#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text1[100],reverse[100];
    char *str1=text1;
    char *r=reverse;;
    printf("enter rhe string \n");
    scanf("%s",text1);
    int i=0;
    while(*(str1++)){
        i++;
    }

      str1--;
    while(i>=0){
         *(r++)=*(--str1);
        i--;
    }
     printf("%s",reverse);




}
