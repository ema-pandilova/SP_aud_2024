//
// Created by ema on 9.11.24.
//

#include <iostream>
using namespace std;

// ZADACA 1
// Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
// Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“.
// Ако не постои таков број, да се испечати NE.

int daliBlag(int x) {
    while(x>0) {
        if((x%10)%2!=0) {
            return 0;
        }
        x/=10;

    }
    return 1;
}
int main() {

    int m,n;
    int min=0;
    cin>>m>>n;
    for(int i=m; i<=n;i++) {
        if(daliBlag(i)==1) {
            if(min==0) {
                min=i;
            }
            else if(i<min) {
                min=i;
            }

        }

    }
    cout<<min;

    //      int n,m;
    //      cin>>n>>m;
    //      int min=99999;
    //      for(int i=n; i<=m; i++) {
    //           int temp=i;
    //           while(temp>0) {
    //                if((temp%10)%2==1) {
    //                     break;
    //                }
    //                temp/=10;
    //           }
    //           if(temp==0) {
    //                if(min>i) {
    //                     min=i;
    //                }
    //           }
    //
    //      }
    //      if(min==99999) {
    //           cout<<"NE"<<endl;
    //      }
    //      else {
    //           cout<<min<<endl;
    //      }
    // }
}