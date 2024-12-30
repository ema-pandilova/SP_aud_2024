//
// Created by ema on 8.12.24.
//

#include <iostream>
using namespace std;


// Да се напише програма која за даден природен број ја пресметува разликата помеѓу најблискиот поголем од него прост број и самиот тој број.

// Програмата треба да користи рекурзивна функција за наоѓање на соодветниот прост број,
//  која пак треба да користи рекурзивна функција за проверка дали даден број е прост број

int daliProst(int n, int divisor) { //divisor =[2, n-1]
  if(divisor == n) { // dokolku divisor stigne do n brojot e prost (ne bil napraven prekin odnosno return 0)
      return 1;
  }
  else {
        if (n%divisor == 0) { // ako najdeme nekoj delitel na brojot vrakjame 0(ne e prost)
            return 0;
        }
        else {
            return daliProst(n, divisor+1); // rekurziven povik za proverka na sleden delitel
        }
    }
}

int prvProst(int n) {
 if (daliProst(n, 2)==1) {
     return n;
 }
 else {
        return prvProst(n+1);
    }
}
int main() {
 int n;
 cin>>n;
 cout<<prvProst(n+1) - n;

}