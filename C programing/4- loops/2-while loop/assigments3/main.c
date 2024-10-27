#include <stdio.h>
#include <stdlib.h>

int main()
{
int id ,password,i;
printf("enter the id\n");
scanf("%d",&id);

if (id==1234){
    printf("enter the password\n");
    scanf("%d",&password);
    if(password==7788){
    printf(" welcome ahmed\n");
    }
    else{
    printf("try again\n");
    for(int i=1;i<=2;i++){
    printf("enter the password\n");
    scanf("%d",&password);
    (password==7788)? printf("welcome ahmed") : printf("try again")
    }

    }


if (id==5678){
    printf("enter the password\n");
    scanf("%d",&password);
    if(password==5566){
    printf(" welcome amr\n");
    }
    else{
    printf("try again\n");
    }
    }



if(id==9870){
    printf("enter the password\n");
    scanf("%d",&password);
    if(password==1122){
    printf(" welcome wael\n");
    }
    else{
        printf("try again\n");
    }
    }



else{
    printf("you are not registered\n");
}
}

