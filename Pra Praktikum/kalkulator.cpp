#include <iostream>
using namespace std;

int main(){
	int pilih,hasil,x,y;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Pilihan Menu :"<<endl;
	cout<<"1. Penambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"Pilih Menu No : "; cin>>pilih;
	cout<<"Bilangan Pertama : "; cin>>x;
	cout<<"Bilangan Kedua : "; cin>>y;
	if(pilih == 1){
		hasil = x + y;
		cout<<"Hasil "<<x<<" + "<<y<<" = "<<hasil;
	}
	if(pilih == 2){
		hasil = x - y;
		cout<<"Hasil "<<x<<" - "<<y<<" = "<<hasil;
	}
	if(pilih == 3){
		hasil = x * y;
		cout<<"Hasil "<<x<<" x "<<y<<" = "<<hasil;
	}
	if(pilih == 4){
		hasil = x / y;
		cout<<"Hasil "<<x<<" : "<<y<<" = "<<hasil;
	}
	return 0;
}
