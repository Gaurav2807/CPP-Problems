/* Create a linked list manually */

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
    
    while(temp -> next != NULL)
    {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
}

int main()
{
    Node node1(10);
    Node node1(20);
    Node node1(30);
    Node node1(40);
    Node node1(50);

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;

    Node *head = &node1;

    printList(head);

    return 0;
}