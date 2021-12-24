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
bool col[N];

bool dfs(int x, bool c)
{
	vis[x] = true;
	col[x] = c;
	for (auto i : t[x])
	{
		if (vis[i] == false)
		{
			if (dfs(i, !c) == false) return false;
		}
		else {
			if (col[i] == col[x]) return false;
		}
	}
	return true;
}

int main()
{
	Fast
	int n,e;
	cin >> n>>e;
	for (int i = 0; i < e; ++i)
	{
		int v1, v2;
		cin >> v1 >> v2;
		t[v1].push_back(v2);
		t[v2].push_back(v1);
	}
	cout << dfs(1, 0) << endl;
	return 0;
}
