//
// Created by ema on 15.10.24.
//

#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    if((x%4==0 && x%100!=0) || (x%400==0)) {
        cout<<x<<" is a leap year."<<endl;
    }
    else {
        cout<<x<<" is not a leap year."<<endl;
    }

}
