//
// Created by ema on 28.10.24.
//

#include <iostream>
using namespace std;

// Да се напише програма што за знак внесен од тастатура ќе одреди дали е самогласка, цифра или другo.
int main() {
char c;
    cin >> c;
    switch (c) {
        case 'a':case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'U':
        case 'O':
        case 'I':
        cout << "Samoglaska" << endl;
        break;
        case '0':
        case '1':
            case '2':
        case '3':
        case '4':case '5':
        case '6':
        case '7':
        case '9':
        case '8':
        cout <<"Cifra" << endl;
        break;
        default:
            cout <<"Drugo" << endl;
        break;
    }



}