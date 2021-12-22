#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(),c.end()
#define f first
#define s second
const ll  mod = 1000000007;
using namespace std;
const int N = 200000;
int vis[N] = {false};
vector<ll>graph[N];
vector<ll>ans;

void dfs(int x)
{
	vis[x] = true;

	for (auto i : graph[x])
	{
		if (vis[i] == false)
		{
			dfs(i);
		}
	}
}

int main()
{
	int n, e;
	cin >> n >> e;
	for (int i = 0; i < e; ++i)
	{
		int v1, v2;
		cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	int ct = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (vis[i] == false) {
			dfs(i);
			ans.push_back(i);
			ct++;
		}
	}
	cout << ct << endl;
	// cout << ans.size() << endl;
	// for (int i = 0; i < ans.size(); ++i)
	// {
	// 	cout << ans[i] << ' ';
	// }
	// cout << endl;
	return 0;
}
