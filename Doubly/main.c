#include <stdio.h>
#include <stdlib.h>
#include"data.h"

int main()
{               // DoublyLinkedList//
    int countr;
    data *head ;
    head = Create_Node(4);
    AddEnd(head);
    head = AddFirst(head);
    printf("Number Of Nodes is :%d \n",Counter(head));
    head = AddPosition(head , 3 , 1999);
    PrintData(head);
    printf("Number Of Nodes is :%d \n",Counter(head));

    printf("Sorting :\n");
    Sorting(head);
    PrintData(head);
    return 0;
}
