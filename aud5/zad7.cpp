//
// Created by ema on 28.10.24.
//

#include <iostream>
using namespace std;

// Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура ќе ги определи двата броја со најголеми вредности.
// Програмата завршува ако се внесе невалидна репрезентација на број.

int main() {
 int n, max1, max2, temp;
 if(cin>>max1>>max2) {
  if(max1<max2) {
   temp=max1;
   max1=max2;
   max2=temp;
  }
  while(cin>>n) {
   if(n>max1) {
    max2 = max1;
    max1 = n;
   }
   else if(n>max2) {
    max2=n;
   }
  }
cout<<max1<<" "<<max2;
 }
 else {
  cout<<"vnesi barem dva broja";
 }
}