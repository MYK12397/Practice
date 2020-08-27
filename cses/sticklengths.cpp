#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i,a,n) for(int i=a;i<n;i++)
void sol() {
	int n; cin >> n;
	vector<ll> p(n);
	rep(i, 0, n)cin >> p[i];
	sort(p.begin(), p.end());
	ll cst = 0;
	rep(i, 0, n) {
		cst += abs(p[n / 2] - p[i]);
	}
	cout << cst;
}

int main() {
	int _;

	// for (scanf("%d", &_); _; _--)
	sol();

}