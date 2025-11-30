#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int result = a + b + c + d;
        
        if (result == 3) {
            printf("%c\n", 'A');
        } if (result == 2) {
            printf("%c\n", 'B');
        } if (result == 1) {
            printf("%c\n", 'C');
        } if (result == 0) {
            printf("%c\n", 'D');
        } if (result == 4) {
            printf("%c\n", 'E');
        }
    }
}
