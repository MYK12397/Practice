#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
	int n; scanf("%d", &n);
	int a[n]; int s = 0;
	for (int i = 0; i < n; i++) {scanf("%d", &a[i]); s += a[i];}

	sort(a, a + n);
	cout << (s - (n * a[0])) << '\n';

}

int main() {
	int _;

	for (scanf("%d", &_); _; _--)
		solve();

}