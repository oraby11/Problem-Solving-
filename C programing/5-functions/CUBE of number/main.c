#include <stdio.h>
#include <stdlib.h>
  double cubefunc(double num);
int main(){

    int num;
    double c;
    printf("Enter any number: ");
    scanf("%d", &num);
     c=cubefunc(num);
    printf("the cube of %d number is %0.2f \n",num,c);
    return 0;
}
   double cubefunc(double num){

     return (num * num * num);

 }
