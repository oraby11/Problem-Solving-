#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int counter = 0;
    cin >> s; // Ignore leading whitespace
    getline(cin, s); // Read the entire line
    int flag = 0;

    for (int i = 0; i < s.length(); i++) {
        char currentChar = tolower(s[i]); // Convert to lowercase for uniform comparison

        if (currentChar == 'h' && flag == 0) {
            counter++;
            flag = 1; // Move to the next character in "hello"
        }
        else if (currentChar == 'e' && flag == 1) {
            counter++;
            flag = 2; // Move to the next character in "hello"
        }
        else if (currentChar == 'l' && (flag == 2 || flag == 3)) {
            counter++;
            flag++;
        }
        else if (currentChar == 'o' && flag == 4) {
            counter++;
            break; // We found all characters in "hello"
        }
    }

    if (counter == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
