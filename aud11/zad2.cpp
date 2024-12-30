//
// Created by ema on 17.12.24.
//
#include <iostream>
using namespace std;


//  Замена со покажувачи (Swap with pointers)
void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int x=5, y=6;
    swap(&x, &y);
    cout << x << " " << y << endl;
}