// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool sequencePatternMatching(string str, string s) {
		// Code here
		int n = str.length();
		int m = s.length();
		int dp[n + 1][m + 1];
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i < n + 1; ++i)
		{
			for (int j = 1; j < m + 1; ++j)
			{
				if (str[i - 1] == s[j - 1]) {
					dp[i][j] = 1 + dp[i - 1][j - 1];
				}
				else {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		if (dp[n][m] == n) return true;
		return false;
	}
};

// { Driver Code Starts.
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string str, s;
		cin >> str >> s;
		Solution obj;
		int ans = obj.sequencePatternMatching(str, s);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends