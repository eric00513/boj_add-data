#include "testlib.h"
using namespace std;

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, 1000000); inf.readSpace();
    int m = inf.readInt(1, 10000); inf.readSpace();
    int k = inf.readInt(1, 10000); inf.readEoln();
    for (int i = 0; i < n; i++) {
        long long a = inf.readLong(LLONG_MIN, LLONG_MAX); inf.readEoln();
    }
    int cm = 0, ck = 0;
    for (int i = 0; i < m + k; i++) {
        int a = inf.readInt(1, 2); inf.readSpace();
        int b = inf.readInt(1, n); inf.readSpace();
        int c = inf.readInt(b, n);
        if (a == 1) {
            inf.readSpace();
            long long c = inf.readLong(LLONG_MIN, LLONG_MAX);
            cm++;
        }
        else {
            ck++;
        }
        inf.readEoln();
    }
    inf.readEof();
    ensuref(cm == m && ck == k, "wrong query num");
}
