#include <iostream>
using namespace std;

void input(int (&a)[100], int &n, int &c){
    cout<<"Masukkan banyaknya data: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Masukkan data ke ["<<i+1<<"] = ";
        cin>>a[i];cout<<endl;
    }
    cout<<"Angka yang akan dicari: ";
	cin>>c;cout<<endl;
}

void cari(int (&a)[100],int n,int c){
    int found=0;
    for(int i=0;i<n;i++){
        if(c==a[i]){
                found=1;
                cout<<"Nilai yang dicari ditemukan di data ke-["<<i+1<<"] pada indeks ke-["<<i<<"]"<<endl;
        }
    }
    if(found==0) cout<<"TIDAK ADA ANGKA YANG DICARI DI DALAM ARRAY DATA"<<endl;
}

void output(int (&a)[100],int n,int c){
    cout<<"ARRAY DATA = [";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl<<endl;
    cari(a,n,c);
}

int main(){
    int angka[100],n,c;
    input(angka,n,c);
    output(angka,n,c);
}
