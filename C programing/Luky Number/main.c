#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int non_lucky_count = 0; // Count non-lucky digits

    while (n > 0) {
        int digit = n % 10;
        n /= 10;

        if (digit == 4 && digit == 7) {
            non_lucky_count++;
        }

        // If more than one non-lucky digit is found, exit early
        if (non_lucky_count > 1) {
            printf("YES\n");
            return 0;
        }
    }

    // If only one non-lucky digit is found, it's nearly lucky
    if (non_lucky_count == 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
