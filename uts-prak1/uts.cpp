#include<iostream.h>

int main(){
    //soal no. 1
	cout<<"=============================================================="<<endl;
	cout<<"Nama\t: Patricia Joanne"<<endl;
	cout<<"NPM\t: 140810160065"<<endl<<endl;
	cout<<"Saya berjanji tidak akan melakukan kecurangan dalam ujian ini.";

	//soal no. 2
	cout<<endl<<"=============================================================="<<endl;
	int a,b;
	cout<<"Bilangan awal\t: ";
	cin>>a;
	cout<<"Bilangan akhir\t: ";
	cin>>b;
	cout<<endl;

	if (a%2==1){
		cout<<"Bilangan ganjil antara ("<<a<<"-"<<b<<") adalah\t: "<<endl;
		for(int i=a+2;i<=b;i+=2){
			cout<<i<<" ";
		}
		cout<<endl<<endl<<"Bilangan genap antara ("<<a<<"-"<<b<<") adalah\t: "<<endl;
		for (int j=a+1;j<=b;j+=2){
			cout<<j<<" ";
		}
	}
	else if (a%2==0){
		cout<<"Bilangan ganjil antara ("<<a<<"-"<<b<<") adalah\t: "<<endl<<endl;
			for(int i=a+1; i<=b; i+=2){
				cout<<i<<" ";
			}
			cout<<endl<<endl<<"Bilangan genap antara ("<<a<<"-"<<b<<") adalah\t: "<<endl<<endl;
			for (int j=a+2; j<=b; j+=2){
				cout<<j<<" ";
			}
	}

	//soal no. 3
	cout<<endl<<"=============================================================="<<endl;
	int n;
	cout<<"Input bilangan 1-100: ";
	cin>>n;

	if(n>=1&&n<=100){
		if(n!=1){
			if(n!=2&&n!=3&&n!=5&&n!=7){
				if(n%2==0||n%3==0||n%4==0||n%5==0||n%6==0||n%7==0||n%8==0||n&9==0){
					cout<<"Bukan angka prima!";
				}
				else cout<<"Angka prima!";
			}
			else cout<<"Angka prima!";
		}
		else cout<<"Bukan angka prima!";
	}
	else cout<<"Bukan angka 1-100!";

	//soal no. 4
	cout<<endl<<"=============================================================="<<endl;
	int x;
	cout<<"Input baris: ";
	cin>>x;
	cout<<endl;

	for (int i=1;i<=x;i++){
		for (int j=1;j<=(x*2)-1;j+=1){
			if (i+j==x+1||j-i==x-1||(i==x&&j%2!=0)){
				cout<<"*";
			}
			else cout<<" ";
		}
		cout<<endl;
	}
}
