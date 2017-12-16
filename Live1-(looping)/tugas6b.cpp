/* 	Nama program	: segitiga sama kaki terbalik
	Nama			: M. Viqri, Alif Naufal, Vega Savera Yuana, Patricia Joanne
	NPM				: 140810160027, 140810160029, 140810160053, 140810160065
	Tanggal buat	: 14 Oktober 2016
	Deskripsi		: tugas alprog
***********************************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	int i,j,k; //pendeklarasian
	
	for(i=5;i>=1;i--){ //looping i sama dengan 5 dengan i lebih besar sama dengan 1 dan i decrement
		for(j=5;j>i;j--){ //looping j sama dengan 5 dengan j lebih besar 1 dan j decrement
			cout<<" "; //output berupa spasi
		}
		for(k=1;k<(i*2);k++){ //looping k dengan k lebih kecil dari i dikali 2 dan k increment
			cout<<"*"; //looping berupa *
		}
	cout<<endl; //memunculkan baris baru
	}
}