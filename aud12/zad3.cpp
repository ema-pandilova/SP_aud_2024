//
// Created by ema on 23.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


// Да се напише програма која ќе ја отпечати поднизата на дадена текстуална низа (што се внесува од тастатура)
// определена со позицијата и должината, што како параметри се внесуваат од тастатура.
// Поднизата започнува од знакот што се наоѓа на соодветната позиција во текстуалната низа, броејќи од лево.
int main() {
    char str[100];
    cin.getline(str, 100);
    int start, length;
    cin>>start>>length;

    for (int i=start; i<start+length; i++) {
        if(str[i]=='\0')
            break;
        cout<<str[i];
    }
    char tmp[100];

    strncpy(tmp, str+start, length);
    for (int i=0; i<strlen(tmp); i++) {
        cout<<tmp[i];
    }





}