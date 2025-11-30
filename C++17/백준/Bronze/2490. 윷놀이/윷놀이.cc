#include <iostream>
using namespace std;

int main() {
    char output[] = {'D', 'C', 'B', 'A', 'E'};
    
    for (int i = 0; i < 3; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%c\n", output[a + b + c + d]);
    }
}
