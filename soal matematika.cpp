#include <iostream>
using namespace std;
int main() {
	cout<<"Anda dapat memasukkan 3 buah soal\n";
    for (int e=0; e<=2; e++){
        char f;
        float a,b,c,d;
        cout<<"Silahkan masukkan soal ke-"<<e+1<<" dengan format (a+b)x(c-d):	";
        cin>>f>>a>>f>>b>>f>>f>>f>>c>>f>>d>>f;
        cout<<"Jawab:	"<<(a+b)*(c-d)<<endl;
    }
    return 0;
}
