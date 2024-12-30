//
// Created by ema on 5.11.24.
//

#include <iostream>
using namespace std;


// Да се напише програма што ќе ги отпечати сите парови прости броеви помали од 1000 што се разликуваат меѓу себе за 2. На крај да се отпечати и нивниот број.
int daliProst(int number) {
    for(int i=2; i<number; i++) {
        if(number%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i;
    int count = 0;
    for(i = 1; i<998; i++) {
        if(daliProst(i) && daliProst(i+2)) {
            cout<<i<<" "<<i+2<<endl;
            count++;
        }
    }
    cout<<count<<endl;

}