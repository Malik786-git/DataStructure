// Implement Stack and its Operation in lisklist....

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
// traversal

void Traversal(Node *ptr)
{

    while (ptr != NULL)
    {
        cout << "Data : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int isEmpty(Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(Node *top)
{
    Node *p = new Node();
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//  PUSH
Node *push(Node *top, int d)
{
    if (isFull(top))
    {
        cout << "Stack Overflow!" << endl;
        return top;
    }
    else
    {
        Node *n = new Node();
        n->data = d;
        n->next = top;
        top = n;
        return top;
    }
}
// PoP (deletion in stack)
int pop(Node **top)
{
    if (isEmpty(*top))
    {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    else
    {
        Node *n = *top;
        *top = (*top)->next;
        int x = n->data; //store delete value for return
        delete n;
        return x;
    }
}
//Peek(position of data element)
int peek(Node *top, int position)
{
    Node *ptr = top;

    for (int i = 0; (i < position - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}
// Top value
int topValue(Node *ptr)
{
    return ptr->data;
}
// Bottom value
int bottomValue(Node *top)
{
    Node *ptr = top;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}
int main()
{
    Node *top = NULL;
    //   push element
    top = push(top, 2);
    top = push(top, 6);
    top = push(top, 8);
    top = push(top, 10);
    Traversal(top);

    //    check pop operation
    // cout << "Delete value = " << pop(&top) << endl;
    // Traversal(top);

    //  check the position of element
    // cout << peek(top, 3)<<endl;

    // check top and bottom value
    cout << "Top: " << topValue(top) << endl
         << "Bottom: " << bottomValue(top) << endl;
    return 0;
}