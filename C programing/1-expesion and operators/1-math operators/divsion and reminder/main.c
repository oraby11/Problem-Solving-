#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,div;
      int rem;
    printf("enter i\n");
    scanf("%d",&i);
    printf("enter j\n");
    scanf("%d",&j);

    div =i/j;
    printf("div is =%d",div);

    rem=i%j;
    printf("rem is =%d",rem);



    return 0;
}
