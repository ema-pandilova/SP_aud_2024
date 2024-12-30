//
// Created by ema on 5.11.24.
//

#include <iostream>
using namespace std;
#define PI 3.14159265
#include <cmath>
#include <iomanip>

// Да се напишат соодветни функции за пресметување на дијаметар, периметар и плоштина на круг чиј што радиус се предава како аргумент.
// Потоа да се напише и програма во која за внесен (од тастатура) радиус ќе се повикаат овие функции за да се пресметаат дијаметарот,
// периметарот и плоштината на соодветниот круг.
float dijametar(float r) {
  return 2.0*r;
}

float perimetar(float r) {
    return dijametar(r)*PI;
}

float plostina(float r) {
    return pow(r,2)*PI;
}

int main() {
    float r;
    cin >> r;
    cout<<fixed<<setprecision(2)<<dijametar(r)<<endl;
    cout<<fixed<<setprecision(2)<<perimetar(r)<<endl;
    cout<<fixed<<setprecision(2)<<plostina(r)<<endl;
}