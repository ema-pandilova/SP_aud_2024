//
// Created by ema on 24.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// KOLOKVIUMSKI ZADACI SO REKURZIJA

// suma parni
// int sumaParni(int n) {
//     if (n==0)
//         return 0;
//     else {
//         if(n%10%2==0)
//             return n%10+sumaParni(n/10);
//         else
//             return sumaParni(n/10);
//     }
// }
// int main() {
//
//     int n;
//     cin >> n;
//     cout << sumaParni(n)<<endl;
//
// }

// da se vrati prva golema bukva od string

char prvaGolema(char * str) {
    if (*str=='\0')
        return '\0';
    else {
        if(isupper(*str))
            return (*str);
        else
            return prvaGolema(str+1);
    }
}

int main() {
    char str[100];
    cin.getline(str, 100);
    if(prvaGolema(str)=='\0')
        cout<<"Nema";
    else
        cout<<prvaGolema(str);

}