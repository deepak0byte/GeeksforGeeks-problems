#include <bits/stdc++.h>
using namespace std;
class Solution {

public:
	int minDifference(int arr[], int n)  {
		int sum = 0;
		for (int i = 0; i < n; i++)sum += arr[i];
		bool dp[n + 1][sum + 1];
		for (int i = 0; i < n + 1; i++) {
			for (int j = 0; j < sum + 1; j++) {
				if (i == 0)dp[i][j] = false;
				if (j == 0)dp[i][j] = true;
			}
		}
		for (int i = 1; i < n + 1; i++) {
			for (int j = 1; j < sum + 1; j++) {
				if (arr[i - 1] <= j) {
					dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
				}
				else {
					dp[i][j] = dp[i - 1][j];
				}
			}
		}
		int mini = INT_MAX;
		for (int i = 0; i < sum + 1; i++) {
			if (dp[n][i] == true)
				mini = min(mini, abs(sum - 2 * i));
		}
		return mini;
	}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		Solution ob;
		cout << ob.minDifference(a, n) << "\n";

	}
	return 0;
}