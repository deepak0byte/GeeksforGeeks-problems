#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(),c.end()
#define Fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define f first
#define s second
const ll  mod = 1000000007;
using namespace std;

const int N = 10001;
bool vis[N];
vector<int>t[N];
int length = -1;
int endNode;

void dfs(int x, int d)
{
	vis[x] = true;
	if (d > length) {
		length = d;
		endNode = x;
	}
	for (auto i : t[x])
	{
		if (vis[i] == false)
		{
			dfs(i, d + 1);
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
	length = -1;
	dfs(1, 0);
	for (int i = 1; i <= n; ++i)
	{
		vis[i] = false;
	}
	// cout << length << " ";
	length = -1;
	dfs(endNode, 0);
	cout << length;
	return 0;
}
