// Write a Program to rotate a given matrix 90 degrees clockwise.

// ## Test case →

// 1 2 3
// 4 5 6
// 7 8 9

// Output: 

// 7 4 1
// 8 5 2
// 9 6 3


#include <iostream>
using namespace std;
  

void rotation(int a[3][3])
{
     for (int i = 0; i < 3 / 2; i++) {
        for (int j = i; j < 3 - i - 1; j++) 
        { 
            int temp = a[i][j];
            a[i][j] = a[3 - 1 - j][i];
            a[3 - 1 - j][i] = a[3 - 1 - i][3 - 1 - j];
            a[3 - 1 - i][3 - 1 - j] = a[j][3 - 1 - i];
            a[j][3 - 1 - i] = temp;
        }
    }
}
 
void after_rotation(int mat[3][3])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << mat[i][j] << " ";
        cout << '\n';
    }
}

int main()
{
    int mat[3][3] = { { 1, 2, 3},
                      { 4, 5, 6},
                      { 7, 8, 9},};
    rotation(mat);
    after_rotation(mat);
    return 0;
}