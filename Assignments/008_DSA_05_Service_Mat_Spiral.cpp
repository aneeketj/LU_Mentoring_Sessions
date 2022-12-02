// ## Questions →
// Write a Program to traverse a given matrix of N x N, in spiral form.
// Constraints: 0<N<500
// Input: The first line contains N, which represents the number of rows and columns of a matrix. The next N lines contain N values, each representing the values of the matrix.
// Output: A single line containing integers with space, representing the desired traversal.

// Test case → 

// Input: 
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output:
// 1 2 3 6 9 8 7 4 5


#include<iostream>
#include<iomanip>
using namespace std;

int i, j, i1 = 0, i2 = 3, j1, j2, N, count;
int a[500][500];

void right();
void down();
void left();
void up();
void spiral();

int main()
{
    cout << "Enter size of matrix:\t";
    cin >> N;
    
    i2=N-1;
    j2=N-1;
    count=N;

    for (int i = 0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout << endl << "Enter the element at " << i+1 << "th row and " << j+1 << "th column:\t";
            cin >> a[i][j];
        }
        cout << endl;
    }    

cout << endl << "Matrix entered by you is:\n";

    for (int i = 0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout << setw(5) << a[i][j] << setw(5);
        }
        cout << endl;
    }
    cout << endl;

    cout << "Given Matrix elements in spiral format:\n\n", spiral();
    
}

void spiral()
{
while(count>0)
    {
        right();
        down();
        left();
        up();
        count--;
    }
}

void right()
{
    for(i=i1; i<=i2; i++)
    {
        for (j=j1; j<=j2; j++)
        {
            cout << " " << a[i][j];
        }
        if (i<i2)
        {
            break;
        }
        cout << endl;
    }
    i1++;

}

void down()
{
    for (j=j2; j>=j1; j--)
    {
        for(i=i1; i<=i2; i++)
        {
            cout << " " << a[i][j];
        }
        if(j>j1)
        {
            break;
        }
    }
    j2--;

}

void left()
{
    for(i=i2; i>=i1; i--)
    {
        for(j=j2; j>=j1; j--)
        {
            cout << " " << a[i][j];
        }
        if(i>i1)
        {
            break;
        }
    }
    i2--;

}

void up()
{
    for(j=0; j<=j2; j++)
    {
        for(i=i2; i>=i1; i--)
        {
            cout << " " << a[i][j];
        }
        if(j<j2)
        {
            break;
        }
    }
    j1++;
}
