//
// Created by ema on 28.10.24.
//
//4031
#include <iostream>
using namespace std;

// Да се напише програма што од непознат број на цели броеви кои се внесуваат од тастатура ќе ги определи позициите (редните броеви на внесување)
// на двата последователни броја што ја имаат најголемата сума. Програмата завршува ако едно по друго (последователно) се внесат два негативни цели броја.

int main() {
   int prev, curr;
   int position;
   int max_sum, max_position;

   cin>>prev>>curr;
   if( prev<0 && curr<0) {
      return 0;
   }
   position =2;
   max_sum=prev+curr;
   max_position=position;

   for(position=3; prev>0 || curr>0; ++position) {
      prev = curr;
      cin>>curr;
      int sum = prev + curr;
      if(sum>max_sum) {
         max_sum=sum;
         max_position=position;
      }
   }

   cout<<max_position-1<<max_position<<endl;
   cout<<max_sum<<endl;
}