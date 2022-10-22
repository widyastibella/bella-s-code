#include <iostream>
using namespace std;
int main() {
    int x,y,z=0;
    cout<<"Silahkan masukkan angka (angka puluhan atau lebih)	:	";
    cin>>x;
    while (x>0){
        y= x%10;
        x= x/10;
        z= z*10+y;
    }cout<<z;
    return 0;
}
