/* 	Nama program	: max-min-sum-avr
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 17-11-16
	Deskripsi		: latihan1
************************************************************/

#include<iostream>
using namespace std;

typedef int array[100];

void input(int& banyak,array& larik){
	cout<<"Input jumlah angka: ";
	cin>>banyak;
	
	cout<<"Masukkan bilangan: ";
	for(int i=0;i<banyak;i++){
		cin>>larik[i];
	}
	cout<<endl;
}
void maximum(int& banyak, array& larik, int& max){
	for(int i=0;i<banyak;i++){
		if(max<larik[i]) max=larik[i];
	}
	cout<<"Nilai Max\t: "<<max<<endl;
}
void minimum(int& banyak, array& larik, int& min){
	for(int i=0;i<banyak;i++){
		if(min>larik[i]) min=larik[i];
	}
	cout<<"Nilai Min\t: "<<min<<endl;
}
void jumlah(int& banyak, array& larik, int& sum){
	for(int i=0;i<banyak;i++){
		sum=sum+larik[i];
	}
	cout<<"Nilai Sum\t: "<<sum<<endl;
}
void rata(int& banyak, array& larik, int& sum,float& avr){
	avr=float(sum)/banyak;
	cout<<"Nilai Average\t: "<<avr;
}
int main(){
	int n,max=0,min,sum=0;
	array x;
	float avr;
	
	//input
	input(n,x);
	
	//max
	maximum(n,x,max);
	
	//min
	minimum(n,x,min);
	
	//sum
	jumlah(n,x,sum);
	
	//avr
	rata(n,x,sum,avr);
}