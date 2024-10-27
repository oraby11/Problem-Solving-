#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char arr[50];
    char *str=arr;
    printf("Enter the String\n");
    scanf("%s",arr);

      while((*str)!='\0'){
          i++;
          str++;
      }

    printf("%d\n",i);



}

