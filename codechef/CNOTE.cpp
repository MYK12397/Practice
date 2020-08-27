#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
	int x, y, k, n;
	cin >> x >> y >> k >> n;
	int p, c;
	bool ok = 0;
	for (int i = 0; i < n; i++) {
		cin >> p >> c;
		if ((x - y) <= p && k >= c)
			ok = 1;
	}

	if (ok)
		cout << "LuckChef\n";
	else
		cout << "UnluckyChef\n";



}

int main() {
	int _;

	for (scanf("%d", &_); _; _--)
		solve();

}