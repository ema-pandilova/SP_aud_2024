//
// Created by ema on 15.10.24.
//

#include <iostream>
using namespace std;

// Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да се провери дали од дадените отсечки може да се конструра триаголник. Ако може, да се испечати дали триаголникот е разностран, рамностран или рамнокрак и да му се пресмета плоштината.
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if((a+b > c) && (a+c > b) && (b+c > a)) {
        if(a==b && b==c && c==a) {
            cout<<"ramnostran"<<endl;
        }
        else if (a==b || b==c || c==a) {
            cout<<"ramnokrak"<<endl;
        }
        else {
            cout<<"raznostran"<<endl;
        }
    }
    else {
        cout<<"Ne moze da se konstruira triagolnik";
    }
}