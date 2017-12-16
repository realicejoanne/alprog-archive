/* 	Nama program	: urut angka
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 17-11-16
	Deskripsi		: latihan3
************************************************************/

#include<iostream>
using namespace std;

typedef int array[100];

void input(int& banyak,array& larik){
	cout<<"Input jumlah angka: ";
	cin>>banyak;
	
	cout<<"Input elemen: ";
	for(int i=0;i<banyak;i++){
		cin>>larik[i];
	}
	cout<<endl;
}
void urut(int& banyak,array& larik) {
	int posisi;
	cout<<"Hasil: ";
	for (int i=0;i<banyak-1;i++){
		posisi=i;
		for (int j=i+1;j<banyak;j++) {
			if (larik[posisi]>larik[j]) {
				posisi=j; 
			}
		}
		swap(larik[i],larik[posisi]);
	}
	for (int i=0;i<banyak;i++){
		cout<<larik[i]<<" ";
	}
}

int main(){
	int n;
	array x;
	
	//input
	input(n,x);
	
	//urut
	urut(n,x);
}