#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i,a,n) for(int i=a;i<n;i++)
void sol() {
	int n; cin >> n;
	vector<pair<int, bool>> ar;
	rep(i, 0, n) {
		int a, b; cin >> a >> b;
		ar.push_back({a, true});
		ar.push_back({b, false});
	}
	sort(ar.begin(), ar.end());
	int cnt = 0, ans = 0;
	rep(i, 0, ar.size()) {
		ar[i].second ? cnt++ : cnt--;
		ans = max(ans, cnt);
	}
	cout << ans << '\n';

}

int main() {
	int _;

	// for (scanf("%d", &_); _; _--)
	sol();

}