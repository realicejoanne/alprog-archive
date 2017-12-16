/* 	Nama program	: maxmin loop
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 9 Oktober 2016
	Deskripsi		: dsifisfjq
************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	int max,min,x,y,angka;
	cout<<"Program Pembanding Angka"<<endl;
	cout<<"------------------------"<<endl;
	
	cout<<"Masukkan banyak angka yang ingin dibandingkan: ";
	cin>>x;
	
	for(y=1;y<=x;y++){
		cout<<"Masukkan angka ke "<<y<<": ";
		cin>>angka;
		if (angka>max) max=angka;
		else if (angka<min) min=angka;
	}
	
	cout<<endl;
	cout<<"Bilangan terbesar: "<<max<<endl;
	cout<<"Bilangan terkecil: "<<min<<endl;
}