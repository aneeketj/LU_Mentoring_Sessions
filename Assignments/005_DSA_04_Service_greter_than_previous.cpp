// Given an integer array A of size N. Find the count of elements whose value is greater than all of its prior elements.
// Note: 1st element of the array should be considered in the count of the result.
// Example: A[ ]={7, 4, 8, 2, 9}
// As 7 is the first element, it will consider in the result.
// 8 and 9 are also the elements that are greater than all of its previous elements.
// Since total of  3 elements is present in the array that meets the condition.
// Hence the output = 3.
// Constraints:  1<=N<=20 ,  1<=A[  ]<=10000
// ## Test case →
// 1.  Input: N=5, A [ ] ={7,4,8,2,9} ; Output: 3
// 2.  Input: N=5, A [ ] ={3,54,5,8,9} ; Output: 5
// 3.   Input: N=5, A [ ] ={13,2,15,8,19} ; Output: 4


#include <iostream>
using namespace std;

int counter(int [], int);

int main()
{
	int i, count, n;
  int a[] = { 1,2,15,8,19 };
  n = sizeof(a) / sizeof(int);
	
	count = counter(a,n);
	cout << endl << "The answer for given problem is:\t" << count;

return 0;
}


int counter (int a[], int n)
{
	int i, max, count=1;
	max = a[0];
	for (i=1;i<n;i++)
	{
		if(a[i] > max)
		{
			count++;
			max = a[i];
		}
	}
	return count;
}