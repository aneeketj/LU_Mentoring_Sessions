// Write a Program to check a given number representation is in binary or not?
// User input will contain a single integer n. 0≤n≤30,000

#include<iostream>
using namespace std;

void test_bin (int);

int main()
{
    int num;
    cout << endl << "Enter the number to test:\t";
    cin >> num;

    if (num < 0 || num >= 30000)
    {
        cout << endl << "Out of Range!!!";
    }
    else    
        test_bin(num);
}


void test_bin(int n)
{
    int mod;
    while(n>=0)
    {
        mod = n%10;
        if (mod != 0 && mod != 1)
        {
            cout << "Given number representation is NOT binary!";
            break;
        }
        n = n/10;
        if (n == 0)
        {
            cout << "The given number representation is binary!";
            break;
        }
    }
}