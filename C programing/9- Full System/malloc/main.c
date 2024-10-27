#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int i;
    int *ptr=NULL;

     printf("enter the size\n");
     scanf("%d",&size);
    ptr=(int *)malloc(size);
     while(i<=size){
        printf("enter the number\n");
        scanf("%d",&ptr[i]);
        i++;

     }

       for(int s=0;s<size-1;s++){
    for(int j=0;j<(size-1)-1;j++){
            if(ptr[j]>ptr[j+1]){
        int temp=ptr[j];
        ptr[j]=ptr[j+1];
        ptr[j+1]=temp;
    }
    }
    for(s=0;s<size;s++ ){
        printf("%d\n",ptr[s]);
    }

    }

    return 0;
}
