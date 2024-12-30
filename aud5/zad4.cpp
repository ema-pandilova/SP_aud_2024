#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int xx = x * 10 + x; 
    int yy = y * 10 + y; 
    int xy = x * 10 + y; 
    int yx = y * 10 + x; 

    int N;
    cin >> N;


    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;

        bool divisible_same = (number % xx == 0) || (number % yy == 0);
        bool divisible_diff = (number % xy == 0) || (number % yx == 0);

        if ((number % xx == 0) || (number % yy == 0)) {
            cout << number << " Divisible with same digits" << endl;
        } else if ((number % xy == 0) || (number % yx == 0)) {
            cout << number << " Divisible with different digits" << endl;
        } else {
            cout << number << endl;
        }
    }

    return 0;
}

