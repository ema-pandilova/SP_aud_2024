
//
// Created by ema on 9.11.24.
//



#include <iostream>
using namespace std;

// Lanski labs kviz zadaca 30
// Подреден број е број кај кој секоја следна цифра е поголема или еднаква на претходната (гледајќи од најзначајната кон најмалку значајната). На пример, 12234.

// Да се напише програма во која прво се внесува број N кој го определува вкупниот број на броеви кои ќе бидат внесени од тастатура.
// Потоа се внесуваат N-те броеви, еден по еден.
// На излез, потребно е да се испечатат сите броеви кои го исполнуваат условот за подреден број,
//а потоа да се отпечати сумата на сите внесени Подредени броеви и нивниот број.

//Подреден број е број кај кој секоја следна цифра е поголема или еднаква на претходната (гледајќи од најзначајната кон најмалку значајната). На пример, 12234.

int daliPodreden (int x) {
  while(x>=10) {
    if(x%10<x%100/10) {
      return 0;
    }
    x/=10;
  }
  if(x<10) {
    return 1;
  }

}

int main(){
  int n;
  cin>>n;
  int temp;
  int sum=0;
  int count=0;
  for(int i=0; i<n; i++) {
      cin>>temp;
    if(daliPodreden(temp)==1) {
      cout<<temp<<endl;
      sum+=temp;
      count++;
    }
  }
  cout<<sum<<endl;
  cout<<count<<endl;

}