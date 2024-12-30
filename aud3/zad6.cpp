//
// Created by ema on 15.10.24.
//

#include <iostream>
using namespace std;

// Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да се напише програма што ќе провери дали од отсечките може да се конструира триаголник, при што ако може, да се провери дали истиот е правоаголен и да се пресмета неговата плоштина. Во спротивно, треба да се испечатат соодветни пораки.

int main() {
int a, b, c;
    cin >> a >> b >> c;
    if((a+b > c) && (a+c > b) && (b+c > a)) {
        int tmp;
        if(a>b) {
            tmp = a;
            a=b;
            b=tmp;
        }
        if(a>c) {
            tmp =a;
            a=c;
            c=tmp;
        }
        if(b>c) {
            tmp =b;
            b=c;
            c=tmp;
        }
        if( a*a + b*b == c*c ) {
            cout<<"Pravoagolen triagolnik"<<endl;
        }
        else {
            cout<<"Ne e pravoagolen"<<endl;
        }
    }
    else {
        cout<<"Ne moze da se konstruira triagolnik";
    }
}
