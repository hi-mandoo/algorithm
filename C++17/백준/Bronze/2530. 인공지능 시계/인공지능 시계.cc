#include <iostream>
using namespace std;

int main() {
    int hour, minute, second, taken;
    
    cin >> hour >> minute >> second >> taken;
    
    second += taken;
    
    if (second >= 60) {
        minute += second / 60;
        second %= 60;
    }
    
    if (minute >= 60) {
        hour += minute / 60;
        minute %= 60;
    }
    
    if (hour >= 24) {
        hour %= 24;
    }
    
    printf("%d %d %d", hour, minute, second);
}
