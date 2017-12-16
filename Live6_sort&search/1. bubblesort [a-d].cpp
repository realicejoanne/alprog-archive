//BUBBLE SORT (DARI KELOMPOK 1)

#include<iostream>
using namespace std;

void swap(int &x, int &y){
		int temp=x;
		x=y;
		y=temp;
}

int main(){
		int n;
		cout<<"Masukkan Jumlah Data= ";
		cin>>n;
		int a[n];
		cout<<"Masukkan Elemen-Elemen Data = ";
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		cout<<"Data Yang Sudah Di Urutkan = ";

		for(int i=n-1;i>0;i--){
			for(int j=0;j<i;j++){
				if(a[j]>a[j+1]){ //kalo descending jadinya if(a[j]<a[j+1])
					swap(a[j],a[j+1]);
				}
			}
		}

		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
}
