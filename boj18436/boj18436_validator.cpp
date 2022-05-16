#include "testlib.h"
using namespace std;

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, 100'000); inf.readEoln();
    for (int i = 0; i < n; i++) {
        inf.readInt(1, 1'000'000'000);
        if (i < n - 1) inf.readSpace();
        else inf.readEoln();
    }
    int m = inf.readInt(1, 100'000); inf.readEoln();
    for (int i = 0; i < m; i++) {
        int a = inf.readInt(1, 3); inf.readSpace();
        int b = inf.readInt(1, n); inf.readSpace();
        if (a == 1) inf.readInt(1, 1'000'000'000);
        else inf.readInt(b, n);
        inf.readEoln();
    }
    inf.readEof();
}
