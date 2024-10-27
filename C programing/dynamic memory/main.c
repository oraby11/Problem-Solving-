#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(){

int arr[SIZE];
int* ptr =arr[0];
int i=0,x;
for(i=0;i<5;i++){
printf("element %d=\n",i+1);
scanf("%d",&ptr+i);
}
for(i=0;i<5;i++){
printf("address is  %08x\n",ptr+i);

}
}
