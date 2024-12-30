//
// Created by ema on 15.10.24.
//

#include <iostream>
using namespace std;

// Од тастатура се внесуваат координати на една точка од рамнина. Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка.
int main() {
    int x,y;
    cin>>x>>y;
    if(x>0){
        if(y>0) {
            cout<<"I kvadrant";
        }
        else if(y<0) {
            cout<<"IV kvadrant";
        }
        else {
            cout<<"x oska";
        }
    }
    else if(x<0) {
        if(y>0) {
            cout<<"II kvadrant";
        }
        else if(y<0) {
            cout<<"III kvadrant";
        }
        else {
            cout<<"x oska";
        }
    }
    else {
        if(y==0) {
            cout<<"koordinaten pocetok";
        }
        else {
            cout<<"lezi na y oska";
        }
    }

}
