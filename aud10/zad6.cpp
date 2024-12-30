//
// Created by ema on 8.12.24.
//

#include <iostream>
using namespace std;


// За даден број n, да се напише рекурзивна функција која ќе ги изброи појавувањата на цифрата 8.
// Притоа, доколку до некоја цифра 8 има уште една цифра 8 веднаш лево од неа, нејзиното појавување се брои двојно.
int countEight(int n) {
    if (n==0) return 0;
    else {
        int lastDigit1 = n%10;
        int lastDigit2 = n/10%10;
        if (lastDigit1 == 8) {
            if(lastDigit2 == 8) {
                return 2 + countEight(n/10);
            }
            else {
                return 1 + countEight(n/10);
            }
        }
        else {
            return 0 + countEight(n/10);

        }
    }
}

int main() {
    int n;
    cin >> n;
    cout << countEight(n);
}