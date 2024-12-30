//
// Created by ema on 23.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Да се напише функција која ќе одредува дали една текстуална низа е подниза на друга текстуална низа.
int daliPodniza( char * str1, char * str2 ) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len2 > len1) {
        return 0;
    }


    if(strstr(str1, str2))
        return 1;
    else
        return 0;
}

int main() {
    char str1[100], str2[100];
    cin.getline(str1, 100);
    cin.getline(str2, 100);
    if(daliPodniza(str1, str2))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}