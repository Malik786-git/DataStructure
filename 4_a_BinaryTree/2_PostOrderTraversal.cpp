// Implement Traversal
//1. POST ORDER 

//  Tree Looks!
/* 
       4
      / \
     1   6 
    / \
   5   2

   Root-Left-Right = 4 1 5 2 6

*/


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
void PostOrder(Node* root){
   if(root != NULL){
     PostOrder(root->left);
     PostOrder(root->right);
     cout<<" "<<root->data;
   }
}
int main()
{

//  Create Tree Element's 
  Node* c = createNode(4);
  Node* c1 = createNode(1);
  Node* c2 = createNode(6);
  Node* c3 = createNode(5);
  Node* c4 = createNode(2);
  c->left = c1;
  c->right = c2;
  c1->left = c3;
  c1->right = c4;

  PostOrder(c);
  return 0;
}