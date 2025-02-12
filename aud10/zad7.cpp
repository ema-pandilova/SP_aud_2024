//
// Created by ema on 8.12.24.
//


#include <iostream>
using namespace std;


void findMinAndMax(const int arr[], int size, int *min, int *max) {
    *min = arr[0];
    // *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int array[100];
    int i,n;
    cin>>n;
    int min = 0, max = 0;
    for(i=0; i<n; i++) {
        cin >> array[i];
    }

    findMinAndMax(array, n, &min, &max);

    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
    return 0;
}