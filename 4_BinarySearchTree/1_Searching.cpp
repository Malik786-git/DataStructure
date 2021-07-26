
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int data)
{

    Node *N = NULL;
    N = new Node();
    N->data = data;
    N->left = NULL;
    N->right = NULL;

    return N;
}

Node* search(Node* root, int key){
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
       
}
int main()
{
    //  Binary Search Tree Looks!
    /* 

       5
      / \
     3   6 
    / \
   1   4

*/
    //  Create Tree Element's
    Node *c = createNode(5);
    Node *c1 = createNode(3);
    Node *c2 = createNode(6);
    Node *c3 = createNode(1);
    Node *c4 = createNode(4);

    c->left = c1;
    c->right = c2;
    c1->left = c3;
    c1->right = c4;
     
    if (search(c, 9) != NULL)
    {
        cout<<"Available";
    }else
    {
        cout<<"Not Available";   
    }
    return 0;
}