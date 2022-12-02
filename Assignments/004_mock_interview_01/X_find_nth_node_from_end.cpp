#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node* next;
};

void findN(struct Node* head, int N)
{
    int len = 0, i;
    struct Node* temp = head;

    while (temp != NULL) 
    {
        temp = temp->next;
        len++;
    }

    if (len < N)
    {
        return;
    }
 
    temp = head;

    for (i = 1; i < len - N + 1; i++)
    {
        temp = temp->next;
    }
    cout << temp->data;
 
    return;
}
 
void push(struct Node** rhead, int ndata)
{

    struct Node* n_node = new Node();
    n_node->data = ndata;
    n_node->next = (*rhead);
    (*rhead) = n_node;
}
 

int main()
{
    struct Node* head = NULL;

    push(&head, 'D');
    push(&head, 'C');
    push(&head, 'B');
    push(&head, 'A');

    findN(head, 3);
    return 0;
}