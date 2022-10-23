#include <iostream>
using namespace std;
int main() {
    int c;
    cout<<"Silahkan masukkan jumlah lebar/tinggi segitiga:	";
    cin>>c;
    for (int a=1; a<=c; a++){
        for(int b=1; b<a; b++){
            cout<<"  ";
        }
        for ( int d=c; d>=a ; d--){
            cout<<d<<" ";
        }
        cout<<endl;
    }
    return 0;
}
