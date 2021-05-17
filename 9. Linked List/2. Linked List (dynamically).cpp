/* Create Linked List using Dynamic Memory Allocation */

#include<iostream>
using namespace std;

class Node
{
    public : 
    int data;
    Node *next;

    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

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
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);

    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;

    Node *head = node1;

    printList(head);

    return 0;
}