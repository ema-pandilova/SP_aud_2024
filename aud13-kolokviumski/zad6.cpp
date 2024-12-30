//
// Created by ema on 24.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// За дадена низа од знаци со големина од максимум 100 знаци (се внесува од тастатура) да се пронајде и врати првата голема буква со помош на рекурзивна функција.
// Пронајдената буква да се испечати на екран. Доколку нема, функцијата потребно е да го врати знакот ‘\0’.
char prvaGolema( char *str) {
    if (*str=='\0')
        return '\0';
    else {
        if (isupper(*str))
            return *str;
        else
            return prvaGolema(str+1);

    }
}
int main() {
    char str[100];
    cin.getline(str, 100);
    if (prvaGolema(str)=='\0')
        cout<<"Nema";
    else
        cout<<prvaGolema(str);

}