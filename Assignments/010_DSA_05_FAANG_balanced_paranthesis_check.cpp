// Write a Program to check for balanced parentheses.
// Given a string with just the six characters - ‘`(`’, ‘`)`’, ‘`{`’, ‘`}`’, ‘`[`’ and ‘`]`’. Determine if the string is balanced.
// A string is balanced if all brackets exist in pairs and are closed in the correct order.

#include <bits/stdc++.h>
using namespace std;

bool BalancedorNot(string para);

string para;

int main()
{
    cout << "Enter the Paranthesis Sequence:\t";
    cin >> para;
 
    if (BalancedorNot(para))
    {
        cout << "Paranthesis String is Balanced";
    }
        
    else
    {
        cout << "Paranthesis String is Not Balanced";
    }
    return 0;
}


bool BalancedorNot(string para)
{
    stack<char> temp;
    for (int i = 0; i < para.length(); i++) 
    {
        if (temp.empty()) 
        {
            temp.push(para[i]);
        }
        else if ((temp.top() == '(' && para[i] == ')')
                 || (temp.top() == '{' && para[i] == '}')
                 || (temp.top() == '[' && para[i] == ']')) 
        {
            temp.pop();
        }
        else 
        {
            temp.push(para[i]);
        }
    }
    if (temp.empty()) 
    {
        return true;
    }
    return false;
}