#include<iostream.h>
using namespace std;

/* int main(){
	for (int i=1;i<=16;i++){
		for (int j=1;j<=14;j++){
			if ((i==1&&j==6)||(i==1&&j==7)||(i==1&&j==8)||(i==1&&j==9)) cout<<"$";
			else if ((i==2&&j==7)||(i==2&&j==8)||(i==3&&j==7)||(i==3&&j==8)||(i==4&&j==7)||(i==4&&j==8)) cout<<"$";
			else if ((i==5&&j==6)||(i==5&&j==9)||(i==6&&j==5)||(i==6&&j==10)||(i==7&&j==4)||(i==7&&j==11)||(i==8&&j==3)||(i==8&&j==12)) cout<<"$";
			else if ((i==9&&j==2)||(i==10&&j==2)||(i==11&&j==2)||(i==12&&j==2)||(i==13&&j==2)) cout<<"$";
			else if ((i==9&&j==13)||(i==10&&j==13)||(i==11&&j==13)||(i==12&&j==13)||(i==13&&j==13)) cout<<"$";
			else if ((i==14&&j==3)||(i==14&&j==12)||(i==15&&j==4)||(i==15&&j==11)) cout<<"$";
			else if ((i==16&&j==5)||(i==16&&j==6)||(i==16&&j==7)||(i==16&&j==8)||(i==16&&j==9)||(i==16&&j==10)) cout<<"$";
			
			else cout<<" ";
		}
		cout<<endl;
	}
}
*/

/*

Nama program	: 5 Kotak

Nama	: Syafira Fitra Annisa

NPM	: 140810160047

Tanggal Buat	: 25 Oktober 2016

Deskripsi	: Ukuran kotak tergantung jumlah baris yang dimasukkan

***********************************************/


#include <iostream.h>

using namespace std;


int main()

{

     int n;

     cout<<"masukkan jumlah baris kelipatan 3 = ";

     cin>>n; cout<<endl<<endl;

     for(int i=1; i<=n; i++)

     {

          for (int j=1; j<=n; j++)

          {

          if (i==1 && (j<=n/3 || j>n*2/3)) cout<<"@";

          else if (i==n && (j<=n/3 || j>n*2/3)) cout<<"@";

          else if (i==n/3 || i==(n+2)*2/3) cout<<"@";

          else if (j==n/3 || j==(n+2)*2/3) cout<<"@";

          else if (j==1 && (i<=n/3 || i>n*2/3)) cout<<"@";

          else if (j==n && (i<=n/3 || i>n*2/3)) cout<<"@";

          else cout<<".";

          }

          cout<<endl;

     }

}