#include <iostream>
#include <algorithm> //  min

using namespace std;

void selectionsort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        int small_index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[small_index]) {
                small_index = j;
            }
        }


        temp = arr[small_index];
        arr[small_index] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n, m;
    cin >> n >> m;


    int Arr[m];

    for (int i = 0; i < m; i++) {
        cin >> Arr[i];

    }

    selectionsort(Arr, m);


    int min_difference = Arr[n - 1] - Arr[0];

    for (int i = 1; i <= m - n; i++) {
        min_difference = min(min_difference, Arr[i + n - 1] - Arr[i]);
    }

    cout << min_difference << endl;

    return 0;
}
