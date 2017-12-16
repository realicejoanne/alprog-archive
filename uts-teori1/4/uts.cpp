#include<iostream.h>

//Soal no. 4
void fungsi(int a,int& b,int& c){
	int y=1;
	a=a*b++;
	c=b+y;
	cout<<a<<" "<<b<<" "<<c<<" "<<y<<endl;
}

main(){
	//Soal no. 4a
	int a=2,b=3,c=3,y=2;
	fungsi(a+b,c,y);
	cout<<a<<" "<<b<<" "<<c<<" "<<y<<endl;
	fungsi(b,a,c);
	cout<<a<<" "<<b<<" "<<c<<" "<<y<<endl;
	
	//Soal no. 4b
	cout<<endl<<"===================================================="<<endl;
	int i,j,x=0;
	for(i=0;i<6;++i){
		for(j=0;j<i;++j){
			switch(i+j-1){
			case -1:
			case 0:
				x+=1;
				break;
			case 1:
			case 2:
			case 3:
				x+=2;
				break;
			default:
				x+=3;
			}
			cout<<" "<<x;
		}
		cout<<"\nx= "<<x;
	}
}