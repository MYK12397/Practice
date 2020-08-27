#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
	int n; ll c;
	cin >> n >> c;
	int a[n];
	for (int i = 0; i < n; i++)cin >> a[i];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= c) {
			c -= a[i];
			cnt++;
		}
	}
	if (cnt == n)
		cout << "Yes\n";
	else
		cout << "No\n";


}

int main() {
	int _;

	for (scanf("%d", &_); _; _--)
		solve();

}