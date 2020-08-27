#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
	int m;  scanf("%d", &m);
	int a[m];
	set<int> s;
	int cnt = 0;
	for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < m; i++)
	{	if (s.find(a[i]) == s.end())
		{	s.insert(a[i]);
			cnt++;
		}
	}

	cout << cnt << '\n';

}


int main() {
	int _;

	// for (scanf("%d", &_); _; _--)
	solve();

}