//
// Created by ema on 8.12.24.
//

#include <iostream>
using namespace std;

// Да се пресмета збирот 1! + (1+2)! + (1+2+3)! + … + (1+2+…+n)! притоа: - користете рекурзивна функција за пресметување на збирот на првите k природни броеви.
// - користете рекурзивна функција за пресметување на факториел на еден природен број.

int factorial(int n) {
    if (n==1) {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}
int sumOfFirstN(int n) {
    if(n==1) {
        return 1;
    }
    else {
        return n+sumOfFirstN(n-1);
    }
}
int sum (int n) {
    if (n==1) {
        return 1;
    }
    else {
        return factorial((sumOfFirstN(n))) + sum(n-1);
    }
}
int main() {
    int n;
    cin >> n;
    cout << sum(n);
}