#include <iostream>

using namespace std;

// Custom max function to return the larger of two integers
int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Calculate all possible results
    int R1 = a * b * c;
    int R2 = a + b + c;
    int R3 = (a + b) * c;
    int R4 = a * (b + c);
    int R5 = a + b * c;

    // Find the maximum of all results using the custom max function
    int Max = max(R1, R2);
    Max = max(Max, R3);
    Max = max(Max, R4);
    Max = max(Max, R5);

    cout << Max << endl;
    return 0;
}
