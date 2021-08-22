#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	string removeDups(string S)
	{
		// Your code goes here
		string s;
		for (int i = 0; i < S.length(); ++i)
		{
			char ch = S[i];
			auto found = s.find(ch);
			if (found == std::string::npos)
			{
				s += ch;
			}
		}
		return s;
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;

		Solution ob;
		cout << ob.removeDups(s) << "\n";
	}
	return 0;
}