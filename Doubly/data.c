#include<stdio.h>
#include<stdlib.h>
#include "data.h"

data *Create_Node(data *head , int x){
        data *ptr = malloc(sizeof(data));
        ptr->x = x;
        ptr->next = NULL ;
        ptr->prev = NULL;
    return ptr ;
}
void AddEnd(data *head){
    int elements,value;
    data *temp = head;
    int i = 0 ;
        printf("Enter How Many Elements You Want To Add :\n\n");
        scanf("%d",&elements);
        while(i <elements){
            data *ptr = malloc(sizeof(data));
            ptr->next = NULL;
            ptr->prev = NULL;
            printf("Enter The Value Number %d:",i+1);
            scanf("%d",&value);
            ptr->x = value;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = ptr ;
            ptr->prev = temp ;
            i++;
        }
}
void PrintData(data *head){
    int i = 1;
    data *ptr = head ;
    if(ptr == NULL){
        printf("Your List Is Empty  :\n");
    }else{
            while(ptr != NULL) {
                printf(" Data Number %d is  : %d\n",i,ptr->x);
                i++;
                ptr = ptr->next;
            }
    }
}
data *AddFirst(data *head){
    int elements,value;
    int i = 0 ;
        printf("Enter How Many Elements You Want To Add :\n\n");
        scanf("%d",&elements);
        while(i <elements){
            data *ptr = malloc(sizeof(data));
            ptr->next = NULL;
            ptr->prev = NULL;
            printf("Enter Value Number %d:",i+1);
            scanf("%d",&value);
            ptr->x = value;
            ////////////////
            ptr->next = head;
            head->prev = ptr;
            head = ptr ;
            i++;
                    }
                return head;
        }
int Counter(data *head){
            int x = 0 ;
            data *ptr = head;
            if(ptr == NULL) {
                printf("Your List Is Empty :\n");
            }else{
                while(ptr != NULL){
                    ptr = ptr->next;
                    x++;
                }
                    return x ;
            }

        }
data *AddPosition(data *head, int position, int value) {
        data *clone = head;
        data  *UserNode = malloc(sizeof(data));

        UserNode->next = NULL;
        UserNode->prev = NULL;
        UserNode->x = value;

        if(position == 1){
            UserNode->next = head ;
            head->prev = UserNode ;
            head = UserNode;
            return head;
        }else{
            while(position > 2 && clone->next != NULL){
                clone = clone->next;
                position--;
            }
            if(clone->next == NULL && position > 2 ){
               printf("Invalid Poition :\n");
               return head ;
            }else if(clone->next == NULL){
                clone->next = UserNode;
                UserNode->prev = clone ;
                return head;
            }else{
                data *ptr2 = clone->next;
                clone->next = UserNode;
                UserNode->prev = clone;
                UserNode->next = ptr2;
                ptr2->prev = UserNode;
                return head;
            }
        }
}
