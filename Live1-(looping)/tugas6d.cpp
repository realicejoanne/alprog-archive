/* 	Nama program	: huruf x
	Nama			: M. Viqri, Alif Naufal, Vega Savera Yuana, Patricia Joanne
	NPM				: 140810160027, 140810160029, 140810160053, 140810160065
	Tanggal buat	: 14 Oktober 2016
	Deskripsi		: tugas alprog
***********************************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){ //looping i dengan i lebih kecil sama dengan 5 dan i increment
		for(int j=1;j<=5;j++){ //looping j dengan j lebih kecil sama dengan 5 dan j increment
			if(i==j||(i+j==6)) cout<<"*"; //jika i sama dengan j atau i+j sama dengan 6 maka outputnya *
			else cout<<" "; //jika bukan syarat if tersebut maka outputnya spasi
		}
		cout<<endl; //memunculkan baris baru
	}
}
