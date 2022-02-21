#include <iostream>
using namespace std;
int main() {
    string s(500 * 2, '.');
    for (int i = 0; i < 500 * 2; i += 2) s[i] = 'H', s[i + 1] = 'I'; 
    cout << s << '\n';
    reverse(s.begin(), s.end());
    cout << s << '\n';
}
