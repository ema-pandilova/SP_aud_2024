//
// Created by ema on 5.11.24.
//

#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum=0;
    while(number>0) {
        sum+=number%10;
        number/=10;
    }
    return sum;
}

void print(int x) {
    cout<<x<<" ";
}

int main(){
    int n;
    cin>>n;
    print(sumOfDigits(n));
}