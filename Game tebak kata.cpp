//soal:
//Roy dan Ikhsan ingin membuat game tebak kata sederhana menggunakan program C++. 
//Ikhsan ingin game tersebut memiliki batas maksimal untuk menebak, yang juga dijadikan 
//jumlah nyawa awal pemain dalam game. Roy ingin program tersebut dapat menerima satu inputan 
//untuk kata yang akan ditebak dan beberapa inputan sesuai dengan batas maksimal untuk menebak kata tersebut.
//Akhir dari program game tersebut akan menampilkan hasil dan nyawa akhir pemain.

//Input Format
//Baris pertama menerima input bilangan integer n.
//Baris kedua menerima input kata yang akan ditebak.
//n baris selanjutnya menerima input jawab.

//Output Format
//Menampilkan MENANG/KALAH dan jumlah nyawa akhir yang dipisahkan spasi.
//jika input melebihi batas constraint maka akan keluar "INPUTAN SALAH"

//Sample Input:
//6
//Jerapah
//gajah
//Ular
//HIU
//jerapah
//Jerapah

//Sample Output:
//MENANG 2

//Explanation
//6 adalah total kata yang dibutuhkan untuk memasukkan kata
//MENANG 2 adalah output dari sisa nyawa akhir
//jika input melebihi batas constraint maka akan keluar "INPUTAN SALAH"

//ConstraintA: 0<n<=10
#include <iostream>
using namespace std;
int main() {
    int n,m=1,o=0;
    string kata,Jerapah;
    cin>>n;
    cin>>kata;
    if (n>0 && n<11){
        while (m<=n){
        cin>>Jerapah;
            if(Jerapah==kata){
                o++;
                if(m==n){
                    cout<<"MENANG "<<o;
                }
            } else if (m>=n){
                cout<<"KALAH "<<o;
            }
            m++;
            }
    }
    else {
        cout<<"INPUTAN SALAH";
    }
    return 0;
}
