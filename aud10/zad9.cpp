//
// Created by ema on 8.12.24.
//


#include <iostream>
using namespace std;

void transform(int *array, int n) {
    int i;
    for(i=0; i<n/2; i++) {
        int tmp = *(array + i) + *(array+n-i-1);
        *(array + i)=tmp;
        *(array+n-i-1)=tmp;
    }
    if(n%2==1) {
        *(array + n/2)*=2;
    }
}
int main() {
    int array[100];
    int i,n;
    cin>>n;
    for(i=0; i<n; i++) {
        cin >> array[i];
    }
    transform(array, n);
    for(i=0; i<n; i++) {
        cout<<*(array+i)<<" ";
    }
}