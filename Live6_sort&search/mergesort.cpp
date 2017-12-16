#include <iostream>
using namespace std;

int a[50];
void merge(int,int,int);
void merge_sort(int bawah,int atas){
	int tengah;
	if(bawah<atas){
		tengah=(bawah+atas)/2;
		merge_sort(bawah,tengah);
		merge_sort(tengah+1,atas);
		merge(bawah,tengah,atas);
	}
}
void merge(int bawah,int tengah,int atas){
	int h,i,j,b[50],k;
	h=bawah;
	i=bawah;
	j=tengah+1;

	while((h<=tengah)&&(j<=atas)){
	if(a[h]<=a[j]){
		b[i]=a[h];
		h++;
	}
	else{
	   b[i]=a[j];
	   j++;
	}
	i++;
	}
	if(h>tengah){
		for(k=j;k<=atas;k++){
		   b[i]=a[k];
		   i++;
		}
	}
	else{
		for(k=h;k<=tengah;k++){
		   b[i]=a[k];
		   i++;
		}
	}
	for(k=bawah;k<=atas;k++){
		a[k]=b[k];
	}
}

int main(){
	int angka,i;
	cout<<"                             MERGE SORT PROGRAM"<<endl;
	cout<<"********************************************************************************"<<endl;
	cout<<"Masukkan Banyaknya Angka yang Diinginkan: ";
	cin>>angka;
	cout<<endl;
	cout<<"Masukkan Nilai dari "<< angka <<" Angka Tersebut: "<<endl;
	for(i=1;i<=angka;i++){
	  cin>>a[i] ;
	}
	merge_sort(1,angka);
	cout<<endl;
	cout<<"Hasil Pengurutan Menggunakan Merge Sort: "<<endl;
	for(i=1;i<=angka;i++){
		cout<<a[i]<<" ";
	}
}
