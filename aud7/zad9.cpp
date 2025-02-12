//
// Created by ema on 12.11.24.
//

#include <iostream>
using namespace std;
// Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
// Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
// Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед.
// Соодветно да се испечатат пораки „PAREN“ и „NE“.
// Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
int main()
{
    int pomal, pogolem, temp, flag=1;
    cin>>pogolem>>pomal;
    if(pogolem<=0 || pomal<=0) {
        cout<<"Invalid input"<<endl;
        return 0;
    }
    if(pomal>pogolem) {
        temp=pomal;
        pomal=pogolem;
        pogolem=temp;
    }
    while(pomal>0) {
        if(pomal%10!=pogolem%100/10) {
            flag=0;
            break;
        }
        pomal/=10;
        pogolem/=100;

    }
    if(flag==0) {
        cout<<"NE"<<endl;
    }
    else {
        cout<<"PAREN"<<endl;
    }


}