#include<iostream.h>
using namespace std;

int kali(int x, int y){
	if(y==1) return x;
	else return x + kali(x,y-1);
}
int faktorial(int x){
	if (x==1) return x;
	else return x * faktorial(x-1);
}
int fibonacci(int x){
	if(x<=1) return 1;
	else return fibonacci(x-2)+fibonacci(x-1);
}
int main(){
	int a,b,c,d;
	cout<<"Angka pertama\t: ";
	cin>>a;
	cout<<"Angka kedua\t: ";
	cin>>b;
	cout<<"Hasil kali\t: "<<kali(a,b)<<endl<<endl;

	cout<<"Angka faktorial\t: ";
	cin>>c;
	cout<<"Hasil faktorial\t: "<<c<<"! = "<<faktorial(c)<<endl<<endl;

	cout<<"Angka fibonacci\t: ";
	cin>>d;
	cout<<"Hasil fibonacci\t: ";
	for(int i=0;i<d;i++){
		cout<<fibonacci(i)<<" ";
	}
}
