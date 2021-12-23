#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(),c.end()
#define Fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define f first
#define s second
const ll  mod = 1000000007;
using namespace std;

const int N = 200000;
bool vis[N];
vector<ll>t[N];
int dis[N];

void dfs(int x, int d)
{
	vis[x] = true;
	dis[x] = d;
	for (auto i : t[x])
	{
		if (vis[i] == false)
		{
			dfs(i, dis[x] + 1);
		}
	}
}

int main()
{
	Fast
	int n;
	cin >> n;
	for (int i = 0; i < n - 1; ++i)
	{
		int v1, v2;
		cin >> v1 >> v2;
		t[v1].push_back(v2);
		t[v2].push_back(v1);
	}
	dfs(1, 0);
	for (int i = 1; i <= n; ++i)
	{
		cout << dis[i] << ' ';
	}
	cout << "\n";
	return 0;
}
