//
// Created by ema on 17.12.24.
//
#include <iostream>
using namespace std;

// Да се напишат следните функции за пребарување во низа: • Линеарно пребарување • Бинарно пребарување
// Потоа да се напише главна програма во која ќе се пополнува низа со броевите од 1 до 1 000 000,
// а потоа се генерира случаен број во овој опсег чија што позиција треба да се пронајде со повикување на двете функции за пребарување.


int linearSearch(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if(*(arr+i)==key) {
            return i;
        }
    }
    return -1;
}
int binarySearch(int *arr, int n, int key) {
    int start = 0;
    int end = n-1;
    while(start <= end) {
        int mid = (start+end)/2;
        if(*(arr+mid) == key) { //arr[mid]
            return mid;
        }
        else if(*(arr+mid) > key) {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return -1;
}

int binarySearchRecursive(int *arr, int key, int start, int end) {
    if(start > end) {
        return -1;
    }
    else {
        int mid = (start+end)/2;
        if(*(arr+mid) == key) { //arr[mid]
            return mid;
        }
        else if(*(arr+mid) > key) {
            return binarySearchRecursive(arr, key, start, mid-1);
        }
        else {
            return binarySearchRecursive(arr, key, mid+1, end);
        }
    }

}



int main() {
int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout<<binarySearch(arr, n, key);


}