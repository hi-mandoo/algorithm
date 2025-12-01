#include <iostream>
#include <utility>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        swap(a, b);
    }
    
    if (a == b) {
        cout << 0;
    } else {
        printf("%d\n", b - a - 1);
        for (int i = a + 1; i< b; i++) {
            printf("%d ", i);
        }
    }
}
