//
// Created by ema on 8.12.24.
//

#include <iostream>
using namespace std;

// Да се напише програма што ќе ја испишува вредноста на n-тиот член на низата дефинирана со:
//   x[n] = (n - 1) * x[n - 1] / n + x[n - 2] / n

float xnn(int n) {
    if(n==1 || n==2) {
        return n;
    }
    else {
        return (n-1.0)/n * xnn(n-1) + 1.0/n * xnn(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << "xnn(" << n << ") = " <<  xnn(n) << endl;
    return 0;

}