#include <stdio.h>
#include <stdlib.h>
int max(int x,int y);
int main()
{
    int op1,op2;
    printf("enter two number");
    scanf("%d%d",&op1,&op2);
    int big=max(op1,op2);
    printf("%d",big);
}
int max(int x,int y){

  if(x>y  ){
        return x;
}
else{
    return y;
}
}
