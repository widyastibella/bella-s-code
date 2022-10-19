#include <iostream>
using namespace std;

int main(){
	
	int T, N, a, b;
	cout << "Masukkan banyak jumlah case	:	";
	cin>>T;
	
	for (int x=0; x!=T; ++x){
		cout << "Masukkan banyak angka yang akan dijumlahkan	:	";
		cin>>N;
		a=0;
		while (N--){
			cout<< "Masukkan angka yang akan dijumlahkan	:	";
			cin>>b;
			a+=b;
		}
		cout<<"Case #"<<x+1<<": "<<a<<endl;
	}
	return 0;
}
