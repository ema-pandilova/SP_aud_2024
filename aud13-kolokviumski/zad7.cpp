//
// Created by ema on 24.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// 2.9. Задача 8
// Да се напише функција која во дадена текстуална низа ќе ги отстранува празните места на почетокот и крајот од низата.

void trim( char * str) {
 int len = strlen(str);
 int firstLetterIndex = -1;
 for(int i = 0; i < len; i++) {
  if(!isspace(str[i])) {
   firstLetterIndex = i;
   break;
  }
 }
 cout<<"first letter index: "<<firstLetterIndex<<endl;
 char tmp[100];
 strcpy(tmp, str + firstLetterIndex);
 strcpy(str, tmp);

 for(int i=len-1; i >= 0; i--) {
  if(!isspace(str[i])) {
   str[i+1]='\0';
   break;
  }
 }
}
int main() {
 char str[100];
 cin.getline(str, 100);
 trim(str);
 cout << str << endl;
}