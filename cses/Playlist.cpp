#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i,a,n) for(int i=a;i<n;i++)
void sol() {
	int n; cin >> n;
	vector<ll> p(n);
	rep(i, 0, n)cin >> p[i];
	ll mn = 0;
	map<ll, ll>s;
	for (int i = 0, j = 0; i < n; i++) {
		while (j < n && s[p[j]] == 0)s[p[j++]]++;

		mn = max((ll)mn, (ll)j - i);
		s[p[i]]--;

	}


	cout << mn;
}

int main() {
	int _;

	// for (scanf("%d", &_); _; _--)
	sol();

}