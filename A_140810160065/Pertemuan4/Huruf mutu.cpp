/* 	Nama program	: huruf mutu
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 3 Oktober 2016
	Deskripsi		: hjhkjjdfs
************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	int nilai;
	cout<<"Program Menghitung Nilai Akhir"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"Input nilai akhir: ";
	cin>>nilai;
	
	/* 	A untuk 80-100
		B untuk 70-79
		C untuk 60-69
		D untuk 50-59
		E untuk 0-49
	*/
	
	if (nilai>=0&&nilai<=100) {
		if (nilai>=80) cout<<"Output huruf mutu: A";
		else if (nilai>=70&&nilai<=79) cout<<"Output huruf mutu: B";
		else if (nilai>=60&&nilai<=69) cout<<"Output huruf mutu: C";
		else if (nilai>=50&&nilai<=59) cout<<"Output huruf mutu: D";
		else if (nilai<=49) cout<<"Output huruf mutu: E";
		}
	else cout<<"Angka tidak valid.";
}