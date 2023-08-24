#include <stdio.h>
#include <stdlib.h>
#include"data.h"

int main()
{
    data *head ;
    head = Create_Node(head,4);
    AddEnd(head);
    PrintData(head);
    head = AddFirst(head);
    PrintData(head);
    return 0;
}
