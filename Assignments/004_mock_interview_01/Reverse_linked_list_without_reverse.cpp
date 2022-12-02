#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int ll;
        Node* next;
};

void Reverse(Node* head)
{
    if (head == NULL)
    return;
    Reverse(head->next);
    cout << head->ll << " ";
}

void push(Node** head_r, char nll)
{
    Node* new_node = new Node();
    new_node->ll = nll;
    new_node->next = (*head_r);
    (*head_r) = new_node;
}
 

int main()
{
    Node* head = NULL;
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
     
    Reverse(head);
    return 0;
}