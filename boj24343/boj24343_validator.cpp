#include "testlib.h"
using namespace std;

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    
    int t = inf.readInt(1, 10); inf.readEoln();
    while (t--) {
        int T = inf.readInt(1, 200'000); inf.readSpace();
        int n = inf.readInt(1, 1'000); inf.readEoln();
        for (int i = 0; i < n; i++) {
            inf.readInt(1, 100);
            if (i < n - 1) inf.readSpace();
            else inf.readEoln();
        }
    }
    inf.readEof();
}
