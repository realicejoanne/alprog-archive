/* 	Nama program	: maxmin
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 26 September 2016
	Deskripsi		: syalala
************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	int a,b,c,d,e;
	cout<<"Program Penentu Nilai Terbesar dan Terkecil"<<endl;
	cout<<"==========================================="<<endl;
	cout<<"Masukkan angka pertama: ";
	cin>>a;
	cout<<"Masukkan angka kedua: ";
	cin>>b;
	cout<<"Masukkan angka ketiga: ";
	cin>>c;
	cout<<"Masukkan angka keempat: ";
	cin>>d;
	cout<<"Masukkan angka kelima: ";
	cin>>e;
	
	if(a>b&&a>c&&a>d&&a>e) cout<<"Bilangan terbesar: "<<a<<endl;
		else if (b>a&&b>c&&b>d&&b>e) cout<<"Bilangan terbesar: "<<b<<endl;
		else if (c>a&&c>b&&c>d&&c>e) cout<<"Bilangan terbesar: "<<c<<endl;
		else if (d>a&&d>b&&d>c&&d>e) cout<<"Bilangan terbesar: "<<d<<endl;
		else if (e>a&&e>b&&e>c&&e>d) cout<<"Bilangan terbesar: "<<e<<endl;
	else cout<<"Ada kesalahan. Silakan cek ulang input."<<endl;
		
	if(a<b&&a<c&&a<d&&a<e) cout<<"Bilangan terkecil: "<<a;
		else if (b<a&&b<c&&b<d&&b<e) cout<<"Bilangan terkecil: "<<b;
		else if (c<a&&c<b&&c<d&&c<e) cout<<"Bilangan terkecil: "<<c;
		else if (d<a&&d<b&&d<c&&d<e) cout<<"Bilangan terkecil: "<<d;
		else if (e<a&&e<b&&e<c&&e<d) cout<<"Bilangan terkecil: "<<e;
	else cout<<"Ada kesalahan. Silakan cek ulang input.";
}