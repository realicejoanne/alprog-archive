#include <iostream>
using namespace std;

//Perkalian
typedef int mtx[100][100];

void input(int& baris1,int& baris2,int& kolom1,int& kolom2){
	cout<<"Masukkan banyak baris matriks A (1-100): ";
    cin>>baris1;
	cout<<"Masukkan banyak kolom matriks A (1-100): ";
    cin>>kolom1;
	cout<<"Masukkan banyak baris matriks B (1-100): ";
    cin>>baris2;
	cout<<"Masukkan banyak kolom matriks B (1-100): ";
    cin>>kolom2;
	if(kolom1!=baris2){
        cout<<endl<<"Error! Kolom matriks A harus sama dengan baris matriks B."<<endl;
		input(baris1,baris2,kolom1,kolom2);
    }
}
void elemen(int& a,int& b,int& c1,int& c2,int& d1,int& d2, mtx& x,mtx& y){
	cout<<endl<<"Masukkan elemen matriks A: "<<endl;
	for(a=0;a<c1;++a){
       for(b=0;b<d1;++b){
           cout<<"Elemen "<<a+1<<","<<b+1<<": ";
           cin>>x[a][b];
       }
	}
    cout<<endl<<"Masukkan elemen matriks B: "<<endl;
    for(a=0;a<c2;++a){
       for(b=0;b<d2;++b){
           cout<<"Elemen "<<a+1<<","<<b+1<<": ";
           cin>>y[a][b];
       }
	}
}
void outputmtx(int& a,int& b,int& c1,int& c2,int& d1,int& d2,mtx& x,mtx& y){
	cout<<endl<<"Matriks A:"<<endl;
	for(a=0;a<c1;++a){
       for(b=0;b<d1;++b){
            cout<<x[a][b]<<"  ";
            if(b==d1-1) cout<<endl;
        }
	}
	cout<<endl<<"Matriks B:"<<endl;
	for(a=0;a<c2;++a){
       for(b=0;b<d2;++b){
            cout<<y[a][b]<<"  ";
            if(b==d2-1) cout<<endl;
        }
	}
}
void mulmtx(int& a,int& b,int& c,int& c1,int& c2,int& d1,int& d2,mtx& x,mtx& y,mtx& mul){
	for(a=0;a<c1;++a){
       for(b=0;b<d2;++b){
            mul[a][b]=0;
        }
	}
	for(a=0;a<c1;++a){
       for(b=0;b<d2;++b)
            for(c=0;c<d1;++c){
                mul[a][b]+=x[a][c]*y[c][b];
            }
	}
	cout<<endl<<"Hasil kali matriks A dan B: "<<endl;
	for(a=0;a<c1;++a){
		for(b=0;b<d2;++b){
			cout<<mul[a][b]<<"  ";
            if(b==d2-1) cout<<endl;
        }
	}
}
int main(){
	mtx a,b,mul;
    int r1,r2,c1,c2,i,j,k;
	
	//Input baris kolom
	input(r1,r2,c1,c2);
    
	//Input elemen matriks
	elemen(i,j,r1,r2,c1,c2,a,b);
	
	//Output matriks
	outputmtx(i,j,r1,r2,c1,c2,a,b);
	
	//Output hasil kali matriks
	mulmtx(i,j,k,r1,r2,c1,c2,a,b,mul);
}