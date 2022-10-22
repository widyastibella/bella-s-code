#include <iostream>
using namespace std;
int main() {
    int n,a,b,c;
    cout<< "Silahkan masukkan jumlah deret fibonnaci	:	";
    cin>>n;
    b=1;
    c=-1;
    a= b+c;
    
    for( int i=0; i<n; i++){
        a=b+c;
        c=b;
        b=a;
        cout<<a<<" ";
    }
    cout<<"\n";
    return 0;
}
