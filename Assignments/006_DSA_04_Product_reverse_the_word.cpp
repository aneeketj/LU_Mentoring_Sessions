// Write a Program to Reverse Words in String.
// Given a string `s`, reverse the order of words. 
// A word is a sequence of non-space characters. Words in the string `s` will have one space between them. There are no leading or trailing spaces.
// Example:
// **s**: `“Lets learn at Letsupgrade”`
// **Reversed** **s**: `“Letsupgrade at learn Lets”`
// ## Test case →

// 1.  Input: `i am solving this problem` Output: `problem this solving am i`
// 2.  Input: `good morning everyone` Output: `everyone morning good`
// 3.  Input: `algorithm` Output: `algorithm`

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
	vector<string> tmp;
	string str = "";
	for (int i = 0; i < s.length(); i++)
	{

		if (s[i] == ' ')
		{
			tmp.push_back(str);
			str = "";
		}

		else
			str += s[i];
	}

	tmp.push_back(str);

	int i;
	for (i = tmp.size() - 1; i > 0; i--)
		cout << tmp[i] << " ";

	cout << tmp[0] << endl;
}

int main()
{
	string s = "Lets learn at Letsupgrade";
	reverse(s);
	return 0;
}