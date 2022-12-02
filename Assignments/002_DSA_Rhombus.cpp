// Write a Program to print Hollow Rhombus pattern of printing stars. 
// Input will contain the length of rhombus n.
// ## Test case →

// 1.  Consider n=5
// 2.  n=8
// 3.  n=3

#include <iostream>
using namespace std;

int main ()
{
    int i, j;

    for (i=0; i<=4; i++)
    {
        for (j=4-i; j>=0; j--)
        {
            cout << " ";
        }

        for (j=0; j<=4; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}