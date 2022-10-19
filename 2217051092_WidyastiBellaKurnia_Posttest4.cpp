#include <iostream>
using namespace std;
int main (){
	
	int n;
	float jumlah, sigma, mean, variansi;
	
	//menghitung jumlah data
	cin>>n;
	
	jumlah = 0;
	for (int a=1; a<=n; a++){
		jumlah = jumlah+a;
	}
	
	//menghitung mean
	mean = jumlah/n;
	
	//menghitung variansi
	sigma = 0;
	for (int b=1; b<=n; b++){
		sigma = sigma + (b-mean)*(b-mean);
	}
	
	variansi = sigma/(n-1);
	cout<<variansi;
	
	return 15;
}
