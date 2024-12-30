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

int main() {
    int n;
    cin>>n;
    for(int i=n+1; ;i++) {
        if(daliProst(i)) {
            cout<<i - n<<endl;
            break;
        }
    }
}