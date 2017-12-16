/* 	Nama program	: hitung detik
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 26 September 2016
	Deskripsi		: syalala
************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	int jam,men,det,sec,sisj;
	cout<<"Mengkonversi Detik ke Satuan Jam, Menit, dan Detik"<<endl;
	cout<<"=================================================="<<endl;
	cout<<"Masukkan detik: ";
	cin>>det;
	
	jam=det/3600;
	sisj=det%3600;
	men=sisj/60;
	sec=sisj%60;
	
	cout<<"Jumlah waktu: ";
	cout<<jam<<" jam "<<men<<" menit "<<sec<<" detik";
}