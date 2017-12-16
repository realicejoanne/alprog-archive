/*	Nama program	: quiz
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 4 Oktober 2016
	Deskripsi		: dfsdgdfbbntr

****************************************/

#include <iostream.h>
using namespace std;

int main(){
	int pilih;
	cout<<"Emoticon"<<endl<<endl;
	cout<<"1. Happy"<<endl;
	cout<<"2. Sad"<<endl;
	cout<<"3. Bored totally"<<endl;
	cout<<"4. Confused"<<endl;
	
	cout<<endl<<"Input: ";
	cin>>pilih;
	
	switch (pilih){
	case 1: cout<<"(^-^)";
		break;
	case 2: cout<<"(T_T)";
		break;
	case 3: cout<<"(-_-)";
		break;
	case 4: cout<<"(=,=)?";
		break;
	}
}