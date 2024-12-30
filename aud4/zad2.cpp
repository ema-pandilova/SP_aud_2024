//
// Created by ema on 21.10.24.
//
#include <iostream>
using namespace std;

// Да се напише програма за пресметување на \$y = x^n\\$ за даден природен број n, n >= 1 и реален број x.
int main() {
    int n;
    float x;
    cin >> x >> n;
    float p = 1;
    int temp = n;
    while (n>0) {
        p *= x;
        n--;
    }
    cout << x << "^" <<temp<<" = "<< p << endl;
}