//
// Created by ema on 21.10.24.
//
#include <iostream>
using namespace std;

// Да се напише програма што од n броеви (внесени од тастатура) ќе го определи бројот на броеви што се деливи со 3, при делењето со 3 имаат остаток 1, односно 2.

int main() {
    int n = 1, i = 0, number, div, r1, r2;
    div = r1 = r2 = 0;
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> number;
        if (number % 3 == 0)
            div++;
        else if (number % 3 == 1)
            r1++;
        else r2++;
    }
    cout << div << endl;
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}