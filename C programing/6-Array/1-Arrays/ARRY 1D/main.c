
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
  //#define MAX_SIZE 1000

int main() {
    int arr[1000];
    int sum=0;
    int size,i=0;
    printf("enter the size of arry\n");
    scanf("%d",&size);
    while(i<size){

    printf("enter the number\n");
    scanf("%d",&arr[i]);

    sum=sum+arr[i];
    i++;
    }
    printf("sum =%d\n",sum);


    return 0;
}
