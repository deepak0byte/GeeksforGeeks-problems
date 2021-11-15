// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

    string longestCommonSubstrPrint (string S1, string S2, int n, int m)
    {
        int dp[n + 1][m + 1];
        memset(dp, 0, sizeof(dp));
        string s = "";
        for (int i = 1; i < n + 1; ++i)
        {
            for (int j = 1; j < m + 1; ++j)
            {
                if (S1[i - 1] == S2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
                // cout << dp[i][j] << " ";
            }
            // cout << endl;
        }
        int i = n, j = m;
        while (i > 0 && j > 0) {
            if (S1[i - 1] == S2[j - 1]) {
                s += S1[i - 1];
                i--;
                j--;
            }
            else if (dp[i][j - 1] > dp[i - 1][j]) {
                j--;
            }
            else {
                i--;
            }
        }
        reverse(s.begin(), s.end());
        return s;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstrPrint (s1, s2, n, m) << endl;
    }
}
