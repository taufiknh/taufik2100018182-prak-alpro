#include<iostream>
using namespace std;

int main(){
	int grg1,grg2,bkr1,bkr2,hasil1,hasil2,byr,kbl,total;
	cout<< "\t\tMENU\t\t" <<endl;
	cout<< "1. Ayam Goreng\t\t Rp.17.000" <<endl;
	cout<< "2. Ayam Bakar\t\t Rp.21.000" <<endl;
	cout<< "0. Keluar" <<endl;
	cout<< "=========================================" <<endl;
	cout<< "Jumlah pembelian Ayam Goreng : "; cin>>grg1;
	cout<< "Jumlah pembelian Ayam Bakar : "; cin>>bkr1;
	grg2 = 17000 * grg1;
	bkr2 = 21000 * bkr1;
	hasil1 = grg2 + bkr2;
	if(hasil1 > 45000){
		hasil2 = hasil1 * 10 /100;
		total = hasil1 - hasil2;
	}
	cout<< "Total Harga : Rp." <<total <<endl;
	cout<< "Jumlah dibayar : Rp."; cin>>byr;
	kbl = byr - total;
	
	cout<< "\n\t Struk Pembayaran \t\t" <<endl;
	cout<< "====================================" <<endl;
	cout<< "1. Ayam Goreng\t\t Rp.17.000 x" <<grg1 <<endl;
	cout<< "2. Ayam Bakar\t\t Rp.21.000 x" <<bkr1 <<endl;
	cout<< "====================================" <<endl;
	cout<< "Total Harga : \t\t Rp." <<total <<endl;
	cout<< "Dibayar : \t\t Rp." <<byr <<endl;
	cout<< "Kembalian : \t\t Rp." <<kbl <<endl;
	return 0;
}
