//
// Created by ema on 24.12.24.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
const int MAX_SIZE = 100;

// За дадени од влез индекси на редици, да се испечати онаа редица која содржи како елементи најголем број на n-цифрени броеви (n се внесува од стандарден влез). Доколку има повеќе такви редици, се печати последно најдената.
// Од стандарден влез се задаваат димензиите на една матрица Аmxn(m, n <= 100),
//  а во продолжение се читаат елементите на матрицата.
//  Елементите на матрицата се цели броеви.
// Потоа се внесува цел број N(N <= 100), а во продолжение N индекси кои ги означуваат соодветните редици на матрицата
// На крај се внесува еден број n, кој означува колку цифрени броеви да се бараат во соодветните редици на матрицата

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}
int function(int mat[100][100], int rowIndex, int kolkucifren, int m) {
    int counter = 0;
    for(int i=0; i < m; i++) {
        if(countDigits(mat[rowIndex][i]) == kolkucifren) {
            counter++;
        }
    }
    return counter;

}
int main() {
    int n,m;
    cin>>n>>m;
    int mat[100][100];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>mat[i][j];
        }
    }
    int n_size;
    cin>>n_size;
    int lista[100];
    for(int i=0;i<n_size;i++) {
        cin>>lista[i];
    }
    int n1;
    cin>>n1;
    int maxRedica = -1;
    int maxCount = 0;
    for(int i=0; i<n_size;i++) {
        int count = function(mat, lista[i], n1, m);
        if(count>=maxCount) {
            maxCount = count;
            maxRedica = lista[i];
        }
    }
    for(int j=0; j<m; j++){
        cout<<mat[maxRedica][j]<<" ";

    }


}