//
// Created by ema on 8.12.24.
//

#include <iostream>
using namespace std;

// Да се напише рекурзивна функција која ќе го пресметува збирот на цифрите на еден број.
int zbirCifri(int n) {
    if (n<10)
        return n;
    else {
        return n%10 + zbirCifri(n/10);
    }
}

int main() {
    int n;
    cin >> n;
    cout<<zbirCifri(n);
}