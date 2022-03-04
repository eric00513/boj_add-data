#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

using ull = unsigned long long;

int main(int argc, char **argv) {
	registerGen(argc, argv, 1);
	freopen("boj2042_tle03.in", "w", stdout);
	int n = rnd.next(990000, 1000000);
	int m = rnd.next(9800, 10000);
	int k = rnd.next(9800, 10000);
	printf("%d %d %d\n", n, m, k);
	for (int i = 0; i < n; i++) {
		printf("%lld\n", rnd.next(-(LLONG_MAX / 2), LLONG_MAX / 2));
	}
	for (int i = 0; i < m; i++) {
		printf("1 %d %lld\n", rnd.next(1, n), rnd.next(-(LLONG_MAX / 2), LLONG_MAX / 2));
	}
	for (int i = 0; i < k; i++) {
		printf("2 %d %d\n", rnd.next(1, n / 5), rnd.next(n - 1000, n));
	}
}
