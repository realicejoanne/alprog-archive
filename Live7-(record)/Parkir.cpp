/* 	Nama program	: program parkir pakai record waktu
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 07-12-16
	Deskripsi		: materi record soal no. 2
************************************************************/

#include <iostream>
using namespace std;

struct waktu{
	int jam,men,det;
};
void inputmasuk(waktu& msk){
	cout<<"Masukkan jam masuk: ";
	cin>>msk.jam;
	cout<<"Masukkan menit masuk: ";
	cin>>msk.men;
	cout<<"Masukkan detik masuk: ";
	cin>>msk.det;
	cout<<"Anda masuk pada "<<"jam "<<msk.jam<<" lewat "<<msk.men<<" menit "<<msk.det<<" detik";
	cout<<endl<<endl<<"==========================================="<<endl<<endl;
}
void inputkeluar(waktu& kel){
	cout<<"Masukkan jam keluar: ";
	cin>>kel.jam;
	cout<<"Masukkan menit keluar: ";
	cin>>kel.men;
	cout<<"Masukkan detik keluar: ";
	cin>>kel.det;
	cout<<"Anda keluar pada "<<"jam "<<kel.jam<<" lewat "<<kel.men<<" menit "<<kel.det<<" detik";
	cout<<endl<<endl<<"==========================================="<<endl<<endl;
}
void lamadet(waktu& msk,waktu& kel,int& tot){
	int out=kel.jam*3600+kel.men*60+kel.det;
	int in=msk.jam*3600+msk.men*60+msk.det;
	tot=out-in;
	cout<<"Anda telah parkir selama ";
	cout<<tot<<" detik";
}
void lamaparkir(waktu& wkt,int& tot){
	wkt.jam=tot/3600;
	int sisj=tot%3600;
	wkt.men=sisj/60;
	wkt.det=sisj%60;
	
	cout<<endl<<"Atau selama "<<wkt.jam<<" jam "<<wkt.men<<" menit "<<wkt.det<<" detik";
	cout<<endl<<endl<<"==========================================="<<endl<<endl;
}
void bayar(waktu& wkt,int& byr){
	if (wkt.men>=1||wkt.det>=1) byr=3000*(wkt.jam+1);
		else byr=3000*wkt.jam;
	
	cout<<"Biaya parkir yang harus dibayar: "<<byr;
	cout<<endl<<endl<<"===========================================";
}
int main(){
	waktu msk,kel,wkt;
	int tot,byr;
	cout<<"Program Penghitung Biaya Parkir di Jatos"<<endl;
	cout<<endl<<"==========================================="<<endl<<endl;
	
	//input masuk
	inputmasuk(msk);

	//input keluar
	inputkeluar(kel);
	
	//lama parkir dalam detik
	lamadet(msk,kel,tot);
	
	//lama parkir dalam jam menit detik
	lamaparkir(wkt,tot);
	
	//bayar parkir
	bayar(wkt,byr);
}