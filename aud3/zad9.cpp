//
// Created by ema on 15.10.24.
//
#include <iostream>
using namespace std;

int main() {
    // float kuceskiGod, coveckiGod;
    // cin >> kuceskiGod;
    // if(kuceskiGod<0) {
    //     cout<<"Vozrasta mora da bide pozitiven broj";
    // }
    // else {
    //     if (kuceskiGod<=2) {
    //         coveckiGod = kuceskiGod * 10.5;
    //     }
    //     else {
    //         coveckiGod = 2 * 10.5 + (kuceskiGod - 2)*4;
    //     }
    //     cout<<"Covecki godini: "<< coveckiGod;
    // }

    // int a,b;
    // cin>>a>>b;
    // if(a>=b) {
    //     cout<<a;
    // }
    // else {
    //     cout<<b;
    // }

    // Да се напише програма што проверува дали дадена година што се вчитува од тастатура е престапна или не и на екран печати соодветна порака.
    //     Примери за престапни години
    //     :
    //     1976, 2000, 2004, 2008, 2012
    //     …
    //
    // ПОМОШ:
    //     Годината е престапна ако е делива со
    //     4
    //     но не е делива со
    //     100, или
    //     пак ако е делива со
    //     400.
    int year;
    cin>>year;
    if((year % 4 == 0 && year%100!=0)|| year%400==0) {
        cout<<"Leap year";
    }
    else {
        cout<<"Not a Leap year";
    }
}
