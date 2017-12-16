#include <iostream>
using namespace std;

//Penjumlahan baris dan kolom
typedef int mtx[100][100];

void input(int& baris,int& kolom){
	cout<<"Masukkan banyak baris (1-100): ";
    cin>>baris;
	cout<<"Masukkan banyak kolom (1-100): ";
    cin>>kolom;
}
void elemen(int& a,int& b,int& c,int& d,mtx& x){
	cout<<endl<<"Masukkan elemen matriks A: "<<endl;
	for(a=0;a<c;++a){
       for(b=0;b<d;++b){
           cout<<"Elemen "<<a+1<<","<<b+1<<": ";
           cin>>x[a][b];
       }
	}
}
void outputmtx(int& a,int& b,int& c,int& d,mtx& x){
	cout<<endl<<"Matriks A:"<<endl;
	for(a=0;a<c;++a){
       for(b=0;b<d;++b){
            cout<<x[a][b]<<"  ";
            if(b==d-1) cout<<endl;
        }
	}
	cout<<endl;
}
void rcmtx(int& a,int& b,int& c,int& d,mtx& x,int& y){
	for(a=0;a<c;a++){
		for(b=0;b<d;b++)
			y=y+x[a][b];
			cout<<"Jumlah dalam baris ke-"<<a+1<<" = "<<y;
			y=0;
			cout<<endl;
	}
	cout<<endl<<endl;
	for(a=0;a<d;a++){
		for(b=0;b<c;b++)
			y=y+x[b][a];
			cout<<"Jumlah dalam kolom ke-"<<a+1<<" = "<<y;
			y=0;
			cout<<endl;
	}
}
int main(){
	mtx a;
    int r,c,i,j,rc;
	
	//Input baris kolom
	input(r,c);
    
	//Input elemen matriks
	elemen(i,j,r,c,a);
	
	//Output matriks
	outputmtx(i,j,r,c,a);
	
	//Output jumlah baris dan kolom matriks
	rcmtx(i,j,r,c,a,rc);
}