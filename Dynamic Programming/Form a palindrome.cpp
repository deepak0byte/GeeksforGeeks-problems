#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMin(string str) {
        //complete the function here
        int n = str.length();
        string s = str;
        reverse(s.begin(), s.end());
        int dp[n + 1][n + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i < n + 1; ++i)
        {
            for (int j = 1; j < n + 1; ++j)
            {
                if (str[i - 1] == s[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return str.length() - dp[n][n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
    return 0;
}
