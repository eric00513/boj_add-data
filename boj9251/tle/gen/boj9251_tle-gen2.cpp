#include <iostream>
using namespace std;
int main() {
    string s(497 * 2);
    for (int i = 0; i < 497 * 2; i += 2) s[i] = 'T', s[i + 1] = 'R'; 
    cout << s << '\n' << s << '\n';
}
