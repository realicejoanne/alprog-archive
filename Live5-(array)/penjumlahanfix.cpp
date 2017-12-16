#include <iostream>
using namespace std;

//Penjumlahan
typedef int mtx[100][100];

void input(int& baris,int& kolom){
	cout<<"Masukkan banyak baris (1-100): ";
    cin>>baris;
	cout<<"Masukkan banyak kolom (1-100): ";
    cin>>kolom;
}
void elemen(int& a,int& b,int& c,int& d,mtx& x,mtx& y){
	cout<<endl<<"Masukkan elemen matriks A: "<<endl;
	for(a=0;a<c;++a){
       for(b=0;b<d;++b){
           cout<<"Elemen "<<a+1<<","<<b+1<<": ";
           cin>>x[a][b];
       }
	}
    cout<<endl<<"Masukkan elemen matriks B: "<<endl;
    for(a=0;a<c;++a){
       for(b=0;b<d;++b){
           cout<<"Elemen "<<a+1<<","<<b+1<<": ";
           cin>>y[a][b];
       }
	}
}
void outputmtx(int& a,int& b,int& c,int& d,mtx& x,mtx& y){
	cout<<endl<<"Matriks A:"<<endl;
	for(a=0;a<c;++a){
       for(b=0;b<d;++b){
            cout<<x[a][b]<<"  ";
            if(b==d-1) cout<<endl;
        }
	}
	cout<<endl<<"Matriks B:"<<endl;
	for(a=0;a<c;++a){
       for(b=0;b<d;++b){
            cout<<y[a][b]<<"  ";
            if(b==d-1) cout<<endl;
        }
	}
}
void summtx(int& a,int& b,int& c,int& d,mtx& x,mtx& y,mtx& z){
	for(a=0;a<c;++a){
		for(b=0;b<d;++b){
			z[a][b]=x[a][b]+y[a][b];
		}
	}
    cout<<endl<<"Jumlah matriks A dan B: "<<endl;
	for(a=0;a<c;++a){
		for(b=0;b<d;++b){
			cout<<z[a][b]<<"  ";
            if(b==d-1) cout<<endl;
        }
	}
}
int main(){
	mtx a,b,sum;
    int r,c,i,j;
	
	//Input baris kolom
	input(r,c);
    
	//Input elemen matriks
	elemen(i,j,r,c,a,b);
	
	//Output matriks
	outputmtx(i,j,r,c,a,b);
	
	//Output jumlah matriks
	summtx(i,j,r,c,a,b,sum);
}