//
// Created by ema on 28.10.24.
//

#include <iostream>
#include <cmath>
using namespace std;

// Да се напише програма што од N цели броеви внесени од тастатура ќе ја определи разликата од сумите на броевите на парни и непарни позиции (според редоследот на внесување). Ако оваа разлика е помала од 10 на екран се печати “Dvete sumi se slicni”, а во спротивно “Dvete sumi mnogu se razlikuvaat”.


int main() {
int n;
    cin >> n;
    int suma_parni = 0;
    int suma_neparni = 0;
    int broj;
    for (int i=1; i<=n; i++) {
        cin >> broj;
        if (i % 2 == 0) {
            suma_parni += broj;
        }
        else {
            suma_neparni += broj;
        }
    }
    int difference = abs(suma_parni - suma_neparni);
    if (difference < 10) {
        cout<<"Dvete sumi se mnogu slicni";
    }
    else {
        cout<<"Dvete sumi se razlikuvaat";
    }
}