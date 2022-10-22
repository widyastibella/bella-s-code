#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Silahkan masukkan angka pertama	:	";
    cin>>a;
    cout<<"Silahkan masukkan angka kedua	:	";
    cin>>b;
    if (a<1||a>100||b<1||b>100){
        cout<<"INPUTAN SALAH"<<endl;
        return 0;
    }
    if (a==b){
        cout<<a<<" == "<<b<<endl;}
    if (a!=b){
        cout<<a<<" != "<<b<<endl;}
    if (a<b){
        cout<<a<<" < "<<b<<endl;}
    if (a<=b){
        cout<<a<<" <= "<<b<<endl;}
    if (a>b){
        cout<<a<<" > "<<b<<endl;}
    if (a>=b){
        cout<<a<<" >= "<<b<<endl;}
    return 0;
}

