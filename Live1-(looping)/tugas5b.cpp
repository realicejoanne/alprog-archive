/* 	Nama program	: kebalikan segitiga sama kaki
	Nama			: M. Viqri, Alif Naufal, Vega Savera Yuana, Patricia Joanne
	NPM				: 140810160027, 140810160029, 140810160053, 140810160065
	Tanggal buat	: 14 Oktober 2016
	Deskripsi		: tugas alprog
***********************************************************************************/

#include <iostream.h>
using namespace std;

int main(){

	for(int i=3;i>=2;i--){ //looping i dengan angka lebih besar sama dengan 2 dan i decrement
		for(int j=1;j<=i;j++){ //looping j dengan angka lebih kecil sama dengan i dan j increment
			cout<<"*"; //output memunculkan *
		}
		cout<<endl; //memunculkan baris baru
	}
	
	for(int i=1;i<=3;i++){ //looping i dengan angka lebih kecil sama dengan 3 dan i increment
		for(int j=1;j<=i;j++){ //looping j dengan angka lebih kecil sama dengan i dan j increment
			cout<<"*"; //output memunculkan *
		}
		cout<<endl; //memunculkan baris baru
	}
}
