#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

using ull = unsigned long long;

int main(int argc, char** argv) {
	registerGen(argc, argv, 1);
	freopen("boj10999_tle01.in", "w", stdout);
	int n = rnd.next(990000, 1000000);
	int m = rnd.next(9000, 10000);
	int k = rnd.next(9000, 10000);
	printf("%d %d %d\n", n, m, k);
	for (int i = 0; i < n; i++) {
		printf("%lld\n", rnd.next(-(LLONG_MAX / 2), LLONG_MAX / 2));
	}
	for (int i = 0; i < m; i++) {
		int p = rnd.next(1, n);
		int q = rnd.next(p, n);
		printf("1 %d %d %lld\n", p, q, rnd.next(-(LLONG_MAX / 2), LLONG_MAX / 2));
	}
	for (int i = 0; i < k; i++) {
		int p = rnd.next(1, n);
		int q = rnd.next(p, n);
		printf("2 %d %d\n", p, q);
	}
}
