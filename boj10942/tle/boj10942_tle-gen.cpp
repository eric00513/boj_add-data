#include "testlib.h"
using namespace std;

int main(int argc, char** argv) {
	registerGen(argc, argv, 1);
	freopen("boj10942_tle01.in", "w", stdout);
	int n = 2'000;
	cout << n << '\n';
	for (int i = 0; i < n; i++) {
		cout << rnd.next(1, 100'000) << ' ';
	}
	cout << '\n';

	int m = 1'000'000;
	cout << m << '\n';
	vector<pair<int, int>> v;
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 1; j + i <= n; j++) {
			if (v.size() == m) continue;
			v.emplace_back(j, j + i);
		}
	}
	shuffle(v.begin(), v.end());
	for (auto& [s, e] : v) {
		cout << s << ' ' << e << '\n';
	}
}
