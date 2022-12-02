// Write a Program to find the node with minimum value in a Binary Search Tree.
// Example: For the below tree:

#include <bits/stdc++.h>
using namespace std;
 
struct node 
{
    int data;
    struct node* left;
    struct node* right;
};
 
struct node* newNode(int data)
{
    struct node* node  = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}
 
struct node* insert(struct node* node, int data)
{
    if (node == NULL)
        return (newNode(data));
    else {
        if (data <= node->data)
            node->left = insert(node->left, data);
        else
            node->right = insert(node->right, data);
        return node;
    }
}
 

int minimum(struct node* node)
{
    struct node* current = node;

    while (current->left != NULL) 
    {
        current = current->left;
    }
    return (current->data);
}
 

int main()
{
    struct node* root = NULL;

// Test CASE 01
    // root = insert(root, 6);
    // insert(root, 2);
    // insert(root, 4);
    // insert(root, 1);
    // insert(root, 3);
    // insert(root, 5);
    // insert(root, 6);    

// Test CASE 02
    // root = insert(root, 5);
    // insert(root, 6);
    // insert(root, 3);
    // insert(root, 10);
    // insert(root, 5);
    // insert(root, 8);


// Test CASE 03
    root = insert(root, 6);
    insert(root, 11);
    insert(root, 4);
    insert(root, 9);
    insert(root, 1);
    insert(root, 5);
    insert(root, 12); 
    insert(root, 15); 
    insert(root, 14); 
    
    cout << "\n Minimum value in BST is " << minimum(root);
    getchar();
    return 0;
}