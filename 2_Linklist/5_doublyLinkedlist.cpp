// code double linklist itself
// Implement and Traversal
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;  
    Node* pre;  
};
// Task Create Forward and Reverse Traversal Function FOR doubly linklist


int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->pre = NULL;
    head->next = second; 
    head->data = 1; 

    second->pre = head;
    second->next = third;
    second->data = 2;

    third->pre = second;
    third->next = NULL;
    third->data = 3; 
    
   return 0;
}