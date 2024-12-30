//
// Created by ema on 21.10.24.
//
#include <iostream>
using namespace std;

int main() {
int sum = 0;
    int i;
    for(i = 10; i<=98; i+=2) {
        sum += i;
    }
    cout << sum << endl;

sum =0;
    for ( i = 11; i<=99; i+=2) {
        sum += i;
        if ( i == 99 ) {
            cout<<i;
        }else {
            cout<< i << " + ";
        }
    }
    cout<<" = "<< sum<<endl;
}