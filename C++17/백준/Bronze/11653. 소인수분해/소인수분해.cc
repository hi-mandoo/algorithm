#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while(n%2==0) {
        n /= 2;
        printf("%d\n", 2);
    }
    
    for(int i = 3; i*i<=n; i+=2) {
        while (n % i == 0) {
            printf("%d\n", i);
            n /= i;
        }
    }
    
    if (n > 1) {
        printf("%d\n", n);
    }
}
