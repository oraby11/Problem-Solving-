#include <stdio.h>
#include <stdlib.h>
//#define   get(str1,str2)   #str1  #str2
/*
void func(int x){
x=30;
}
int main()
{

    int y=20;
    func(y);
    printf("%d",y);
    return 0;
}*/



/*
int x=-15;
{

int x=20;
printf("%d",x);


}printf("%d",x);
*/
/*
char m[]=get(KEEP,_INCREASEING);
printf("%s",m);
}
*/
/*
int x=-32768;
int y=-x;
printf("%d",y);
}
*/


int  swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function by passing values
    swap(x, y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}



