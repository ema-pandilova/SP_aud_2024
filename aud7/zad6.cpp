//
// Created by ema on 9.11.24.
//

#include<iostream>
using namespace std;

// Сума-рабен број на даден број се смета бројот за кој последните 2 цифри од првичниот број ќе се заменат со нивната сума.
// Така на пример сума-рабен број на 187478 е 187415 (последните две цифри 7 и 8 се собираат и се добива 15).
// Постапката може да се повтори за секој новодобиен број се додека се добива повеќецифрен број (број кој има повеќе од 1 цифра).
// Едноцифрениот број кој се добива преку повторување на постапаката се нарекува краен сума-рабен број.
// Од тастатура се внесуваат непознат број на цели броеви се додека не се внесе нешто различно од број.
// За секој од внесените броеви треба да се испечатат сите сума-рабни броеви се` додека не се добие крајниот сума-рабен број.
// Објаснување: 123456789 - последните 2 цифри (8 и 9) се заменуваат со нивната сума (17) и се добива 123456717
// Потоа постапката се повторува 123456717 -> 12345678 -> 12345615 -> 1234566 -> 1234512 -> 123453 -> 12348 -> 12312 -> 1233 -> 126 -> 18 -> 9.
// TERMIN 1 ZADACA 2
int main() {
    int n;
    while(cin>>n) {
        int temp=n;
        while(temp>=10) {
            int sum=temp%10*temp%100/10;
            temp/=100;
            temp*=10;
            if(sum>=10) {
                temp*=10;
            }
            temp+=sum;
            cout<<temp<<endl;
        }
    }
}
