#include <stdio.h>
#include <stdlib.h>


    int CountZeroBits(int Value) {
    int count = 0;

    /* CODE */
    while(Value){
    if((Value & 1)==0){
        count++;
    }
    Value>>=1;
}

    return count;
}

int main(void) {
    int x = 5;
    int ans = CountZeroBits(x);
    printf("%d\n", ans);
}

