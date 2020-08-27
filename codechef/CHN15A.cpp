#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
	int n, k, cnt = 0;
	scanf("%d%d", &n, &k);
	int a[n];

	for (int i = 0; i < n; i++)
	{	scanf("%d", &a[i]);
		a[i] += k;
		if (a[i] % 7 == 0)
			cnt++;
	}
	cout << cnt << '\n';
}


int main() {
	int _;

	for (scanf("%d", &_); _; _--)
		solve();

}