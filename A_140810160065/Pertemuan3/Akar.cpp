/* 	Nama program	: akar
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 26 September 2016
	Deskripsi		: syalala
************************************************************/

#include <iostream.h>
#include <math.h>
using namespace std;

int main(){
	int a,b,c,x,y;
	float det;

	cout<<"Program Penghitung Akar Persamaan Kuadrat"<<endl;
	cout<<"========================================="<<endl;

	cout<<"Masukkan koefisien 1: ";
	cin>>a;
	cout<<"Masukkan koefisien 2: ";
	cin>>b;
	cout<<"Masukkan koefisien 3: ";
	cin>>c;

	det=b*b-4*a*c;
	x=(-b+sqrt(det))/2*a;
	y=(-b-sqrt(det))/2*a;

	if(det==0) cout<<"Akar persamaannya "<<x;
		else if(det>0) cout<<"Akar persamaannya "<<x<<" dan "<<y;
		else if(det<0) cout<<"Akar persamaannya imajiner";
}
