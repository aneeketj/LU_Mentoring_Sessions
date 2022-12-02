#include <iostream>
using namespace std;

int Single_E(int A[], int size)
{

    for (int i = 0; i < size; i++) 
    {
        int count = 0;
 
        for (int j = 0; j < size; j++) 
        {
            if (A[i] == A[j]) 
            {
                count++;
            }
        }
 
        if (count == 1) 
        {
            return A[i];
        }
    }
    return -1;
}

int main()
{
    int ar[] = { 2,2,9,8,7,9,7 };
    int n = sizeof(ar) / sizeof(ar[0]);

    cout << "Element that appears only once is " << Single_E(ar, n);
   
    return 0;
}