#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    
    for (int i = 1; i <= testCase; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
    }
}
