#include <iostream.h>
using namespace std;

int main () {
	cout<<"Menghitung Luas Bangun Datar"<<endl<<endl;
	
	int sisi,alas,tinggi,jari,persegi,segitiga,lingkaran;
	cout<<"1. Persegi"<<endl;
	cout<<"Masukkan sisi persegi: ";
	cin>>sisi;
	
	persegi=sisi*sisi;
	cout<<"Luas persegi: ";
	cout<<persegi;
	
	cout<<"\n\n2. Segitiga"<<endl;
	cout<<"Masukkan alas segitiga: ";
	cin>>alas;
	cout<<"Masukkan tinggi segitiga: ";
	cin>>tinggi;
	
	segitiga=alas*tinggi/2;
	cout<<"Luas segitiga: ";
	cout<<segitiga;
	
	cout<<"\n\n3. Lingkaran"<<endl;
	float phi=3.14;
	cout<<"Masukkan jari-jari lingkaran: ";
	cin>>jari;
	
	lingkaran=phi*jari*jari;
	cout<<"Luas lingkaran: ";
	cout<<lingkaran;
}