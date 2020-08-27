#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
	int n, k; scanf("%d%d", &n, &k);
	vector<string> s;
	for (int i = 0; i < n; i++) {
		string x; cin >> x;
		s.push_back(x);
	}

	vector<string> str;
	for (int i = 0; i < k; i++) {
		int l;
		cin >> l;
		for (int j = 0; j < l; j++) {
			string x;
			cin >> x;
			str.push_back(x);
		}
	}
	for (int i = 0; i < n; i++) {
		int ok = 0;
		for (int j = 0; j < str.size(); j++)
			if (s[i] == str[j]) {
				cout << "YES "; break;
			}
			else
				ok += 1;


		if (ok == str.size())
			cout << "NO ";

	}
	cout << "\n";

}


int main() {
	int _;

	for (scanf("%d", &_); _; _--)
		solve();

}