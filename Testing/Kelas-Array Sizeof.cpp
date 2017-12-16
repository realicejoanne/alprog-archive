#include<iostream.h>

main(){

	int data[5];
	int n;

	   cout<<"Banyak data : "; cin>>n;

	   for (int i=0; i<n; i++) {                 // isi data array
        cout<<"Data  :"; cin>>data[i];
	   }

	   for(int i=0; i<n; i++) {                  // print array
       cout<<"Data"<<i+1<<"="<<data[i];
	   cout<<endl;
	   }

	/*
	int data[]  = {11, 22, 33, 44, 55};
		int n;
		n = sizeof(*data);
		for(int i=0;i<=n;i++) {
		   cout<<"Data "<<i+1<<"="<<data[i] <<" ";
		}
	*/
}
