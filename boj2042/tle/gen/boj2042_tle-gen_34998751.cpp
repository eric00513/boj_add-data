#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

using ll = long long;

int main(int argc, char** argv) {
	registerGen(argc, argv, 1);
	freopen("boj2042_tle05.in", "w", stdout);
	freopen("boj2042_tle05.out", "w", stdout);
	int n = 1000000;
	int m = 10000;
	int k = 10000;
	printf("%d %d %d\n", n, m, k);
	for (int i = 0; i < n; i++) {
		printf("%lld\n", rnd.next((ll)-9e13, (ll)9e13));
	}
	for (int i = 0; i < m; i++) {
		printf("1 %d %lld\n", 1, rnd.next((ll)-9e13, (ll)9e13));
	}
	for (int i = 0; i < k; i++) {
		printf("2 %d %d\n", rnd.next(1, n / 4), rnd.next(n / 4 * 2, n));
	}
}
