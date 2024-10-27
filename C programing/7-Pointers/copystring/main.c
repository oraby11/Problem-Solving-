#include <stdio.h>
#include <stdlib.h>
//void copy(char *sring);
int main()
{

    char text1[100];
    char text2[100];
    char *first =text1;
    char *second=  text2;
    int i;
     printf("enter the string\n ");
     scanf("%s",text1);

    while (first[i]!='\0'){
        second[i]=first[i];
        i++;
    }
    printf("%s",text2);
}



     /*
      char res= copy();



    }
    void copy(char *sring){
    char *second;
    while ((*sring)!='\0'){
        *second=(*sring);
        printf("%s",*second);
    }


    }
*/
