// Given an array a[ ] of size ***‘n-1’*** with integers in the range of ***[1,n].*** There are no duplicates in the list.
// Write a program to find the missing number from the first ***n*** integers.

// Consider example n=5;  a[ ]= { 2, 5, 1, 3}; 

// n=5 means Range[1,5]. Output should be the missing number between 1 to 5. So 4 is the output as per the given array. 

// **Note:** Find the missing number in O(n) time and constant space.

// ## Test case →

// 1.  a[ ] = { 3, 6, 1, 5, 4} , n=6
// 2.  a[ ] = { 8, 3, 2, 1, 5, 4, 7} , n=8
// 3.  a[ ] = { 3, 2, 4, 5} , n=5


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