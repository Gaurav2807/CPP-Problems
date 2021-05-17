#include<iostream>
using namespace std;

void printList(Node *head)
{
    Node *temp = head;
    
    while(temp != NULL)
    {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "Null";
}