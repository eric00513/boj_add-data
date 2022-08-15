#include "testlib.h"
using namespace std;

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(); inf.readEoln();
    for (int i = 0; i < n; i++) {
        inf.readInt(); inf.readEoln();
    }
    inf.readEof();
}
