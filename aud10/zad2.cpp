//
// Created by ema on 8.12.24.
//

#include <iostream>
using namespace std;

// Да се напише рекурзивна функција count_down(int n) која за даден цел број n ќе овозможи печатење на броевите од n до 0.
void count_down(int n) {
    if (n == 0) {
        cout << "0" <<" ";
        return;
    }
    else {
        cout << n << " ";
        count_down(n - 1);
    }
}
// Да се напише рекурзивна функција count_up(int n) која за даден цел број n ќе овозможи печатење на броевите од 0 до n.
// (Искористете го кодот на функцијата count_down(int n) и решете ја задачата со промена на редоследот на командите).
void count_up(int n) {
    if (n == 0) {
        cout << "0" <<" ";
        return;
    }
    else {
        count_up(n-1);
        cout << n << " ";
    }
}

int main() {
    int n;
    cin >> n;
    count_down(n);
    cout<<endl;
    count_up(n);
}