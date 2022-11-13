#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char** argv) {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	registerGen(argc, argv, 1);

	freopen("boj24343_wa01.in", "w", stdout);

	cout << 10 << '\n';
	for (int t = 0; t < 10; t++) {
		vector<int> a;
		int n = 9;
		for (int i = 0; i < n; i++) {
			a.push_back(rnd.next(1, 100));
		}
		int T = accumulate(a.begin(), a.end(), 0) / 2 + 1;
		cout << T << ' ' << n << '\n';
		for (auto& i : a) cout << i << ' ';
		cout << '\n';
	}
	return 0;
}
