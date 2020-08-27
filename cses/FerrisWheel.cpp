#include <bits/stdc++.h>

using namespace std;
#define ll long long

void sol() {
	ll n; ll x;
	cin >> n >> x;
	vector<ll> v(n + 1);
	for (int i = 1; i <= n; i++)cin >> v[i];

	sort(v.begin(), v.end());
	ll cnt = 0;
	for (ll i = 1, j = n; i <= j;) {
		while (i <= j && v[i] + v[j] > x)j--;
		if (i >= j)break;
		cnt++, i++, j--;
	}
	cout << n - cnt;
}

int main() {
	int _;

	// for (scanf("%d", &_); _; _--)
	sol();

}