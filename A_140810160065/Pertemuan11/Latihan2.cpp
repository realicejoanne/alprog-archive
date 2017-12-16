/* 	Nama program	: cari angka
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 17-11-16
	Deskripsi		: latihan2
************************************************************/

#include<iostream>
using namespace std;

typedef int array[100];

void input(int& banyak,array& larik){
	cout<<"Input jumlah angka: ";
	cin>>banyak;
	
	cout<<"Input elemen: ";
	for(int i=0;i<banyak;i++){
		cin>>larik[i];
	}
}
void cari(int& banyak,array& larik,int& cari,int& hasil,int& lokasi){
	cout<<"Input angka yang dicari: ";
	cin>>cari;
	hasil=lokasi=0;
	while(!hasil&&lokasi<banyak) {
		if(larik[lokasi]==cari) hasil=1;
		else lokasi=lokasi+1;
	}
}
void temukan(int& hasil,int& lokasi){
	cout<<endl<<"Hasil: "<<endl;
	if(hasil) cout<<"Angka ditemukan di elemen ke-"<<lokasi+1<<".";
	else cout<<"Tidak ditemukan angka yang dicari.";
}
int main(){
	int n,search,found,loc;
	array x;
	
	//input
	input(n,x);
	
	//cari
	cari(n,x,search,found,loc);
	
	//temukan
	temukan(found,loc);
}