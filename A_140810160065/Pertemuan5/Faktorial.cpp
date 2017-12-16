/* 	Nama program	: faktorial
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 9 Oktober 2016
	Deskripsi		: dsfsdggsfg
************************************************************/

#include <iostream.h>
using namespace std;

int main(){
	cout<<"Program Faktorial Bilangan"<<endl;
	cout<<"--------------------------"<<endl;
	
	int n,fak=1;

	cout<<"Masukkan angka: ";
	cin>>n;
	cout<<endl;

    for(int a=1;a<=n;a++)
     {
         fak=fak*a;
     }
	
	cout<<n<<"!"<<endl;
	cout<<n;
	for(int x=n;x>0;x--){
		if (x>1) cout<<"x"<<x-1;
		else if (x=1)cout<<"=";
	}
	
	cout<<fak;
}