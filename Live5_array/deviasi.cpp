#include<iostream>
using namespace std;

//Standar deviasi
//dev = sqrt (var)
//var = (sigma) / (n-1)
//sigma = (x-rata)^2
//rata = jumlah/n
//jumlah = x1+x2+...

typedef int data[10];

void input(int& banyak,data& angka){
	cout<<"Banyak data : ";
	cin>>banyak;
	cout<<endl;

	for (int i=0;i<banyak;i++){
        cout<<"Data: "<<i+1<<" = ";
		cin>>angka[i];
	}
}
void hitung(int& banyak,data& angka,float& x,float& rata,float& jumlah,float& sigma,float& var,float& dev){
	//jumlah+rata
	for(int i=0;i<banyak;i++){
		jumlah=jumlah+angka[i];
	}
	rata=jumlah/banyak;

	//x-rata trus sigma
	for(int i=0;i<banyak;i++){
		x=(angka[i]-rata)*(angka[i]-rata);
		sigma=x+sigma;

	}

	//variansi+deviasi
	var=sigma/(banyak-1);
	dev=sqrt(var);
	cout<<endl<<"Standar deviasinya: "<<dev;
}
int main(){
	data a;
	int n;
	float x,rata,jumlah,sigma,var,dev;

	//input
	input(n,a);

	//hitung
	hitung(n,a,x,rata,jumlah,sigma,var,dev);
}
