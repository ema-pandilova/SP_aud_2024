//
// Created by ema on 17.12.24.
//
#include <iostream>
using namespace std;

// Да се напишат фунција за сортирање на низа со помош на методот за сортирање - Метод на меурче (Bubble sort)
// Да се напишат функции за внесување и печатење на елементите на една низа и да се напише главна програма во која се тестира методот


void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j +1)) {
                swap(arr + j + 1, arr + j);
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; //cin>>*(arr+i)
    }
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


}