/* 	Nama program	: segitiga ditab
	Nama			: M. Viqri, Alif Naufal, Vega Savera Yuana, Patricia Joanne
	NPM				: 140810160027, 140810160029, 140810160053, 140810160065
	Tanggal buat	: 14 Oktober 2016
	Deskripsi		: tugas alprog
***********************************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	for(int i=0;i<5;i++){ //looping i dengan nilai terkecil 0 dan lebih kecil dari 5 dan i increment
		for(int j=1;j<=5;j++){ //looping j dengan nilai terkecil 1 dan j lebih kecil sama dengan 5 dan j increment
			if(j<=i) cout<<" "; //jika j lebih kecil sama dengan i maka outputnya spasi
			else cout<<"*"; //jika j tidak lebih kecil sama dengan i maka outputnya *
		}
		cout<<endl; //memunculkan baris baru
	}
}
