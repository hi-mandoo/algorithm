#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    
    for (int i = 1; i <= testCase; i++) {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << "\n";
    }
}
