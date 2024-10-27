#include <stdio.h>
#include <stdlib.h>
int func(int *,int*);
int main()
{
    int n1=10,n2=20;
    int sum=func(&n1,&n2);
    printf("%d",sum);
}
int func(int *x,int* y){

return *x+*y;

}
