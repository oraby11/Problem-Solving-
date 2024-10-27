#include <iostream>

using namespace std;

int main() {
    int w, n, k;
    int sum = 0;

    // Input: cost of one banana (k), amount of money (n), and number of bananas to buy (w)
    cin >> k >> n >> w;

    // Calculate the total cost of bananas
    for (int i = 1; i <= w; i++) {
        sum += i * k; // Each banana costs increasing amounts: k, 2k, 3k, ..., wk
    }

    // Calculate the amount needed to borrow
    sum -= n;

    // If the result is negative, it means no borrowing is needed
    cout << (sum > 0 ? sum : 0) << endl;

    return 0;
}
