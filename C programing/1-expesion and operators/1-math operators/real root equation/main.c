#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,b,c,x1,x2;
    float root;
    printf("enter the value a\n");
    scanf("%d",&a);
     printf("enter the value b\n");
    scanf("%d",&b);
     printf("enter the value c\n");
    scanf("%d",&c);


    if(a=b=0){
        printf("no solution");
    }
     else if (a=0){
        root=(float)(-c)/(float)(b);
            printf("root %f\n",root);

     }
     else if (b*b-4*a*c){
        printf("no roots");
     }
     else{
        printf("two roots");
     x1=-b+(b*b-4*a*c)1/2/2*a;
     x2=-b-(b*b-4*a*c)1/2/2*a;
     printf("%d",x1);
     printf("%d",x2);

    }








    return 0;
}
