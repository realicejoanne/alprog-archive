#include<iostream>
using namespace std;

//===bubble sort [klmpk 1]===
/*
#include<iostream.h>
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
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}

	for(int j=0;j<n;j++){
	cout<<a[j]<<" ";
	}
}
*/
//===selection sort [klmpk 2]===
/*
int main(){
	typedef int angka[100];
	
	int i,j,n,temp,minindex;
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
		minindex=i;
		for(j=i+1; j<n; j++){
			if(x[minindex]>x[j]){
				minindex=j;
			}
		}
		temp=x[i];
		x[i]=x[minindex];
		x[minindex]=temp;
	}
	cout<<endl<<"Data setelah di sort: ";

	for(i=0; i<n; i++){
		cout<<x[i]<<" ";
	}
}
*/
//===insertion sort [klmpk 3]===
/*
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
            if (x[j]<x[j-1]){
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
	isiData(x, nData);
	InsertionSort(x, nData);
}
*/

//===shell sort [klmpk 4]===
/*
typedef int larik [10];
 
void swap(int &x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void shellSort(int a[],int n){
	int j;
 
	//Pengurangan jarak/gap sebanyak 2
	for(int gap=n/2;gap>0;gap/=2){
		for(int i=gap;i<n;i++){
		   int temp=a[i];
			   for (j=i;j>=gap&&temp<a[j-gap];j-=gap){
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
*/
//===merge sort===
/*
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
*/
//===quick sort===
/*
void input(int (&a)[1000],int &n){
    cout<<"Input banyaknya data: ";
    cin>>n;
	cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Masukkan data ke ["<<i+1<<"]= ";
        cin>>a[i];
    }
}
 
void urut(int (&a)[1000],int n){
    int tukar,temp;
    for(int i=1;i<=n;i++){
        tukar=0;
        for(int j=0;j<n-1;j++){
            if(a[j+1]<a[j]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                tukar=1;
            }
        }
    }
}
 
void output(int (&a)[1000],int n){
    urut(a,n);
    cout<<"Setelah disortir menjadi = [ ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl<<endl;
}

int main(){
    int ang[1000],n;
    input(ang,n);
    output(ang,n);
}
*/
//===linear search [klmpk 5]===
/*
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
*/
//binary search [klmpk 6]===
/*
int main(){
    int n,temp,find,low,high,mid,indeks;
    cout<<"Binary Search"<<endl;
    cout<<"============="<<endl;
    cout<<"\nMasukan jumlah elemen yang ingin dimasukkan: ";
    cin>>n;
    int array[n];
    cout<<"\nMasukan elemen-elemennya:"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
   
    cout<<"\nSetelah diurutkan:"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array [j+1]=temp;
            }
        }
    }
   
    for (int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
   
    cout<<"\n\nMasukan angka yang ingin dicari: "<<endl;
    cin>>find;

    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(array[mid]==find){
            indeks=mid+1;
            break;
        }
        else if(array[mid]>find){
            high=mid-1;
        }
        else if(array[mid]<find){
            low=mid+1;
        }
    }
    
    cout<<endl<<find<<" berada di indeks ke-"<<indeks;
}
*/