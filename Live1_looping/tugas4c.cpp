/* 	Nama program	: segitiga pake for
	Nama			: M. Viqri, Alif Naufal, Vega Savera Yuana, Patricia Joanne
	NPM				: 140810160027, 140810160029, 140810160053, 140810160065
	Tanggal buat	: 14 Oktober 2016
	Deskripsi		: tugas alprog
***********************************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	int baris; //pendeklarasian
	cout<<"Banyak baris: "; //untuk input banyak baris
	cin>>baris; //variabel input berupa baris

	for(int i=1;i<=baris;i++){ //looping i dengan angka lebih kecil sama dengan variabel baris dan i increment
		cout<<i; //output memunculkan i
		for(int j=1;j<=i;j++){ //looping j dengan angka lebih besar sama dengan i dan j increment
			cout<<"*"; //output memunculkan *
		}
		cout<<endl; //memunculkan baris baru
	}
}
