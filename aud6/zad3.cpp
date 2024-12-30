//
// Created by ema on 5.11.24.
//

#include <iostream>
using namespace std;

// Да се напише програма која што ќе ги отпечати сите четирицифрени природни броеви кои се деливи со збирот на двата броја составени од првите две цифри
// и од последните две цифри на четирицифрениот број. На крајот треба да отпечати и колку вакви броеви се пронајдени.


int zbirDvaBroja(int number) {
    int broj1=number/100;
    int broj2=number%100;
    if(number % (broj1+broj2)==0) {
        return 1;
    }
    return 0;
}

int main() {
    int i;
    int count=0;
    for(i=1000; i<10000; i++) {
        if(zbirDvaBroja(i)) {
            cout<<i<<endl;
            count++;
        }
    }
    cout<<count<<endl;
}