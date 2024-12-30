//
// Created by ema on 5.11.24.
//

#include <iostream>
using namespace std;

// Да се пресмета збирот: 1! + (1 + 2)! + (1 + 2 + 3)! + …​ + (1 + 2 + …​ + n)!


int sumOfFirstNNumbers(int n) {
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum+=i;
    }
    return sum;
}

int faktoriel(int n) {
    int proizvod =1;
    for (int i=n; i>0; i--) {
        proizvod*=i;
    }
    return proizvod;
}
int calculateForEachNumber(int n) {
    return faktoriel(sumOfFirstNNumbers(n));
}
int main() {
    int n;
    cin>>n;
    int zbir=0;
    for(int i=1; i<=n; i++) {
        zbir+=calculateForEachNumber(i);
    }

    cout<<zbir;
}