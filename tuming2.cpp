include <iostream>
#include <string>
using namespace std;
int main() {
	
	cout<<"TUGAS MINGGU 2\n";


	string Nama;
	string NPM;
	char Kelas;
	string Jurusan;

	cout<<"Nama	\t:	";
	getline (cin,Nama);
	cout<<"NPM	\t:	";
	cin>>NPM;
	cout<<"Kelas	\t:	";
	cin>>Kelas;
	cout<<"Jurusan		:	";
	getchar	();
	getline (cin,Jurusan);
	cout<<"\n";

	cout<<"Nama	\t:	" <<Nama<<endl;
	cout<<"NPM	\t:	" <<NPM<<endl;
	cout<<"Kelas\t:	" <<Kelas<<endl;
	cout<<"Jurusan\t:	" <<Jurusan<<endl;

	return 100;
}