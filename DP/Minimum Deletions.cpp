// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumNumberOfDeletions(string s) {
        string s1 = s;
        reverse(s1.begin(), s1.end());
        int n = s.length();
        int dp[n + 1][n + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (s[i - 1] == s1[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return s.length() - dp[n][n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}  // } Driver Code Ends
