//
// Created by ema on 28.10.24.
//

#include <iostream>
using namespace std;

// Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура ќе го определи бројот со максимална вредност.
// Притоа, броевите поголеми од 100 не се земаат предвид т.е. се игнорираат. Програмата завршува ако се внесе невалидна репрезентација на број.
int main() {
int number;
    int flag = 1;
    int max;
    while(cin>>number) {
        if(number >100) {
            continue;
        }
        if(flag) {
            max = number;
            flag = 0;
        }

        if(number > max) {
            max = number;
        }

    }
    if(flag) {
        cout<<"Vnesi broj";
    }
    else
        cout<<max;
}