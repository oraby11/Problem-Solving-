#include <stdio.h>
#include <stdlib.h>
int setbit(int number,int bitnum);
int clrbit(int number,int bitnum);
int toglbit(int number,int bitnum);
int getbit(int number,int bitnum);

int main()
{
    int op,bit;
    printf(" enter the number and bit\n");
    scanf("%d%d",&op,&bit);
    int res=setbit(op,bit);
    printf("%d\n",res);
    int cl=clrbit(op,bit);
    printf("%d\n",cl);
    int t=toglbit(op,bit);
    printf("%d\n",t);
    int g=getbit(op,bit);
    printf("%d\n",g);
}


int setbit(int number,int bitnum){
    int sett = number | (1<<bitnum);
}
int clrbit(int number,int bitnum){
    int clear= number & (~(1<<bitnum));
}
int toglbit(int number,int bitnum){
    int toggle= number ^ (1<<bitnum);
}
int getbit(int number,int bitnum){
    int ge= ((number >>bitnum)&1);

}
