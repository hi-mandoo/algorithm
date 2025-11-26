#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    
    for (int i = 0; i < testCase; i++) {
        int a, b;
        cin >> a >> b;
        printf("%d\n", a + b);
    }
}
