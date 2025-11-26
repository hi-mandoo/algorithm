#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int testCase;
    scanf("%d", &testCase);
    
    for (int i = 0; i < testCase; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}
