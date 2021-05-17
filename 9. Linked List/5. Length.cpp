#include "0. Node.h"

int length(Node *head)
{
    int length = 0;
    Node *temp = head;
    
    while(temp != NULL)
    {
        temp = temp -> next;
        length++;
    }

    return length;
}

int main()
{
    Node *head = takeInputUsingHeadAndTail();
    length(head);

    return 0;
}