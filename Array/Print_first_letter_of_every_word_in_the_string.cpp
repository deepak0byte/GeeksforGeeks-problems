#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	string firstAlphabet(string S)
	{
		string x;
		for (int i = 0; i < S.length(); ++i)
		{
			if (S[i - 1] == ' ' || i == 0)
			{
				x += S[i];
			}
		}
		return x;
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	string tc;
	getline(cin, tc);
	t = stoi(tc);
	while (t--)
	{
		string s;
		getline(cin, s);

		Solution ob;
		cout << ob.firstAlphabet(s) << "\n";
	}

	return 0;
}