#include <stdio.h>
#include <stdlib.h>
#include"data.h"

int main()
{               // Doubly_Linked_List//
    int countr;
    data *head ;
    head = Create_Node(head,4);
    AddEnd(head);
    PrintData(head);
    head = AddFirst(head);
    PrintData(head);

    countr = Counter(head);
    printf("Number Of Nodes is :%d \n",countr);
    return 0;
}
