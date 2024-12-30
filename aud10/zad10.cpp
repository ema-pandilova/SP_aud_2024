//
// Created by ema on 8.12.24.
//

#include <iostream>
using namespace std;

// NZS
int lcm(int m, int n, int divisor) {
    if(m==1 && n==1) {
        return 1;
    }
    else {
        if(m%divisor == 0 || n%divisor == 0) {
            return  divisor * lcm(
                m%divisor == 0? m/divisor : m,
                n%divisor == 0 ? n/divisor: n,
                divisor);
        }
        else {
            return lcm(m,n,divisor+1);
        }
    }
}
int main() {
    int m,n;
    cin>>m>>n;
    cout<<lcm(m,n,2);

}