#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
	int m, x, y; scanf("%d%d%d", &m, &x, &y);
	int a[m];
	for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);

	sort(a, a + m);
	int id = 1, cnt = 0;

	for (int i = 0; i < m; i++) {
		if (a[i] - x * y > id)
			cnt += a[i] - (x * y) - id;

		id = a[i] + (x * y) + 1;
	}
	if (id <= 100)
		cnt += 100 - id + 1;

	cout << cnt << '\n';
}


int main() {
	int _;

	for (scanf("%d", &_); _; _--)
		solve();

}