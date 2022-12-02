// Write a program to determine if the sum of two integers is equal to a given value.
// Given an array A[] of n numbers and another number x, determines whether or not there exist two elements in A[] whose sum is exactly x.


#include<iostream>
using namespace std;

int main()
{
    int a[5], num, temp, count=0;
    for (int i=0; i<5; i++)
    {
        cout << "Enter the element in array:\t";
        cin >> a[i];
    }

    cout << "Enter a number to check:\t";
    cin >> num;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4-i; j++)
        {
            temp = a[i]+a[i+j+1];

            if (num == temp)
            {
                cout << endl << "The pair is " << a[i] << " " << a[j+i+1];
                count++;
            }
        }
    }
    if (count == 0)
    {
        cout << endl << "No valid pair exist";
    }
}