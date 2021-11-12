#include<iostream>
using namespace std;
	
	int main(){
		cout<<"################################\n";
		int input, jumlah, harga=50000, hasil=0;
		cout<<"harga baju = 50000\n";
		cout<<"Berapa kali anda ingin melakukan pembelian :";
		cin>>input;
		
		int a = 1;
		while(a <= input){
			cout<<"Masukan jumlah Baju yang diPesan "<<a<<"(jumlah):";
			cin>>jumlah;
			hasil=hasil+jumlah;
			a++;
		}
		cout<<"Jumlah baju yang dipesan = "<<hasil<<"(jumlah): ";
		cout<<"Jumlah harga yang di bayar = Rp"<<hasil*harga;
		
		
		return 0;
		
	}
