#include<iostream.h>

//Soal no. 5: huruf mutu

/* 	A = 81-100
	B = 71-80
	C = 56-70
	D = 0-55
*/
int akhir(int a,int b,int c,int d,int e){
	int nilai;
	nilai=0.2*a+0.2*b+0.2*c+0.2*d+0.2*e;
	
	return nilai;
}
int output(int i,int j,int k,int l, int m){
	int fix;
	fix=akhir(i,j,k,l,m);
	
	if(fix>=0&&fix<=100){
		if(fix>80&&fix<=100) cout<<"HM: A";
		else if(fix>70&&fix<=80) cout<<"HM: B";
		else if(fix>55&&fix<=70) cout<<"HM: C";
		else if(fix>=0&&fix<=55) cout<<"HM: D\nAnda gagal dan harus mengulang.";
	}
	else cout<<"Ada kesalahan dalam penginputan.";
}
	
int main(){
	int uji1,uji2,uji3,bim1,bim2;
	cout<<"Penguji 1\t: ";
	cin>>uji1;
	cout<<"Penguji 2\t: ";
	cin>>uji2;
	cout<<"Penguji 3\t: ";
	cin>>uji3;
	cout<<"Pebimbing 1\t: ";
	cin>>bim1;
	cout<<"Pembimbing 2\t: ";
	cin>>bim2;
	cout<<endl;
	
	output(uji1,uji2,uji3,bim1,bim2);
}