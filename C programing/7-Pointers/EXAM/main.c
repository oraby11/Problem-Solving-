#include <stdio.h>
#include <stdlib.h>
struct{
int bit_1:1;
int bit_2:2;
int bit_4:4;
}bit={1,3,10};
int main()
{
    /*
unsigned int m=32;
printf("%x",~m);
*/
  /*  int a=2;
    if(a--,--a,a)
        printf("no");
    else
        printf("sh");
}  */
/*
int n;
for (n=9;n!=0;n--)
    printf("%d",n--);
}
*/
/*
int x=10;
float y=2.5;
int z;
z=x*y + x-y;
printf("%d",z);
}
*/
/*
int a=5;
switch(a){

case 5: a=a+1;



}
printf("%d",a);
*/
/*
int i=2,j=2;
while(i+1?--i:j++)
    printf("%d",i);

int x=2;
int arr[]={1,2,3};
switch(x){
case arr[0]:printf("1");
case arr[1]:printf("2");
case arr[2]:printf("3");
}

int arr[5]={10,20,30,40,50};
printf("%d",arr[5]);

*/
/*
char name[]="ahmed";
printf("%c",++name[1]);

*/
/*
int x=4,y=2;
if(x=y)
    printf("df");
else
    printf("d");
}
*/

printf("%d,%d,%d",bit.bit_1,bit.bit_2,bit.bit_4);


int arr[9];
printf("%d",sizeof(arr));

}

