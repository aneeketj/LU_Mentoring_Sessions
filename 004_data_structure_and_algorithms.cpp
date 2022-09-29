#include<iostream>
using namespace std;

int main()
{
    int size, i, n, num;

    cout << endl << "Enter the size of array:\t";
    cin >> size;
    n = size-1;
    int *A = new int(n);
    int *temp = new int(n);

    for (i = 0; i <= n-1; i++)
    {
        cout << endl << "Enter the element less than " << size << ":\t";
        cin >> A[i];
    }

    
    for (i = 0; i <= n; i++)
    {
        temp[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        temp[A[i]-1] = 1;
        cout << temp[i] << "\t";
    }

    for (i = 0; i <= n-1; i++)
    {
        if (temp[i] == 0)
            cout << endl << i+1;
    }

}
