#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);

    (ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z')? printf("palphabet") :printf("not");




    return 0;
}
