/* 	Nama program	: Lagu Anak Ayam
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 22 September 2016
	Deskripsi		: lagi bahas tentang for/while/do while
************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	int x,jmlh;
	cout<<"Mari bernyanyi lagu anak ayam!"<<endl;
	cout<<"==============================="<<endl;
	cout<<"Masukkan jumlah anak ayam: ";
	cin>>jmlh;
	cout<<"==============================="<<endl;
	for(x=jmlh;x>0;x--){
		if (x>1) cout<<"Anak ayam turun "<<x<<" mati satu tinggal "<<x-1<<endl;
		else if (x=1)cout<<"Anak ayam turun 1 mati satu tinggal induknya"<<endl;
	}
}