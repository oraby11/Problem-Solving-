#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[10];
    int i=0;
    int j,x,temp;
    while(i<10){
    printf("enter the 10number%d\n",i+1);
    scanf("%d",&arr[i]);
    i++;
    }
    for(x=0;x<9;x++){
        for(j=0;j<9-x;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }
    }
    for(x=0;x< 10;x++){
        printf("%d\n",arr[x]);
    }



}
