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

void dfs(int x)
{
	vis[x] = true;
	for (auto i : t[x])
	{
		if (vis[i] == false)
		{
			dfs(i);
		}
	}
}

int main()
{
	Fast
	int n, e;
	cin >> n >> e;
	for (int i = 0; i < e; ++i)
	{
		int v1, v2;
		cin >> v1 >> v2;
		t[v1].push_back(v2);
		t[v2].push_back(v1);
	}
	int connected_component = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (vis[i] == false) {
			dfs(i);
			connected_component++;
		}
	}
	if (connected_component == 1 && e == n - 1) {
		cout << "Tree\n";
	}
	else {
		cout << "Graph\n";
	}
	return 0;
}
