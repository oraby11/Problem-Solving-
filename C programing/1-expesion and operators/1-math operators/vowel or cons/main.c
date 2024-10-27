#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet;
    printf("enter the alphabet\n");
    scanf("%c",&alphabet);

    if (alphabet=='a'|alphabet=='e'|alphabet=='i'|alphabet=='o'|alphabet=='u'){

      /*   alphabet='e';
          alphabet='o';
           alphabet='i';
            alphabet='u'; */
            printf("alphabet is vowel");
    }
    else{
        printf("alphabet is cons");
    }



    return 0;
}
