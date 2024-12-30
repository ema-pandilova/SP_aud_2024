//
// Created by ema on 21.10.24.
//
#include <iostream>
using namespace std;


int main() {

    int N,cifra,temp,temp1,tablica,tablica1;
    cin>>N;
    int pom = N;
    while(N>=10) {
        N/=10;
    }
    if(N%2==0){
        for(int j=1; j<=10; j++) {

            tablica=N*j;
            cout<<N<<"*"<<j<<"="<<tablica<<endl;
        }
    }
    else {

        for(int j=1; j<=10; j++) {
            cifra = pom %10;
            tablica=cifra*j;
            cout<<cifra<<"*"<<j<<"="<<tablica<<endl;
        }

    }
}
