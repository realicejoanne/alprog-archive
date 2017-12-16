#include<iostream>
using namespace std;

//Soal no. 5a itik tengah
/*
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
*/

//Soal no. 5b pencerminan
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