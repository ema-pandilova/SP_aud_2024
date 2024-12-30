//
// Created by ema on 28.10.24.
//

#include <iostream>
using namespace std;

// Да се напише програма што на екран ќе ги испечати сите четири-цифрени броеви кај кои збирот на трите најмалку значајни цифри е еднаков со најзначајната цифра.

int main() {
 int firstDigit=0, sumOfOtherDigits=0;
 for(int i=1000; i<=9999; i++) {
  firstDigit = i/1000;
  sumOfOtherDigits = (i%10) + (i/10%10) + (i/100%10);
  if(firstDigit==sumOfOtherDigits) {
   cout << i << endl;
  }
 }
}