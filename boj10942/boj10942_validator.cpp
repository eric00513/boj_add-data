#include "testlib.h"
using namespace std;

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, 2'000); inf.readEoln();
    for (int i = 0; i < n; i++) {
        inf.readInt(1, 100'000);
        if (i < n - 1) inf.readSpace();
    }
    inf.readEoln();
    int m = inf.readInt(1, 1'000'000); inf.readEoln();
    while (m--) {
        int s = inf.readInt(1, n); inf.readSpace();
        int e = inf.readInt(s, n); inf.readEoln();
    }
    inf.readEof();
}
