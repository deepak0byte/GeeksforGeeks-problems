//UserName: deepak0byte, Name: Deepak Kumar

#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(),c.end()
#define mem(a,val) memset(a,val,sizeof(a))
using namespace std;

int dp[1000][1000] = {0};
void topDown(int val[], int wt[], int W, int n) {
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j <= W; ++j)
		{
			if (wt[i - 1] <= j) {
				dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]],
				               dp[i - 1][j]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	cout << dp[n][W] << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int W = 10;
	int n = 4;
	int val[4] = {2, 3, 4, 5};
	int wt[4] = {2, 3, 1, 3};
	topDown(val, wt, W, n);

	return 0;
}