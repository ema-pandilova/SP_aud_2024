//
// Created by ema on 15.10.24.
//

#include <iostream>
using namespace std;

// Да се напише програма со која ќе се отпечати максимумот од два броја чии вредности се читаат од тастатура.
int main() {
    int a,b;
    cin>>a>>b;
    if(a>b) {
        cout<<a;
    }
    else if(b>a) {
        cout<<b;
    }
    else {
        cout<<"Isti";
    }

}
