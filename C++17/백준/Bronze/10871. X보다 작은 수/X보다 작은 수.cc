#include <iostream>
using namespace std;

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;

        if (input < x) {
            if (count == 0) {
                count++;
                printf("%d", input);
            } else {
                printf(" %d", input);
            }
        }
    }
}