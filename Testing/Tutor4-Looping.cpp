#include<iostream.h>

int main(){
	for(int i=1;i<=5;i++){
		cout<<i;
		cout<<endl;
	}
	
	int x;
	cin>>x;
	cout<<endl;
	
	for(int i=1;i<=x;i++){
		for(int j=1;j<=i;j++){
			if (j%2==0) cout<<"#";
			else cout<<"*";
		}
		cout<<endl;
	}
}

/*

*
*#
*#*
*#*#
*#*#*

*
*#
**#
**##
***##

*/