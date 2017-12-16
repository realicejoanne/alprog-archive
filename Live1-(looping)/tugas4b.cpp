/* 	Nama program	: segitiga terbalik pake while
	Nama			: M. Viqri, Alif Naufal, Vega Savera Yuana, Patricia Joanne
	NPM				: 140810160027, 140810160029, 140810160053, 140810160065
	Tanggal buat	: 14 Oktober 2016
	Deskripsi		: tugas alprog
***********************************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	int i; //pendeklarasian i
	cout<<"Banyak baris: "; //untuk input banyak baris
	cin>>i; //variabel input berupa i

	while(i>=1){ //looping i dengan syarat i lebih besar sama dengan 1
		cout<<i; //output memunculkan i
		int j=1; //pendeklarasian j
		while(j<=i){ //looping j dengan syarat j lebih kecil sama dengan i
			cout<<"*"; //output memunculkan *
			j++; //increment dilakukan pada variabel j
		}
		i--; //decrement dilakukan pada variabel i
		cout<<endl; //memunculkan baris baru
	}
}
