/*	Nama program	: quiz
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 4 Oktober 2016
	Deskripsi		: dfsdgdfbbntr

****************************************/

#include <iostream.h>
using namespace std;

int main(){
	float nilai,tugas,kuis,uts,uas;
	cout<<"Aplikasi Penghitung Nilai Akhir"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"Masukkan nilai tugas: ";
	cin>>tugas;
	cout<<"Masukkan nilai kuis: ";
	cin>>kuis;
	cout<<"Masukkan nilai UTS: ";
	cin>>uts;
	cout<<"Masukkan nilai UAS: ";
	cin>>uas;
	
	/* 	A utk 80-100
		B utk 68-79
		C utk 55-67
		D utk 41-54
		E utk 0-40
	*****************/
	
	nilai=(0.2*tugas)+(0.2*kuis)+(0.3*uts)+(0.3*uas);
	cout<<endl<<"Nilai akhir: "<<nilai<<endl<<endl;
	
	if (nilai>=0&&nilai<=100) {
		if (nilai>=80) cout<<"Huruf mutu A";
		if (nilai>=68&&nilai<=79) cout<<"Huruf mutu B";
		if (nilai>=55&&nilai<=67) cout<<"Huruf mutu C";
		if (nilai>=41&&nilai<=54) cout<<"Huruf mutu D";
		if (nilai<=40) cout<<"Huruf mutu E";
		}
	else cout<<"Angka tidak valid.";
}