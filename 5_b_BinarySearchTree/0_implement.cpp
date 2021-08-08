
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
void InOrder(Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        cout << " " << root->data;
        InOrder(root->right);
    }
}

// check tree is BST or not
int isBST(Node *root)
{
    static Node *prev = NULL;
    if (root != NULL)
    {

        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
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

    InOrder(c);
    cout<<"\ncheck"<<endl;
    cout<<isBST(c);
    
    return 0;
}