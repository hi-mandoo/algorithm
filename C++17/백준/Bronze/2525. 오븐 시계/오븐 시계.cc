#include <iostream>
using namespace std;

int main() {
    int hour, minute, taken;
    
    cin >> hour >> minute >> taken;
    
    minute += taken;
    if (minute >= 60) {
        hour += minute / 60;
        minute %= 60;
    }
    
    if (hour >= 24) {
        hour -= 24;
    }
    
    printf("%d %d", hour, minute);
}
