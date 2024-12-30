//
// Created by ema on 24.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Од стандарден влез се внесуваат две почетни низи од знаци обете со иста должина и тоа не поголема од 10 знаци.
// Потоа се внесува цел број N (N<=100), а во продолжение секоја во нов ред се внесуваат N текстуални низи (реченици) со максимална должина од 100 знаци.
// За секоја од внесените реченици треба да се направи замена на најдените знаци од првата почетна низа со карактерите на соодветната позиција од втората почетна низа. На крај да се испечатат новодобиените реченици.

// Забелешка: Замената на знаците во речениците да се направи во посебна функција.

// На пример во реченицата:
// Prva recenica!0
// Сите појавувања на знакот 0 треба да се заменат со *, на знакот е со q и на знакот ! со *
// Prva rqcqnica**
void zameniZnaci (char *str, char *znaci1, char *znaci2) {
    int len = strlen(str);
    int len1 = strlen(znaci1);
    for (int i = 0; i < len; i++) {
        for(int j=0; j<len1; j++) {
            if(str[i]==znaci1[j])
                str[i]=znaci2[j];
        }
    }


}

int main() {
    char znaci1[10];
    char znaci2[10];
    cin.getline(znaci1, 10);
    cin.getline(znaci2, 10);
    int n;
    cin>>n;
    cin.ignore();
    char str[100];
    for(int i=0;i<n;i++) {
        cin.getline(str,100);
        zameniZnaci(str, znaci1, znaci2);
        cout<<str<<endl;
    }

}