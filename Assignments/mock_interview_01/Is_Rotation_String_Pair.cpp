#include <bits/stdc++.h>
using namespace std;
 
bool chkStr(string& str1, string& str2, int indexFound, int Size)
{
    for (int i = 0; i < Size; i++) 
    {
        if (str1[i] != str2[(indexFound + i) % Size])
        {
            return false;
        }           
    }
    return true;
}
 
int main()
{
    string str1 = "ABCD";
    string str2 = "CDAB";

    // string str1 = "ABCD";
    // string str2 = "ACBD";
 
    if (str1.length() != str2.length()) 
    {
        cout << "string_1 is not a rotation on string_2" << endl;
    }
    else 
    {
        vector<int> indexes;
 
        int Size = str1.length();
 
        char firstChar = str1[0];
 
        for (int i = 0; i < Size; i++) 
        {
            if (str2[i] == firstChar) 
            {
                indexes.push_back(i);
            }
        }
 
        bool isRotation = false;

        for (int i : indexes) 
        {
            isRotation = chkStr(str1, str2, i, Size);
            if (isRotation)
            {
                break;
            }
        }
 
        if (isRotation)
        {
            cout << "TRUE : The given strings are rotations of each other" << endl;
        }            
        else
        {
            cout << "FALSE : The given strings are NOT rotations of each other" << endl;
        }
            
    }
    return 0;
}