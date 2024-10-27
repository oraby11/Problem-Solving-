#include <stdio.h>
#include <stdlib.h>

int main()
{


 int n1,n2,n3;
 printf("enter the 3 numbers");
 scanf("%d%d%d",&n1,&n2,&n2);
 if ((n1>n2) &&(n1>n3)){
    printf("the max is %d",n1);
 }
 if ((n1<n2) &&(n2>n3)){
    printf("the max is %d",n2);
 }
if ((n3>n2) &&(n1<n3)){
    printf("the max is %d",n3);
 }


    return 0;
}
