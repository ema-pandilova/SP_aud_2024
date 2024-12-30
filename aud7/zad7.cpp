//
// Created by ema on 11.11.24.
//


#include <iostream>
using namespace std;

// Да се напише програма со која се внесуваат  N цели броеви и којa го печати следниот извештај: максималната вредност, минималната вредност и средна вредност за внесените броеви.
//
// Влез: прво
// се внесува N, а потоа се внесуваат N-те броеви
// Излезот е во формат како во примерот(секоја од бараните вредности во дадениот редослед да биде отпечатена во нов ред)
int main() {
    int n;
    cin>>n;
    int num;
    int sum=0;
    int max=-9999;
    int min=9999;
    int flag=-1;
    for(int i=0; i<n; i++) {
        cin>>num;
        sum+=num;
        if(flag==-1) {
            max=num;
            flag=0;
        }
        else if(num>max) {
            max=num;
        }
        if(num<min) {
            min=num;
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<(float)sum/(float)n<<endl;

}