#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	//inisialisasi variabel
	int lama, harga, selisih;
	int jam, menit, detik;
		harga=3000;
		jam=3000;
		cout<<"======== Tarif parkir kendaraan ======="<<endl;
		cout<<"1 jam pertama: Rp "<<harga<<endl;
		cout<<"jam berikutnya:Rp "<<jam<<endl;
		cout<<"1. jam Datang = 10:10:10"<<endl;
		cout<<"2. jam pulang = 11:13:25"<<endl;
		cout<<"3. Lama Parkir = 1:3:15"<<endl;
		
		cout<<"........................"<<endl;
		cout<<"Total Bayar : Rp"<<harga+jam<<endl;
		
		return 0;
	
}

