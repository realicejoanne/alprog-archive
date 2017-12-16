#include <iostream.h>
using namespace std;

int main () {
	cout<<"Program Penghitungan Nilai Akhir Semester Mata Kuliah Algoritma dan Pemrograman"<<endl<<endl;
	int kuis,tgs,uts,uas,nilai;
	cout<<"Masukkan nilai kuis: ";
	cin>>kuis;
	cout<<"Masukkan nilai tugas: ";
	cin>>tgs;
	cout<<"Masukkan nilai UTS: ";
	cin>>uts;
	cout<<"Masukkan nilai UAS: ";
	cin>>uas;
	
	nilai=0.1*kuis+0.2*tgs+0.3*uts+0.4*uas;
	cout<<"Nilai akhir: "<<nilai<<endl;
	
	cout<<"Hasil mutu: ";
	if (nilai<40) cout<<"F";
	else if (nilai<50) cout<<"E";
	else if (nilai<60) cout<<"D";
	else if (nilai<70) cout<<"C";
	else if (nilai<80) cout<<"B";
	else if (nilai<100) cout<<"A";
}