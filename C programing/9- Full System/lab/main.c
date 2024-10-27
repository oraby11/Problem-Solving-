#include <stdio.h>
#include <stdlib.h>


    typedef struct Node {
    int data;
    struct Node* next;
    }node_t;
    int main()

    {
        node_t* Head=(node_t*)malloc(sizeof(node_t));
        node_t*ptr=Head;
        node_t* first=(node_t*)malloc(sizeof(node_t));
        node_t* second=(node_t*)malloc(sizeof(node_t));

         Head->data =20;
        first->data=30;
        second->data=50;


        Head->next=first;
        first->next=second;
        second->next=NULL;

         while(ptr!=NULL){
            printf("%d\n",ptr->data);
           ptr= ptr->next;
         }
}
