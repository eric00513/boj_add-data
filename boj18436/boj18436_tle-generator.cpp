#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int odd() {
	return rnd.next(1, 500'000'000 - 1) * 2 + 1;
}
int even() {
	return rnd.next(1, 500'000'000) * 2;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	freopen("boj18436_tle01.in", "w", stdout);
	int n = 100'000;
	cout << n << '\n';
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		if (i % 2) {
			cout << odd() << ' ';
			v.emplace_back(i + 1, even());
		}
		else {
			cout << even() << ' ';
			v.emplace_back(i + 1, odd());
		}
	}
	cout << '\n';
	shuffle(v.begin(), v.end());
	v.pop_back();

	int m = 100'000;
	cout << m << '\n';
	for (auto& [i, j] : v) {
		cout << 1 << ' ' << i << ' ' << j << '\n';
	}
	cout << 3 << ' ' << rnd.next(1, n / 4) << ' ' << rnd.next(n / 4 * 3, n) << '\n';
	return 0;
}
