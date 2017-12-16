#include<iostream>
using namespace std;

int main(){
	typedef int angka[100];

	int i,j,n,temp,index;
	angka x;

	cout<<"Program Selection Sort"<<endl<<endl;
	cout<<"Masukkan banyak data: ";
	cin>>n;

	cout<<endl<<"Masukkan data:\n";
	for(i=0; i<n; i++){
		cout<<"x["<<i+1<<"] = ";
		cin>>x[i];
	}
	cout<<endl<<"Data sebelum di sort: ";

	for(i=0; i<n;i++){
		cout<<x[i]<<" ";
	}

	for(i=0; i<n-1; i++){
		index=i;
		for(j=i+1; j<n; j++){
			if(x[index]>x[j]){ //kalo descending jadinya if(x[index]<x[j])
				index=j;
			}
		}
		temp=x[i];
		x[i]=x[index];
		x[index]=temp;
	}
	cout<<endl<<"Data setelah di sort: ";

	for(i=0; i<n; i++){
		cout<<x[i]<<" ";
	}
}
