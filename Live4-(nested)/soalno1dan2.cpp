#include<iostream.h>
using namespace std;

void fungsi(int a, int&b, int&c){
	    b=++a;
	    c+=b--;
	    a=b+c;	
	    cout<<a<<endl<<b<<endl<<c<<endl;
	}
void soal2studi1(int baris,int kolom){
	for(int i=1;i<=baris;i++){
		for(int j=1;j<=kolom;j++){
			if(i==j||(i+j==6)) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}
void soal2studi2(int p){
	int q,r=0;
	while (p>0) {
		   q=p%10;
		   p/=10;
		   r=10*r+q;
	}
	cout<<"Hasil pembalikan bilangan adalah: "<<r;
}

int main(){
	int  a=2,c=2,b=2,y=2;
	fungsi (c,a,b);
	cout<<endl<<a<<endl<<b<<endl<<c<<endl<<y<<endl;
	cout<<endl;
	fungsi (a+b,c,y);
	cout<<endl<<a<<endl<<b<<endl<<c<<endl<<y<<endl;
	cout<<endl<<"====================================="<<endl<<endl;
	
	int bar,kol;
	cout<<"Masukkan baris: ";
	cin>>bar;
	cout<<"Masukkan kolom: ";
	cin>>kol;
	cout<<endl;
	
	soal2studi1(bar,kol);
	cout<<endl<<"====================================="<<endl<<endl;
	
	int angka;
	cout<<"Masukkan satu bilangan integer positif: ";    
   	cin>>angka;
	
	soal2studi2(angka);
}