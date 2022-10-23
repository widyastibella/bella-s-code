#include <iostream>
using namespace std;
int main() {
    int A,N;
    cout<<"Silahkan masukkan bilangan:	";
    cin>>A;
    for (N=A; N>0; N--){
        if (A%N==0){
            cout<<N<<endl;
        }
    }
    return 0;
}

