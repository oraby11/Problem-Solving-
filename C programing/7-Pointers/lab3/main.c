#include <stdio.h>
#include <stdlib.h>
int sum(int *,int*);
int sub(int *,int*);
int main()
{
    int num1,num2;
    printf("enter the number");
    scanf("%d%d",&num1,&num2);
    int add=sum(&num1,&num2);
    int subt=sub(&num1,&num2);
    printf("%d\n",add);
    printf("%d\n",subt);

    printf("\n");
}
int sum(int *x,int* y){
     int res1=*x+*y;
     return res1;
}
int sub(int *x,int* y){

     int res2=*x-*y;
    return  res2;
}
