#include<iostream.h>
#include<iomanip.h>

int main(){
//soal no. 1: konversi bilangan
cout<<"===================================================="<<endl;
int x=245;
cout<<dec<<x<<" "<<oct<<x<<" "<<hex<<x<<endl<<endl;
int a=101,b=53;
cout<<dec<<(a&b)<<" "<<oct<<(a&b)<<" "<<hex<<(a&b)<<endl;
cout<<dec<<(a|b)<<" "<<oct<<(a|b)<<" "<<hex<<(a|b)<<endl;
cout<<dec<<(a^b)<<" "<<oct<<(a^b)<<" "<<hex<<(a^b)<<endl;
cout<<dec<<(b>>1)<<" "<<oct<<(b>>1)<<" "<<hex<<(b>>1)<<endl;

//soal no.2: cetak abcde
cout<<endl<<"===================================================="<<endl;
int p,q=1;
char ch='a';
cout<<"Input baris: ";
cin>>p;
cout<<endl;
for(int i=p;i>0;i--){
	cout<<q<<". ";
	for(char ch='a';ch<'a'+i;ch++){
		cout<<ch<<" ";
	}
	p--;
	q++;
	cout<<endl;
}

while(p>0){
	int i=p;
	cout<<q<<". ";
	while(i>0){
		cout<<ch<<" ";
		ch++;
		i--;
	}
	ch='a';
	p--;
	q++;
	cout<<endl;
}
}