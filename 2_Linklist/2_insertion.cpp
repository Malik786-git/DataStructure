// Insertion 
/*
1. Insert beginning -> Complexity = O(1)
2. Insert B/W -> Complexity = O(2)
3. Insert in end -> Complexity = O(n)
4. Insert after given Node -> Complexity = O(1)
 */




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
// 1. Insert beginning -> Complexity = O(1)
void push(Node** head, int data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->data = data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head);
 
    /* 4. move the head to point to the new node */
    (*head) = new_node;
}

// 2. Insert B/W -> Complexity = O(2)
 void insertBetween(Node **head, int data, int index ){
     Node* newNode = new Node();
     Node* p = *head;
     int i = 0;
     while (i!=index-1)
     {
         p = p->next;
         i++;
     }

     newNode->data = data;
     newNode->next = p->next;

     p->next = newNode;
 }

// 3. Insert in end -> Complexity = O(n)
 void insertEnd(Node **head, int data){
     Node* newNode = new Node();
     Node* p = *head;

     while (p->next != NULL)
     {
         p = p->next;
     }

     newNode->data = data;
     newNode->next = NULL;

     p->next = newNode;
 }
 //4. Insert after given Node -> Complexity = O(1)
 void insertAfter(Node *preNode, int data ){
     Node* newNode = new Node();
     newNode->data = data; 
     newNode->next = preNode->next;
     preNode->next = newNode;
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

    head->data = 5; 
    head->next = second; 

    second->data = 6;
    second->next = third;

    third->data = 7; 
    third->next = NULL;
  cout<<"Before............."<<endl<<endl;
   Traversal(head);
  cout<<"\nAfter............."<<endl<<endl;

//    push(&head,4);
//    push(&head,3);
//    insertBetween(&head,1,2);
//    insertEnd(&head,8);
//    insertAfter(third,8);


   Traversal(head);

    return 0;
}








