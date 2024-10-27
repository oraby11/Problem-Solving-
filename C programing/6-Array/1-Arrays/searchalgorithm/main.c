#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[9]={7,9,14,35,42,50,52,53,60};
    int start=0,end=9,middle,search=0,nothing=0;
    int index=5;
    printf("enter the value\n");
    scanf("%d",&search);
    while(start<=end){
            middle=(start+end)/2;
            if(search==arr[middle]){
                index=middle;
                break;
            }
        else if (search>arr[middle]){
        start=middle+1;
        }

        else {
          end =middle-1;
        }
        if (start>end){
              printf("not found\n");
        }
        else{
            printf("%d\n",index);
        }

    }
    printf("\n");
    return 0;
}
