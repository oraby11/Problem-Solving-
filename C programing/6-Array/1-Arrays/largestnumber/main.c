#include <stdio.h>
#include <stdlib.h>
int Maxnum( int arr[10]);
int Minnum( int  arr[10]);
int main()
{

  int max,min;
    int arr[10];
    int i;
    for(i=0;i<=9;i++){
        printf("enter the number %d \n",i+1);
        scanf("%d",&arr[i]);
       int big=Maxnum(max);
      int small=Minnum(min);
      printf("%d",big);
       printf("%d",small);

    }



int Maxnum( int arr[10]){
    for(int x=0;x<9;x++){
        if(arr[i]>arr[i+1]){
           int max=arr[i+1];
           return max;
        }
    }
}
}
int Minnum( int  arr[10]){
   int i;
    for(int x=0;x<9;x++){
        if(arr[i]<arr[i+1]){
           int min=arr[i+1];
           return min;
        }
    }
}





