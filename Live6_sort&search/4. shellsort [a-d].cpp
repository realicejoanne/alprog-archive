#include<iostream>
	using namespace std;

typedef int larik [10];

void shellSort(int a[],int n){
	int j;

	//Pengurangan jarak/gap sebanyak 2
	for(int gap=n/2;gap>0;gap/=2){
		for(int i=gap;i<n;i++){
		   int temp=a[i];
			   for (j=i;j>=gap&&temp<a[j-gap];j-=gap){ //kalo descending jadinya for (j=i;j>=gap&&temp>a[j-gap];j-=gap)
				  a[j]=a[j-gap];
				}
		a[j] = temp;
		}
	}
}

void banyakData(int& nData){
    cout<<"Banyak Data: ";
    cin>>nData;
}

void isi(larik& x,int nData){
    for(int i=0;i<nData;i++){
        cout<<"Data ke-["<<i+1<<"]: ";
		cin>>x[i];
    }
}

void cetakLarik(larik x, int nData){
    cout<<"Kondisi Awal Larik: ";
    for(int i=0;i<nData;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    cout<<"Setelah Shell Sort: ";
    shellSort(x,nData);
    for(int i=0;i<nData;i++){
        cout<<x[i]<<" ";
    }
}

int main(){
    larik x;
    int nData;
    banyakData(nData);
    isi(x,nData);
    cetakLarik(x,nData);
}
