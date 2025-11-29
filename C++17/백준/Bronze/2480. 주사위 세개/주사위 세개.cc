#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a == b && a == c) {
        printf("%d", 10000 + a * 1000);
    } else if (a == b) {
        printf("%d", 1000 + a * 100);
    } else if (c == b) {
        printf("%d", 1000 + b * 100);
    } else if (a == c) {
        printf("%d", 1000 + a * 100);
    } else {
        if (a > b) swap(a, b);
        if (b > c) swap(b, c);
        if (a > b) swap(a, b);
        
        printf("%d", c * 100);
    }
}