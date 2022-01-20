#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(),c.end()
#define Fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define f first
#define s second
#define sd(x) scanf("%d", &x)
#define ss(x) scanf("%s", &x)
#define sl(x) scanf("%lld", &x)
#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%lld", x)
const ll  mod = 1000000007;
using namespace std;

vector<int>t[10001];
int vis[10001], dis[10001];

void bfs(int node) {
	queue<int>q;
	q.push(node);
	vis[node] = 1;
	dis[node] = 0;
	while (!q.empty()) {
		int curr_node = q.front();
		q.pop();
		for (auto child : t[curr_node]) {
			if (vis[child] == 0) {
				q.push(child);
				dis[child]  = dis[curr_node] + 1;
				vis[child] = 1;
			}
		}
	}
}

int main()
{
	Fast
	ll tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			t[i].clear();
			vis[i] = 0;
		}
		for (int i = 0; i < m; ++i)
		{
			int v1, v2;
			cin >> v1 >> v2;
			t[v1].push_back(v2);
			t[v2].push_back(v1);
		}
		bfs(1);
		cout << dis[n] << endl;
	}
	return 0;
}
