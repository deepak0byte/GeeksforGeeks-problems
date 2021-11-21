//UserName: deepak0byte, Name: Deepak Kumar

#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(),c.end()
#define mem(a,val) memset(a,val,sizeof(a))
using namespace std;

int dp[1000][1000];
int knapsack(int val[], int wt[], int W, int n) {
	if (n == 0 || W == 0)return 0;
	mem(dp, -1);
	if (wt[n - 1] <= W) {
		if (dp[n][W] != -1) {
			return dp[n][W];
		}
		else {
			return dp[n][W] = max(val[n - 1] + knapsack(val, wt, W - wt[n - 1], n - 1),
			                      knapsack(val, wt, W, n - 1));
		}
	}
	else {
		if (dp[n][W] != -1) {
			return dp[n][W];
		}
		else {
			return dp[n][W] = knapsack(val, wt, W, n - 1);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//ll t;
	//cin>>t;
	//while(t--)
	int v[4] = {2, 3, 4, 5};
	int w[4] = {2, 3, 1, 3};
	int W = 6;
	cout << knapsack(v, w, W, 4) << endl;

	return 0;
}