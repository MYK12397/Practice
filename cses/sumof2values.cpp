#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i,a,n) for(int i=a;i<n;i++)
void sol() {
	ll n, x; cin >> n >> x;
	vector<pair<ll, ll>> ar;
	rep(i, 0, n) {
		ll a;
		cin >> a;
		ar.push_back(make_pair(a, i + 1));

	}
	sort(ar.begin(), ar.end());

	int i = 0, j = ar.size() - 1;
	while (i < j) {
		if (ar[i].first + ar[j].first == x) {
			cout << ar[i].second << ' ' << ar[j].second ;
			break;
		}
		else if (ar[i].first + ar[j].first > x)
			j--;
		else
			i++;
	}
	if (i >= j)
		cout << "IMPOSSIBLE";


}

int main() {
	int _;

	// for (scanf("%d", &_); _; _--)
	sol();

}