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
// -------------------------------------------------------
// to understand must dry run for 3 and 5

Node *inOrderPre(Node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
Node *deleteNode(Node *root, int key)
{
    Node *iPre;
    // base Segment
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        delete (root);
        return NULL;
    }

    // search for the node to be deleted
    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    // Deletion Process
    else
    {
        iPre = inOrderPre(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}
// -------------------------------------------------------

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
    deleteNode(c, 5);
    cout << endl
         << c->data << endl;
    InOrder(c);

    return 0;
}