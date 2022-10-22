#include <iostream>
using namespace std;
int main() {
	//soal : 
	//Bill Gates ingin menyelesaikan bug di sistem Microsoft 
	//dengan cara menentukan KPK dari 2 dan 9 serta KPK dari 5 dan 3, 
	//dan juga kelipatan daripada KPK bilangan tersebut, dari baris suatu 
	//bilangan yang ditentukan bilangan awal dan bilangan akhirnya. 
	
	//Input Format :
	//Terdapat input yang berisi nilai x dan y, dimana x adalah bilangan pertama dan y adalah bilangan terakhir. x <= y.
	
	//Output Format :
	//Angka yang termasuk KPK dan kelipatan KPK dari 2 dan 9 akan diganti dengan kata “Delapan Belas”. 
	//Angka yang termasuk KPK dan kelipatan KPK dari 5 dan 3 akan diganti dengan kata “Lima Belas”. 
	//Yang tidak termasuk dalam format diatas , angka akan ditampilkan sesuai urutan dari kecil ke besar. 
	//Jika x dan y bukan bilangan positif maka akan menampilkan “Input Salah”. Jika x > y maka akan menampilkan “Input Salah”.
	
	//sample input:
	//0
	//50
	
	//sample output:
	//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 Lima Belas 16 17 Delapan Belas 19 20 21 22 23 24 25 26 27 28 29 Lima Belas 31 32 33 34 35 Delapan Belas 37 38 39 40 41 42 43 44 Lima Belas 46 47 48 49 50
	
    int a,b;
    cin>>a;
    cin>>b;
    if(a<0||b<0||a>b){
        cout<<"Input Salah";
    }else {
        for(int g=a;g<=b;g++){
            if(g==0){
                cout<<"0 ";
            }else if(g%15==0 && g%18==0){
                cout<<"Lima Belas ";
            }else if(g%15==0){
                cout<<"Lima Belas ";
            }else if(g%18==0){
                cout<<"Delapan Belas ";
            }else {
                cout<<g<<" ";
            }
        }
    }
    return 0;
}

