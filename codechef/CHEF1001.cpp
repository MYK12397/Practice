#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
	int n, m; cin >> m;
	cin >> n;
	int cost[n];
	for (int i = 0; i < n; i++)cin >> cost[i];
	int a, b;
	m -= cost[0];
	for (int i = 1; i < n; i++) {



		if (m - cost[i] == 0) {
			cout << 1 << ' ' << i + 1 << '\n';
			break;
		}
	}


}


int main() {
	int _;

	for (scanf("%d", &_); _; _--)
		solve();

}