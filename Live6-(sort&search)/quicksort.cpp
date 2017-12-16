#include<iostream>
	using namespace std;

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
