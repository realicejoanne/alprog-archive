/* 	Nama program	: cari titik tengah koordinat
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 07-12-16
	Deskripsi		: materi record soal no. 1a
************************************************************/

#include<iostream>
using namespace std;

struct koor{
	float absis;
	float ordinat;
};
void koora(koor& a){
	cout<<"Absis A: ";
	cin>>a.absis;
	cout<<"Ordinat A: ";
	cin>>a.ordinat;
	cout<<endl;
}
void koorb(koor& b){
	cout<<"Absis B\t: ";
	cin>>b.absis;
	cout<<"Ordinat B: ";
	cin>>b.ordinat;
	cout<<endl;
}
void titiktengah(koor& a,koor& b,koor& t){
	t.absis=(a.absis+b.absis)/2;
	t.ordinat=(a.ordinat+b.ordinat)/2;
}
void cetak(koor& a,koor& b,koor& t){
	cout<<"Koordinat titik A: ("<<a.absis<<","<<a.ordinat<<")"<<endl;
	cout<<"Koordinat titik B: ("<<b.absis<<","<<b.ordinat<<")"<<endl;
	cout<<"Koordinat titik tengah: ("<<t.absis<<","<<t.ordinat<<")";
}
int main(){
	koor a,b,t;
	
	cout<<"Program Mencari Titik Tengah Koordinat"<<endl;
	cout<<"======================================"<<endl<<endl;
	
	//input koor A
	koora(a);
	
	//input koor B
	koorb(b);
	
	//titik tengah
	titiktengah(a,b,t);
	
	//cetak koor
	cetak(a,b,t);
}