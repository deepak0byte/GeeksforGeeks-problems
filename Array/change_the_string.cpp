// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:

    string modify (string s)
    {
        if (s[0]>='A'&&s[0]<='Z') {
            transform(s.begin(), s.end(), s.begin(), ::toupper); 
        }
        else
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower); 
        }
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.modify (s) << endl;
    }
}