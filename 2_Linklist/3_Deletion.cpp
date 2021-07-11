#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void Traversal(Node *head)
{
    while (head != NULL)
    {
        cout << "Data Element : " << head->data << endl;
        head = head->next;
    }
}
//1.  Delete Node first
Node *deleteFirst(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
//2. Delete Node at a given index
Node *deleteAtIndex(Node *head, int index)
{
    Node *p = head;
    Node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    delete q;
    return head;
}
//3. Delete last Node
Node *deleteLast(Node *head)
{
    Node *p = head;
    Node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next =NULL;
    delete q;
    return head;
}
//4. Delete Node with a given value
Node *deleteValue(Node *head, int value)
{
    Node *p = head;
    Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
       p->next = q->next;
       delete q;
    }else{
        cout<<"Not found!"<<endl;
    }
    
    return head;
}
int main()
{

    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = NULL;

    Traversal(head);
    cout << "\n After-----------------------------" << endl;
    head = deleteValue(head,10);
    Traversal(head);
    cout << "\n After also-----------------------------" << endl;
    head = deleteValue(head,15);
    Traversal(head);
    return 0;
}