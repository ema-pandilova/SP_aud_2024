//
// Created by ema on 28.10.24.
//
#include <iostream>
using namespace std;

char is_word_and_max_letter(long number) {

    int count = 0;
    char max_letter = 'A';

    while (number > 0) {
        int digit = number % 100;
        number /= 100;

        if (digit < 65 || digit > 90) {
            return 0;
        }

        count++;

        if (digit > max_letter) {
            max_letter = digit;
        }
    }
    if (count < 3) {
        return 0;
    }
    return max_letter;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        long number;
        cin >> number;

        char max_letter = is_word_and_max_letter(number);
        if (max_letter != 0) {
            cout << number << " - YES - " << max_letter << '\n';
        } else {
            cout << number << " - NO" << '\n';
        }

    }

    return 0;
}