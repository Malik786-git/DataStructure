// Implement and Traversal
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data){

    Node* N = NULL;
    N = new Node();
    N->data = data;
    N->left = NULL;
    N->right = NULL;

    return N;
}

int main()
{
//    Create Node Manaullay
//     // constructing the root
//     Node* root = NULL;
//     root = new Node();
//     root->left = NULL;
//     root->right = NULL;

//     // constructing the first child

//     Node* p1 = NULL;
//     p1 = new Node();
//     p1->left = NULL;
//     p1->right = NULL;
    

//     // constructing the second child
//     Node* p2 = NULL;
//     p2 = new Node();
//     p2->left = NULL;
//     p2->right = NULL;

//    // link the root node with its children  
//     root->left = p1;
//     root->right = p2;


// /////////////////////////////////////////////////////


// Create Node through function (Recomended)


  Node* root = createNode(2);
  Node* c1 = createNode(4);
  Node* c2 = createNode(8);

  root->left = c1;
  root->right = c2;

  Node* c1_a = createNode(10);
  Node* c1_b = createNode(12);
  
  c1->left = c1_a;
  c1->right = c1_b;





  return 0;
}