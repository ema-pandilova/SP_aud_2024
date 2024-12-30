#include <iostream>
using namespace std;

char is_password_and_min_letter(long number) {
    int count = 0; 
    char min_letter = 'Z';
    bool has_letter = false;
    bool has_digit = false;

    while (number > 0) {
        int segment = number % 100;
        number /= 100;

        if (segment >= 65 && segment <= 90) {
            has_letter = true;
            count++;

            if (segment < min_letter) {
                min_letter = segment;
            }
        }
        else if (segment >= 48 && segment <= 57) {
            has_digit = true;
            count++;
        }
        else {
            return 0;
        }
    }


    if (count < 3 || !has_letter) {
        return 0;
    }


    return min_letter;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        long number;
        cin >> number;

        char min_letter = is_password_and_min_letter(number);
        if (min_letter != 0) {
            cout << number << " - YES - " << min_letter << '\n';
        } else {
            cout << number << " - NO" << '\n';
        }
    }

    return 0;
}
