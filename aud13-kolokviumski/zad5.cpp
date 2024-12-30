#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Од стандарден влез се задава димензија на една матрица Аmxn (m,n<=100), а во продолжение се читаат елементите на матрицата. Елементите на матрицата се цели броеви. Потоа се внесува уште еден цел број (големина на буквата N).
// Да се креира нова матрица M чии елементи се добиваат како збирови на елементите кои лежат на страните
// контурите на буквата N(
//     должината на страните на буквата N- односно
//  бројот на елементи кои треба да бидат земени во пресметката се внесува како параметар од командна линија)
// Секој елемент од новата матрица(Mij)
//  е еднаков на збирот на елементите кои се наоѓаат во патеката на формирање на буквата N почнувајќи од соодветниот елемент во матрицата А
//  Елементите за кои не може да се формира буквата N остануваат исти и во новокреираната матрица
// Новодобиената матрица M да се испечати на стандарден излез
// .
// Пример влез:
//
// 4
// 5
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12
// 13
// 14
// 15
// 16
// 17
// 18
// 19
// 20
// 3
//
//
// Излез:
// 49
// 56
// 63
// 4
// 5
// 84
// 91
// 98
// 9
// 10
// 11
// 12
// 13
// 14
// 15
// 16
// 17
// 18
// 19
// 20

int calculateSum(int mat[100][100], int startRow, int startColumn, int size) {
    int sum=0;
    for(int i=0; i < size; i++) {
        sum+=mat[startRow+i][startColumn];
        sum+=mat[startRow+i][startColumn+size-1];
        if(i>0 && i<size-1) {
            sum+=mat[startRow+i][startColumn+i];
        }
    }
    return sum;

}
int main() {
    int mat[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>mat[i][j];
        }
    }
    int n_size;
    cin>>n_size;
    int mat2[100][100];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(i+n_size -1 <n && j+n_size-1<m) {
                //proveruvame dali ovaa golemina na N moze da se smesti vo ramkite na dimenziite na MATRICATA
                mat2[i][j]=calculateSum(mat,i,j, n_size);
            }
            else {
                mat2[i][j]=mat[i][j];
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
}