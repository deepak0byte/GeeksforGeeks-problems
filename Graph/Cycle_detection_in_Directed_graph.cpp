#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(),c.end()
#define Fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define f first
#define s second
const ll  mod = 1000000007;
using namespace std;

const int N = 200000;
int vis[N];
vector<ll>t[N];

bool dfs(int x)
{
	vis[x] = 1;
	for (auto i : t[x])
	{
		if (vis[i] == 0)
		{
			if (dfs(i) == true)return true;
		}
		else if (vis[i] == 1) return true;
	}
	vis[x] = 2;
	return false;
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
	}
	for (int i = 1; i <= n; ++i)
	{
		if (vis[i] == 0){
			cout << dfs(1);
		}
	}
	return 0;
}
