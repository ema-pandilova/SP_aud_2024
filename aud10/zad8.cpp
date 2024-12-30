//
// Created by ema on 8.12.24.
//


#include <iostream>
using namespace std;


int linearSearch(int array[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (*(array+i)==key) {
            return i;
        }
    }
    return -1;
}
int binarySearch(int array[], int n, int key) {
    int start = 0;
    int end =n-1;

    while (start <= end) {
        int mid = (start+end)/2;
        if (*(array+mid) == key) {
            return mid;
        }
        else if (*(array+mid) < key) {
            start = mid +1;

        } else {
            end = mid - 1;
        }

    }
    return -1;
}

int main() {

}