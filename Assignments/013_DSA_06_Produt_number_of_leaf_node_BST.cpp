// Write a Program to count leaf nodes in a binary search tree.

#include <bits/stdc++.h>
using namespace std;
  
struct node 
{ 
    int data; 
    struct node* left; 
    struct node* right; 
}; 
  

unsigned int LeafCount(struct node* node) 
{ 
    if(node == NULL)     
        return 0; 
    if(node->left == NULL && node->right == NULL) 
        return 1;         
    else
        return LeafCount(node->left)+ 
            LeafCount(node->right); 
} 
  

struct node* newNode(int data) 
{ 
    struct node* node = (struct node*) 
    malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
      
return(node); 
} 
  
int main() 
{ 
    struct node *root = newNode(4); 
    root->left = newNode(2); 
    root->right = newNode(1); 
    root->left->left = newNode(3); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
  

cout << "Leaf count of the tree is : "<< 
LeafCount(root) << endl; 
return 0; 
} 