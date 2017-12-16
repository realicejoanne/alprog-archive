#include <iostream>
using namespace std;

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
    for (int i=n-1;i>0;i--){
        for (int j=0;j<i;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array [j+1]=temp;
            }
        }
    }

    for (int j=0;j<n;j++){
        cout<<array[j]<<" ";
    }

    cout<<"\n\nMasukan angka yang ingin dicari: "<<endl;
    cin>>find;

    low=0;
    high=n;
    while(low<=high){
        mid=(low+high)/2;
        if(array[mid]==find){
            indeks=mid+1;
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
