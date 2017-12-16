#include <iostream.h>
#include <string.h>
using namespace std;

main (){
	int pilih,jamm,menm,detm,jamk,menk,detk,kel,mas,tot,jam,sisj,men,det,bayar,jumlah;
	string nama,identitas;
	cout<<"CYBER KARAOKEMANIA"<<endl;
	cout<<"=================="<<endl<<endl;
	
	cout<<"Selamat datang di CYBER KARAOKEMANIA!"<<endl<<endl;
	cout<<"Masukkan nama Anda: ";
	getline(cin, nama);
	cout<<"Masukkan nomor identitas: ";
	getline(cin, identitas);
	cout<<endl<<"=================="<<endl<<endl;
	
	cout<<"Masukkan jam masuk: ";
	cin>>jamm;
	cout<<"Masukkan menit masuk: ";
	cin>>menm;
	cout<<"Masukkan detik masuk: ";
	cin>>detm;
	cout<<"Anda masuk pada "<<"jam "<<jamm<<" lewat "<<menm<<" menit "<<detm<<" detik";
	cout<<endl<<endl<<"==========================================="<<endl<<endl;

	cout<<"1. Potret - I Just Wanna Say I Love You"<<endl;
	cout<<"2. Kuburan - Lupa Lupa Ingat"<<endl;
	cout<<"3. Olga Syahputra - Hancur Hatiku"<<endl;
	cout<<"Pilih lagu yang ingin dinyanyikan: ";
	cin>>pilih;
	
	switch (pilih){
		case 1: cout<<endl;
				jumlah=16;
				 for(int i=1; i<=jumlah; i++){
				  cout<<"I just wanna say I love you";
				  if (i==4||i==8) cout<<" "<<endl<<endl;
					  else if (i==11) cout<<" I love you I love you"<<endl<<endl;
					  else if (i==14) cout<<" I love you"<<endl<<endl;
					else cout<<endl;
					}
			break;
			
		case 2: cout<<endl;
				jumlah=7;
				for(int i=1;i<=jumlah;i++){
				if (i==1||i==2) cout<<"Lupa, lupa lupa lupa, lupa lagi syairnya"<<endl;
					else if (i==3||i==4) cout<<"Ingat, ingat ingat ingat, cuma ingat kuncinya"<<endl;
					else if (i==5) cout<<endl<<"C A minor D minor ke G, ke C lagi"<<endl;
				else cout<<"A minor D minor ke G, ke C lagi"<<endl;
				}
			break;
			
		case 3: cout<<endl;
				jumlah=9;
				for (int i=1; i<=jumlah; i++){
				cout<<"Hancur hancur ";
				if (i==1||i==2||i==3) cout<<"hatiku"<<endl;
					else if (i==4) cout<<"hatiku"<<endl<<endl;
					else if (i==5) cout<<"hancur hancur hatiku"<<endl;
					else if (i==6) cout<<"hancur hancur hatiku"<<endl<<endl;
					else if (i==7||i==8||i==9) cout<<"hancur hatiku"<<endl;
				}
				cout<<endl<<"Hatiku hancur"<<endl;
			break;
			
	default: cout<<endl<<"Terjadi kesalahan. Silakan pilih angka yang tersedia dengan mereset program ini."<<endl;
			break;
	}
	
	cout<<endl<<"==========================================="<<endl<<endl;
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
	cout<<"Anda telah karaoke selama ";
	cout<<tot<<" detik";
	
	jam=tot/3600;
	sisj=tot%3600;
	men=sisj/60;
	det=sisj%60;
	
	cout<<endl<<"Atau selama "<<jam<<" jam "<<men<<" menit "<<det<<" detik";
	cout<<endl<<endl<<"==========================================="<<endl<<endl;
	
	if (men>=1||det>=1) bayar=10000*(jam+1);
		else bayar=10000*jam;
	
	cout<<"Biaya karaoke yang harus dibayar: "<<bayar;
	cout<<endl<<endl<<"Terima kasih telah memilih CYBER KARAOKEMANIA. Silakan datang kembali :)";
}