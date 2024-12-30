//
// Created by ema on 23.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Да се напише функција која за дадена текстуална низа ќе одредува дали таа е доволно сложена за да биде лозинка.
//Секоја лозинка мора да содржи барем една буква, барем една цифра и барем еден специјален знак

int isStrong(char *pass) {
    int n = strlen(pass);
    int hasLetter = 0;
    int hasDigit = 0;
    int hasSpecial = 0;
    for (int i = 0; i < n; i++) {
        if(isalpha(pass[i]))
            hasLetter = 1;
        else if(isdigit(pass[i]))
            hasDigit = 1;
        else if(!isalnum(pass[i])){
            hasSpecial = 1;
        }

    }

    return hasLetter && hasDigit && hasSpecial;

}

int main() {
    char pass[100];
    cin.getline(pass, 100);
    if(isStrong(pass))
        cout << "strong" << endl;
    else
        cout << "not strong" << endl;


}