//
// Created by ema on 23.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Да се напише функција што ќе одредува колку пати даден знак се наоѓа во даден стринг. Знакот за споредување и стрингот се внесуваат од тастатура.
int countOccurrences(char *str, char c) {
    int count = 0;
    while (*str != '\0') {
        if (*str == c) {
            count++;
        }
        str++;
    }
    return count;

}

int countOccurrences1(char *str, char c) {
    int count = 0;
    for(int i=0; i < strlen(str); i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int countOccurrences2(char *str, char c) {
    if(*str == '\0') {
        return 0;
    }
    else {
        if(*str == c)
            return 1+countOccurrences2(str+1, c);
        else
            return 0+countOccurrences2(str+1, c);
    }
}
int main() {
    char str[100];
    char c;
    cin.getline(str, 100);
    cin>>c;
    cout<<countOccurrences(str, c);
    cout<<countOccurrences1(str, c);
    cout<<countOccurrences2(str, c);

}