#include <iostream.h>
#include <string.h>
using namespace std;

int main () {
	cout<<"Identitas Diri Mahasiswa Unpad 2016" <<endl<<endl;
	
	string nama,NPM,TTL,goldar,sekolah;
	
	cout<<"Nama Lengkap\t: ";
	getline(cin, nama);
	cout<<"NPM\t\t: ";
	getline(cin, NPM);
	cout<<"TTL\t\t: ";
	getline(cin, TTL);
	cout<<"Golongan Darah\t: ";
	getline(cin, goldar);
	cout<<"Asal Sekolah\t: ";
	getline(cin, sekolah);
	
	cout<<endl<<"Terima kasih telah mengisi. Silakan keluar.";
	
}