//
// Created by ema on 23.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Да се напише функција која во стринг што и се предава како влезен параметар ќе ги промени малите букви во големи и обратно,
// и ќе ги отстрани сите цифри и специјални знаци.
void transform(char *str) {
    int n = strlen(str);
    // for (int i = 0; i < n; i++) {
    //     if(!isalpha(str[i])) {
    //         str[i] ='!';
    //     }
    // }
    //0v@ePr1m3R -> !v!ePr!m!R -> v
    int j=0;
    for (int i = 0; i < n; i++) {
        if(isalpha(str[i])) {
            if(isupper(str[i])) {
                str[j]=tolower(str[i]);
            }
            else {
                str[j]=toupper(str[i]);
            }
            j++;
        }

    }
    str[j]='\0';
}


int main() {
char str[100];
    cin.getline(str, 100);
    transform(str);
    cout << str << endl;

}