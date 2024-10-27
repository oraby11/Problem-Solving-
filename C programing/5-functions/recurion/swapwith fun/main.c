#include <stdio.h>
#include <stdlib.h>
int op1=10,op2=5;
void swap(void);
int main()
{

    swap();
    printf("%d\n%d\n",op1,op2);
}
void swap(void){
int z;
z=op1;
op1=op2;
op2=z;

}
