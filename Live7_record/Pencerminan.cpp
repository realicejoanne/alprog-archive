/* 	Nama program	: mencari pencerminan koordinat
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 07-12-16
	Deskripsi		: materi record soal no. 1b
************************************************************/

#include<iostream>
using namespace std;

struct koor{
	float absis;
	float ordinat;
};
void koora(koor& a){
	cout<<"absis A: ";
	cin>>a.absis;
	cout<<"ordinat A: ";
	cin>>a.ordinat;
	cout<<endl;
}

void cerminx(koor& a,koor& x){
	x.absis=a.absis;
	x.ordinat=(a.ordinat*(-1));
	cout<<"titik A: ("<<a.absis<<","<<a.ordinat<<")"<<endl;
	cout<<"titik pencerminan thd sb. X: ("<<x.absis<<","<<x.ordinat<<")"<<endl<<endl;
}
void cerminy(koor& a,koor& y){
	y.absis=(a.absis*(-1));
	y.ordinat=a.ordinat;
	cout<<"titik A: ("<<a.absis<<","<<a.ordinat<<")"<<endl;
	cout<<"titik pencerminan thd sb. Y: ("<<y.absis<<","<<y.ordinat<<")";
}
int main(){
	koor a,x,y;
	
	cout<<"Program Mencari Titik Pencerminan Koordinat"<<endl;
	cout<<"==========================================="<<endl<<endl;
	
	//input koor A
	koora(a);
	
	//pencerminan sb. X
	cerminx(a,x);
	
	//pencerminan sb. Y
	cerminy(a,y);
}