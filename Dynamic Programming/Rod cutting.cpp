#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int cutRod(int price[], int n) {
        //code here
        int dp[n + 1][n + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if (i <= j) {
                    dp[i][j] = max(dp[i - 1][j], price[i - 1] + dp[i][j - i]);
                }
                else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][n];
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends
