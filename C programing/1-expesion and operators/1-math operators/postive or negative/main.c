#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);


    if(number>0)
     printf("postive");

    else if  (number<0){
        printf("negative");
     }

   else{
    printf("error");
   }


    return 0;
}
