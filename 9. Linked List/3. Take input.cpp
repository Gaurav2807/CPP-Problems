#include<iostream>
#include"0. Node.h"
using namespace std;

Node* takeInput()
{
    int data;
    Node *head = NULL;

    cin >> data;

    while(data != -1)
    {
        Node *newNode = new Node(data);

        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
        
        cin >> data;
    }
    
    return head;
}

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

int main()
{
    Node *head = takeInput();

    printList(head);
    
    return 0;
} 