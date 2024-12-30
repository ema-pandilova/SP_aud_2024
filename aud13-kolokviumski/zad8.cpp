//
// Created by ema on 24.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// NZS -  rekruzija

int nzs (int n, int m, int divisor) {
    if(n==1 && m==1) {
        return 1;
    }
    else {
        if(m%divisor==0 || n%divisor==0) {
            return divisor*nzs(
                n%divisor==0 ? n/divisor : n,
                m%divisor==0 ? m/divisor : m,
                divisor);
        }
        else {
            return nzs(n, m, divisor+1);
        }
    }
}
int main() {
    int n,m,divisor=2;

    cin>>n>>m;
    cout<<nzs(n,m,divisor);

}