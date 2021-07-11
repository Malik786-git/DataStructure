// Implement and Traversal
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;  
 
};

 void Traversal(Node *ptr){

      while(ptr!=NULL){
          cout<<"Data : "<<ptr->data<<endl;
          ptr = ptr->next;
      }
 } 

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1; 
    head->next = second; 

    second->data = 2;
    second->next = third;

    third->data = 3; 
    third->next = NULL;

   Traversal(head);
    return 0;
}