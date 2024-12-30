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

int reverse(int number) {
    int reverse=0;
    while(number>0) {
        int c = number%10;
        reverse=reverse*10+c;
        number/=10;
    }
    return reverse;
}

int main() {
    int n;
    cin>>n;
    for(int i=1; i<n; i++) {
        int j = n-i;
        if(reverse(i)%sumOfDigits(j)==0) {
            cout<<i<<" "<<j<<endl;
        }
    }
}