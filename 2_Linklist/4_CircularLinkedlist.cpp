#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void CircularTraversal(Node *head)
{

    Node *ptr = head;
    do{
        cout << "Data : " << ptr->data << endl;
        ptr = ptr->next;

    }while (ptr != head);
}
//  Insert first Node

void insertFirstNode(Node** head, int data){
   Node *ptr = new Node();
   ptr->data = data;

   Node *p = (*head)->next;
   while (p->next != (*head))
   {
       p = p->next;
   }
   p->next = ptr;
   ptr->next = (*head);
   (*head) = ptr;
}

int main()
{

    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = head;
  

    CircularTraversal(head);
    cout<<"after"<<endl;
    insertFirstNode(&head, 1);
    CircularTraversal(head);
     cout<<"after"<<endl;
    insertFirstNode(&head, 2);
    CircularTraversal(head);
    return 0;
}