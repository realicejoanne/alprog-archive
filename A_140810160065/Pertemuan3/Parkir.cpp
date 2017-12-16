/* 	Nama program	: parkiran
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 26 September 2016
	Deskripsi		: syalala
************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	int jamm,menm,detm,jamk,menk,detk,kel,mas,tot,jam,sisj,men,det,bayar;
	cout<<"Program Penghitung Biaya Parkir di Jatos"<<endl;
	cout<<endl<<"==========================================="<<endl<<endl;
	
	cout<<"Masukkan jam masuk: ";
	cin>>jamm;
	cout<<"Masukkan menit masuk: ";
	cin>>menm;
	cout<<"Masukkan detik masuk: ";
	cin>>detm;
	cout<<"Anda masuk pada "<<"jam "<<jamm<<" lewat "<<menm<<" menit "<<detm<<" detik";
	cout<<endl<<endl<<"==========================================="<<endl<<endl;

	cout<<"Masukkan jam keluar: ";
	cin>>jamk;
	cout<<"Masukkan menit keluar: ";
	cin>>menk;
	cout<<"Masukkan detik keluar: ";
	cin>>detk;
	cout<<"Anda keluar pada "<<"jam "<<jamk<<" lewat "<<menk<<" menit "<<detk<<" detik";
	cout<<endl<<endl<<"==========================================="<<endl<<endl;
	
	kel=jamk*3600+menk*60+detk;
	mas=jamm*3600+menm*60+detm;
	tot=kel-mas;
	cout<<"Anda telah parkir selama ";
	cout<<tot<<" detik";
	
	jam=tot/3600;
	sisj=tot%3600;
	men=sisj/60;
	det=sisj%60;
	
	cout<<endl<<"Atau selama "<<jam<<" jam "<<men<<" menit "<<det<<" detik";
	cout<<endl<<endl<<"==========================================="<<endl<<endl;
	
	if (men>=1||det>=1) bayar=3000*(jam+1);
		else bayar=3000*jam;
	
	cout<<"Biaya parkir yang harus dibayar: "<<bayar;
	cout<<endl<<endl<<"===========================================";
}