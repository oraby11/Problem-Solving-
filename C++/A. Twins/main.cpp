#include <iostream>
using namespace std;

void selectionSortDesc(int arr[], int n) {
    int i, j, maxIndex, temp;
    for (i = 0; i < n - 1; i++) {
        maxIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {

                maxIndex = j;
            }
        }
        temp = arr[maxIndex];
        arr[maxIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n, arr[1000], totalSum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        totalSum += arr[i];
    }


    selectionSortDesc(arr, n);

    int takenSum = 0, counter = 0;

    for (int i = 0; i < n; i++) {
        takenSum += arr[i];
        counter++;

        if (takenSum > totalSum / 2) {
            break;
        }
    }

    cout << counter << endl;
    return 0;
}
