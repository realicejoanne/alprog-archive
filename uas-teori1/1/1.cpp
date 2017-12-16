#include<iostream>
using namespace std;

//Soal no. 1
void fungsiloop1(int n){
	for(int i=0;i<n;i++){
		if(i%2==0) cout<<i+1<<endl;
		else if(i%3==0) continue;
		else if(i%5==0) break;
		cout<<"Akhir dalam loop"<<endl;
	}
	cout<<"Akhir luar loop"<<endl;
}
void fungsiloop2(int n){
	int i=1;
	while(i<n){
		if(i<3) i+=2;
		else cout<<(i++)<<endl;
		cout<<"Akhir loop"<<endl;
	}
	cout<<endl<<"i="<<i;
}
int main(){
	cout<<"Soal no. 1a"<<endl;
	cout<<"==========="<<endl;
	fungsiloop1(8);
	cout<<endl<<"Soal no. 1b"<<endl;
	cout<<"==========="<<endl;
	fungsiloop2(7);
}