#include <stdio.h>
#include <stdlib.h>

int main()
{
 float  n1,n2,i;
  char op;
 do {
 printf("enter the first ");
 scanf("%f",&n1);
 printf("enter the second ");
 scanf("%f",&n2);
 printf("enter the operation");
 scanf(" %c",&op);
 switch(op){
 case '+':printf("%f+%f=%f",n1,n2,n1+n2);break;
 case '-':printf("%f-%f=%f",n1,n2,n1-n2);break;
 case '*':printf("%f*%f=%f",n1,n2,n1*n2);break;
 case '/':printf("%f/%f=%f",n1,n2,n1/n2);break;
 }
 printf("do you want repeat");
 scanf("%f",&i);

 } while (i!=0);



}
