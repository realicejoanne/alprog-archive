#include <iostream>
using namespace std;

//Transpose
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
}
void transmtx(int& a,int& b,int& c,int& d,mtx& x,mtx& y){
	for(a=0;a<d;++a){
		for(b=0;b<c;++b){
			y[a][b]=x[b][a];
		}
	}
    cout<<endl<<"Transpose matriks A: "<<endl;
	for(a=0;a<d;++a){
		for(b=0;b<c;++b){
			cout<<y[a][b]<<"  ";
            if(b==c-1) cout<<endl;
        }
	}
}
int main(){
	mtx a,trans;
    int r,c,i,j;

	//Input baris kolom
	input(r,c);

	//Input elemen matriks
	elemen(i,j,r,c,a);

	//Output matriks
	outputmtx(i,j,r,c,a);

	//Output transpose matriks
	transmtx(i,j,r,c,a,trans);
}
