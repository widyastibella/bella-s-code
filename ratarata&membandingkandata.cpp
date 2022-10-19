#include <iostream>
using namespace std;
int main (){
	int N,x [10], a,b= 0;
	float j;
	int y= 0;
	cout << "Masukkan banyak angka yang akan dimasukkan	:	";
	cin>>N;
	for (a=0; a<N; a++){
		cout<< "Masukkan angka ke-" << a+1 << "	:	";
		cin>> x[a];
		y= (y + x[a]);
	}
	j=y/N;
	for (a=0; a<N; ++a){
			if (x[a]>= j)
			b++;	
	}
	
	cout<< "Rata-rata dari angka tersebut adalah 	:	"<< j << endl;
	cout<< "Jumlah angka yang lebih besar sama dengan rata-rata adalah sebanyak	:	" << b;
	return 0;
}
