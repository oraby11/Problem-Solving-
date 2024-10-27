#include <iostream>
using namespace std;

// Function to check if a number is lucky (contains only digits 4 and 7)
bool is_lucky_number(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false; // If any digit is not 4 or 7, it's not lucky
        }
        num /= 10;
    }
    return true; // All digits are either 4 or 7
}

int main() {
    int n;
    cin >> n;

    // Check if the number itself is lucky
    if (is_lucky_number(n)) {
        cout << "YES" << endl;
        return 0;
    }

    // List of lucky numbers less than or equal to 1000
    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    // Check if n is divisible by any lucky number
    for (int lucky : lucky_numbers) {
        if (n % lucky == 0) {
            cout << "YES" << endl;
            return 0; // If divisible, print "YES" and exit
        }
    }

    // If no lucky number divides n, print "NO"
    cout << "NO" << endl;
    return 0;
}
