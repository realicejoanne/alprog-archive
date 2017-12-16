#include<iostream.h>

//Soal no. 3: permutasi
int faktorial(int angka){
	int fak=1;
	for(int a=1;a<=angka;a++){
		fak=fak*a;
	}
	return fak;
}
int permutasi(int angka1,int angka2){
	int prm=1;
	//cout<<"Faktorial "<<angka1<<": "<<angka1<<"! = "<<faktorial(angka1)<<endl;
	//cout<<"Faktorial "<<angka1-angka2<<": "<<angka1-angka2<<"! = "<<faktorial(angka1-angka2)<<endl;
	prm=faktorial(angka1)/faktorial(angka1-angka2);
	return prm;
}
int output(int n,int r){
	cout<<"Permutasi "<<n<<"P"<<r<<" = "<<permutasi(n,r);
}
	
int main(){
	int a,b;
	cout<<"Input angka pertama: ";
	cin>>a;
	cout<<"Input angka kedua: ";
	cin>>b;
	cout<<endl;

	output(a,b);
}