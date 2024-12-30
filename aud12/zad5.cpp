//
// Created by ema on 23.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Да се напише функција која ќе проверува дали дадена текстуална низа е палиндром.

int isPalindrome(char * str) {
    int len = strlen(str); // n
    for (int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            return 0;
        }
    }
        return 1;

}

int isPalindromeR(char *str, int start, int end) {
    if(start >= end)
        return 1;
    else {
        return isPalindromeR(str, start + 1, end - 1);
    }
}

int main() {
    char str[100];
    cin.getline(str, 100);
    if(isPalindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;


}