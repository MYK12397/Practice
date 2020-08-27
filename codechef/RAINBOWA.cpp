#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
	int n; scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)cin >> a[i];

	int l = 0, h = n - 1, pre = 0;
	while (l <= h) {
		if (a[l] <= 7 && a[h] <= 7 && a[l] == a[h] && (pre == a[l] || pre == a[l] - 1)) {
			pre = a[l];
			l++;
			h--;
		}
		else {
			cout << "no\n"; return;
		}
	}


	if (pre == 7)cout << "yes\n";
	else
		cout << "no\n";
}


int main() {
	int _;

	for (scanf("%d", &_); _; _--)
		solve();

}