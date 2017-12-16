/* 	Nama program	: evaluasi utk Bu Mira
	Nama			: Patricia Joanne
	NPM				: 140810160065
	Tanggal buat	: 08-12-16
	Deskripsi		: materi file
************************************************************/

#include<iostream>
#include<fstream>
using namespace std;

void bukatulisisifile(char pat[]){
	ofstream text;
	text.open(pat);
	text<<"NPM: 140810160065"<<endl;
	text.close();
}
void tambahisifile(char pat[],char isi[]){
	ofstream text;
	text.open(pat,ios::app);
	text<<endl;
	text<<"Untuk Bu Mira,"<<endl<<endl;
	text<<"Terima kasih Bu Mira atas pengajarannya selama ini dan saya juga bersyukur bisa mendapatkan doswal seperti ibu. Sejauh ini saya sangat puas dengan pengajaran ibu karena pptnya yang mudah dipahami dan penjelasan di kelas juga membantu saya untuk mempelajari C++ dengan baik bahkan lebih daripada di kelas praktikum."<<endl<<endl;
	text<<"Saya cuma ada sedikit saran, yaitu membuat pembelajaran di kelas lebih semangat dengan adanya hadiah atau memperbanyak latihan ngoding dengan meminta beberapa dari kami untuk maju ke depan karena jujur saja kalo cuma menyimak tidak cukup jadi butuh latihan juga."<<endl<<endl;
	text<<"Selain itu, sebagai ibu wali saya, saya ingin cerita tentang Melati. Jujur saja saya sangat tidak tenang karena sudah lama sekali Melati tidak masuk kuliah dan kalo dikontak selalu ada aja berbagai macam alasannya. Saya tidak tahu bagaimana cara menghadapinya, begitu juga dengan teman-teman saya yang perempuan lainnya. Kalo ingin mengunjunginya jujur itu sangat sulit karena aspad tidak boleh dimasuki orang dan selain itu kata melati sendiri dia jarang ada di aspad."<<endl<<endl;
	text<<"Terima kasih Bu Mira yang sudah membaca."<<endl<<endl<<endl;
	text<<isi<<endl;
}
void cetakisifile(char pat[],char isi[]){
	char karakter; 
	ifstream text;  
	text.open(pat); 
	while(!text.eof()){ 
		text.get(karakter); 
			cout<<karakter; 
	} 
	text.close(); 
}
int main(){
	char pat[]="evaluasi.txt";
	char isi[]="Salam,\nPatricia Joanne";
	bukatulisisifile(pat);
	tambahisifile(pat,isi);
	cetakisifile(pat,isi);
}


/* void 1 = buka tulis isi file "evaluasi.txt" isinya npm aja
void 2 = tambah isi file ttng evaluasi utk bu mira
*/
