#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Silahkan masukkan ukuran pola segitiga (angka)	:	";
    cin>>a;
    cout<<"\n";
    for (int i=1; i<a; i++){
        for(int b=a; b>i; b--){
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
