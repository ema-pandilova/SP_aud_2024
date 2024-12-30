//
// Created by ema on 17.12.24.
//

#include <iostream>
using namespace std;

// Examples for pointers
void transform(int *a, int n) {
    for (int i = 0; i < n; i++) {
        *(a+i)/=2;
    }
}
int main() {
    //Example 1
    // int x;
    // cin >> x;
    // int *xPtr = &x;
    // int *x1Ptr = xPtr;
    // cout << *xPtr << endl;
    // cout << *x1Ptr << endl;


    //Example 2
    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     cin>>*(a+i); //cin>>a[i]
    // }
    // for (int i = 0; i < n; i++) {
    //     cout<<*(a+i)<<" "; //cout<<a[i]
    // }

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>*(a+i); //cin>>a[i]
    }
    transform(a, n);
    for (int i = 0; i < n; i++) {
        cout<<*(a+i)<<" "; //cout<<a[i]
    }
}