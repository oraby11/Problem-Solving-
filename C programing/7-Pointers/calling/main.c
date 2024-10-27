#include <stdio.h>
#include <stdlib.h>


  int main()
  {
     int arr[20];
     int *ptr=arr;
     ptr[5]=2;
     *(ptr+1)=ptr[1];
     printf("%d",arr[1]);
  }






