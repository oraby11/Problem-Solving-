#include <stdio.h>
#include <stdlib.h>
char compare(char *str1,char *str2);

int main()
{
    char  first[100] ,second[100];
    char res;

    printf("enter the first string \n");
    scanf("%s",first);
    printf("enter the second string \n");
    scanf("%s",second);
    res=compare(first,second);
    if (res==0){
        printf("two string are equal\n");
    }
     else if (res<0){
        printf("second string is bigger");
    }
    else
        printf("first string is bigger");
}
char compare(char *str1,char *str2){

  while((*str1!='\0')&&(*str2!='\0')){

    str1++;
    str2++;
    return  *str1-*str2;
  }

}
