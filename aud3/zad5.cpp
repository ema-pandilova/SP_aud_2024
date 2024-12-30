//
// Created by ema on 15.10.24.
//

#include <iostream>
using namespace std;

// Да се напише програма што за внесен број на поени од испит ќе генерира соодветна оценка според следната табела:
// Да се промени претходната програма, така што покрај оценките ќе се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:
int main() {
    int poeni,x;
    cin >> poeni;
    if (poeni>=0 && poeni<=100) {
        if(poeni>90) {
            x=10;
        }
        else if(poeni>80) {
            x=9;
        }
        else if(poeni>70) {
            x=8;
        }
        else if(poeni>60) {
            x=7;
        }
        else if(poeni>50) {
            x=6;
        }
        else {
            x=5;
        }

        int pc;
        pc = poeni %10;
        if(x!=5 && (pc==1 || pc == 2 || pc==3)) {
            cout<<x<<"-";
        }
        else if(x!=10 && x!=5 &&(pc==8 || pc==9 || pc==0)) {
            cout<<x<<"+";
        }
        else {
            cout<<x;
        }
    }



}
