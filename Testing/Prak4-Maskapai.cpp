/* 	Nama program	: maskapai
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 3 Okt 2016
	Deskripsi		: dgasghj
************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	int pilih,tiket,bayar;
	cout<<"\tMASKAPAI CYBER"<<endl;
	cout<<"==============================="<<endl<<endl;
	cout<<"Daftar Tujuan"<<endl;
	cout<<"-------------------------------"<<endl;
	
	cout<<"1. Medan\t <20.000/org>"<<endl;
	cout<<"2. Bali\t\t <25.000/org>"<<endl;
	cout<<"3. Jogja\t <10.000/org>"<<endl;
	cout<<"4. Aceh\t\t <30.000/org>"<<endl;
	cout<<"-------------------------------"<<endl;
	
	cout<<"Pilih tujuan Anda: ";
	cin>>pilih;
	cout<<endl;
	
	switch(pilih){
		case 1: cout<<"Tujuan: Medan"<<endl;
			break;
		case 2: cout<<"Tujuan: Bali"<<endl;
			break;
		case 3: cout<<"Tujuan: Jogja"<<endl;
			break;
		case 4: cout<<"Tujuan: Aceh"<<endl;
			break;
		default: cout<<"Nomor salah, silakan masukkan nomor yang tertera di atas."<<endl;
			break;
	}

	cout<<"Input jumlah tiket yang ingin dibeli: ";
	cin>>tiket;
	cout<<endl;
	
	if (pilih==1) bayar=20000*tiket;
	else if (pilih==2) bayar=25000*tiket;
	else if (pilih==3) bayar=10000*tiket;
	else if (pilih==4) bayar=30000*tiket;
	cout<<"Total biaya tiket: "<<"Rp. "<<bayar<<endl;
	
	cout<<endl<<"==============================="<<endl;
	cout<<"Terima kasih telah memilih Maskapai Cyber."<<endl;
	cout<<"Selamat menikmati perjalanan Anda.";
}