//
// Created by ema on 5.11.24.
//

#include <iostream>
using namespace std;

// Да се напише програма која за даден природен број ја пресметува разликата помеѓу најблискиот поголем од него прост број и самиот тој број.
int daliProst(int number) {
    for(int i=2; i<number; i++) {
        if(number%i==0) {
            return 0;
        }
    }
    return 1;
}

int sumOfDigits(int number) {
    int sum=0;
    while(number>0) {
        sum+=number%10;
        number/=10;
    }
    return sum;
}

int main() {
    int i;
    int count=0;
    for(i=1; i<10000; i++) {
        if(daliProst(i) && daliProst(sumOfDigits(i))) {
            cout<<i<<endl;
            count++;
        }
    }
    cout<<count<<endl;

}