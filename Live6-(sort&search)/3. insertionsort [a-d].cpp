#include<iostream>
using namespace std;

typedef int larik[10];

void swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

void insertionSort(larik x,int n) {
	for(int i=1;i<n;i++) {
        		for(int j=i;j>=1;j--){
          			 if (x[j]<x[j-1]){ //kalo descending jadinya if (x[j]>x[j-1])
               		 swap(x[j],x[j-1]);
           		 }
            		else{
				break;
			}
		}
    	}
}

void banyakData(int& nData){
	cout<<"Banyak Data: ";
	cin>>nData;
}

void isiLarik(larik& x, int nData){
	char nama[20];
	for(int i=0;i<nData;i++) {
		cout<<"Data ke-["<<i+1<<"]: ";
		cin>>x[i];
    }
}

void InsertionSort(larik x, int nData){
	cout<<"\nKondisi Awal:\n";
	for(int i=0;i<nData;i++) {
		cout<<x[i]<<"  ";
	}
	cout<<"\nSetelah Insertion Sort:\n";
	insertionSort(x, nData);
	for(int i=0;i<nData;i++) {
		cout<<x[i]<<"  ";
	}
}

int main(){
	larik x;
	int nData;
	banyakData(nData);
	isiLarik(x, nData);
	InsertionSort(x, nData);
}
