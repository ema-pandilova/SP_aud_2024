//
// Created by ema on 23.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Да се напише функција што ќе ја одредува должината на една текстуална низа.

// Да се даде итеративно и рекурзивно решение
int getLength(char* str) {
    int count =0;
    while(*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int getLength2(char* str) {
    if(*str == '\0') {
        return 0;
    }
    else {
        return 1+getLength2(str+1);
    }
}

int main() {
    char str[100];
    cin.getline(str, 100);
    cout<<getLength(str);
    cout<<getLength2(str);


}