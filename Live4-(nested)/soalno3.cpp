#include<iostream.h>
using namespace std;

int fak(int n) {
	int fak=1;
	for(int a=1;a<=n;a++){
		fak=fak*a;
	}
	cout<<n<<"!"<<endl;
	cout<<"Faktorial: "<<fak<<endl;
	cout<<endl<<"================="<<endl;
}
int prm(int a,int b){
	int prm=1,faka=1,fakb=1,bb;
	for(int test=1;test<=a;test++){
		faka=faka*test;
	}
	bb=a-b;
	for(int test=1;test<=bb;test++){
		fakb=fakb*test;
	}
	cout<<a<<"P"<<b<<endl;
	prm=faka/fakb;
	cout<<"Permutasi: "<<prm<<endl;
}
int kom(int a,int b){
	int kom=1,faka=1,fakb=1,fakc=1,c;
	for(int test=1;test<=a;test++){
		faka=faka*test;
	}
	for(int test=1;test<=b;test++){
		fakb=fakb*test;
	}
	c=a-b;
	for(int test=1;test<=c;test++){
		fakc=fakc*test;
	}
	cout<<a<<"C"<<b<<endl;
	kom=faka/(fakb*fakc);
	cout<<"Kombinasi: "<<kom<<endl;
	cout<<endl<<"================="<<endl;
}

int main(){
	int angka;
	cout<<"Program faktorial, permutasi, dan kombinasi"<<endl<<endl;
	cout<<"==========================================="<<endl<<endl;
	cout<<"Masukkan angka: ";
	cin>>angka;
	cout<<endl;

	fak(angka);
	cout<<endl;

	int bil1,bil2;
	cout<<"Masukkan angka n: ";
	cin>>bil1;
	cout<<"Masukkan angka r: ";
	cin>>bil2;
	cout<<endl;

	prm(bil1,bil2);
	cout<<endl;
	kom(bil1,bil2);
}
