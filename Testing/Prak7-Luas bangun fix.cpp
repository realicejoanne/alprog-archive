#include<iostream>
using namespace std;

void persegi(){
	cout<<"PERSEGI"<<endl;
	cout<<"======="<<endl;
	
	int s=1;
	cout<<"Sisi\t: ";
	cin>>s;
	cout<<endl;
	
	int kel=4*s;
	int luas=s*s;
	cout<<"Keliling = 4 x sisi = "<<"4 x "<<s<<" = "<<kel<<endl;
	cout<<"Luas\t = sisi x sisi = "<<s<<" x "<<s<<" = "<<luas;
}
void persegipanjang(){
	cout<<"PERSEGI PANJANG"<<endl;
	cout<<"==============="<<endl;
	
	int p,l;
	cout<<"Panjang\t: ";
	cin>>p;
	cout<<"Lebar\t: ";
	cin>>l;
	cout<<endl;
	
	int kel=2*(p+l);
	int luas=p*l;
	cout<<"Keliling = 2 x (panjang + lebar) = "<<"2 x ("<<p<<" + "<<l<<") = "<<kel<<endl;
	cout<<"Luas\t = panjang x lebar = "<<p<<" x "<<l<<" = "<<luas;
}
void segitiga(){
	cout<<"SEGITIGA"<<endl;
	cout<<"========"<<endl;
	cout<<"Catatan!!! Hanya berlaku untuk segitiga siku-siku."<<endl<<endl;
	
	float a,t;
	cout<<"Alas\t: ";
	cin>>a;
	cout<<"Tinggi\t: ";
	cin>>t;
	float c;
	if (a>t||a<t) c=sqrt (double((a*a)+(t*t)));
	else if(a=t) c=a*sqrt(double(2));
	cout<<endl;
		
	float kel=a+t+c;
	float luas=a*t/2;
	cout<<"Keliling = alas + tinggi + sisi miring = "<<a<<" + "<<t<<" + "<<c<<" = "<<kel<<endl;
	cout<<"Luas\t = alas x tinggi : 2 = "<<a<<" x "<<t<<" : 2 = "<<luas;
}
void lingkaran()
{
 cout<<"LINGKARAN"<<endl;
	cout<<"========="<<endl;
	int r;
	cout<<"Jari2\t: ";
	cin>>r;
	cout<<endl;
	
	float kel,luas;
	if(r%7==0) {
		kel=2*r*22/7;
		luas=r*r*22/7;
	}
	else {
		kel=2*r*3.14;
		luas=r*r*3.14;
	}
	cout<<"Keliling = 2 x phi x "<<r<<" = "<<kel<<endl;
	cout<<"Luas\t = phi x "<<r<<" x "<<r<<" = "<<luas;
}
void menu(){
	char jawab;
	do{
		int pilih;
		cout<<"1. Persegi\n2. Persegi panjang\n3. Segitiga\n4. Lingkaran"<<endl<<endl;
		cout<<"Pilih angka (1-4): ";
		cin>>pilih;
		cout<<endl;
 
		switch (pilih){
			case 1 : persegi();
				break;
			case 2 : persegipanjang();
				break;
			case 3 : segitiga();
				break;
			case 4 : lingkaran();
				break;
			default : cout<<"Ada kesalahan dalam penginputan.";
				break;
		}
	cout<<endl<<endl<<"Silakan mengulangi atau menyudahi. Pilih (y/n): ";
	cin>>jawab;
 }
while (jawab=='y' || jawab=='Y');
cout<<"Terima Kasih!";
}

int main(){
	cout<<"MARI BELAJAR MENGHITUNG KELILING DAN LUAS BANGUN DATAR"<<endl;
	cout<<"******************************************************"<<endl<<endl;
	menu();
}