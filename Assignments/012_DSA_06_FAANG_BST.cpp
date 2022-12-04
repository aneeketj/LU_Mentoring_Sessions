// Write a Program to construct BST from given preorder traversal

#include <bits/stdc++.h>
using namespace std;

class node 
{
    public:
        int data;
        node* left;
        node* right;
};
 
node* nNode(int data)
{
    node* temp = new node();
 
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}

node* temp_tree(int pre[], int* pIndex, int low, int high, int size)
{

    if (*pIndex >= size || low > high)
    {
        return NULL;
    }
        
    node* root = nNode(pre[*pIndex]);
    *pIndex = *pIndex + 1;


    if (low == high)
    {
        return root;
    }

    int i;
    for (i = low; i <= high; ++i)
    {
        if (pre[i] > root->data)
        {
            break;
        }
    }   
    
    root->left = temp_tree(pre, pIndex, *pIndex, i - 1, size);
    root->right = temp_tree(pre, pIndex, i, high, size);
 
    return root;
}


node* Tree(int pre[], int size)
{
    int pIndex = 0;
    return temp_tree(pre, &pIndex, 0, size - 1, size);
}


void output(node* node)
{
    if (node == NULL)
    {
        return;
    }
        
    output(node->left);
    cout << node->data << " ";
    output(node->right);
}


int main()
{
    int pre[] = { 40,30,20,35,55 };
    int size = sizeof(pre) / sizeof(pre[0]);
 
    node* root = Tree(pre, size);
 
    cout << "Traversed Tree output: \n";
    output(root);
 
    return 0;
}