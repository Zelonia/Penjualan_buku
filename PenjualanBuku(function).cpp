#include<iostream>
using namespace std;

int hargaBayar(int jumlah, int hargaBuku){
	int harga_Bayar=jumlah*hargaBuku;
	return harga_Bayar;
}

int potongan1(int hargaByr){
	int potongan=hargaByr*0.2;
	return potongan;
}

int potongan2(int hargaByr){
	int potongan=hargaByr*0.1;
	return potongan;
}

int totalHarga(int hargaByr, int potongann){
	int total_harga=hargaByr - potongann;
	return total_harga;
}

int kembalian(int uangByr, int totalHrga){
	int uang_kembalian=uangByr-totalHrga;
	return uang_kembalian;
}

void biayaBuku(int b_totalJumlahBuku, int b_totalHargaBayar){
	int bayar;
	
	if(b_totalJumlahBuku>5){
		cout<<"Anda mendapatkan 20% dan akan mendapatkan Note Book"<<endl;
		int totalPotongan=potongan1(b_totalHargaBayar);
		cout<<"Total potongan sebesar = "<<totalPotongan<<endl;
		int hasilTotal=totalHarga(b_totalHargaBayar, totalPotongan);
		cout<<"Total harga yang harus dibayarkan = "<<hasilTotal<<endl;
		cout<<"Pemesan membayar sebesar = "; cin>>bayar;
		cout<<"Kembalian = "<<kembalian(bayar,hasilTotal);
		
	}else if(b_totalJumlahBuku>2){
		cout<<"Anda mendapatkan 10% dan akan mendapatkan Note Book"<<endl;
		int totalPotongan=potongan2(b_totalHargaBayar);
		cout<<"Total potongan sebesar = "<<totalPotongan<<endl;
		int hasilTotal=totalHarga(b_totalHargaBayar, totalPotongan);
		cout<<"Total harga yang harus dibayarkan = "<<hasilTotal<<endl;
		cout<<"Pemesan membayar sebesar = "; cin>>bayar;
		cout<<"Kembalian = "<<kembalian(bayar,hasilTotal);
		
	}else if(b_totalJumlahBuku<5){
		cout<<"Maaf anda tidak dapat bonus"<<endl;
		cout<<"Total Harga Buku Yang Harus Dibayarkan = "<<b_totalHargaBayar<<endl;
	}
	
}
	


int main(){
	
	mulai:
	char lagi;
	int kode, jumlahBuku, totalJumlahBuku;
	int harga;
	string namaBuku;
	totalJumlahBuku=0;
	int harga_bayar, totalHargaBayar;
	totalHargaBayar=0;
	
	do{
	
	
	cout<<"kode 1. Sukses Belajar Pemrograman C++"<<endl;
	cout<<"Kode 2. Kunci Pribadi Yang Sukses"<<endl;
	cout<<"Kode 3. Mencari Mutiara di Dasar Hati"<<endl;
	cout<<"Silakan Pilih : ";
	cin>>kode;
	
	switch(kode){
		case 1:
			harga=50000;
			namaBuku="Sukses Belajar Pemrograman C++";
			break;
		case 2:
			harga=35000;
			namaBuku="Kunci Pribadi Yang Sukses";
			break;
		case 3:
			harga=45000;
			namaBuku="Mencari Mutiara di Dasar Hati";
			break;
		default:
			cout<<"kode yang anda masukkan tidak ada, silakan coba kembali"<<endl;
	}
	
	
	cout<<"masukkan jumlah Buku = "; cin>>jumlahBuku;
	harga_bayar=hargaBayar(jumlahBuku, harga);
	cout<<"Maka Harga Bayar = "<<harga_bayar<<endl;
	
	
	cout<<"Total Jumlah Buku Yang dibeli = "<<jumlahBuku<<endl;
	
	cout<<"Apakah ingin membeli buku lagi? (Y/N) = "; cin>>lagi;
	if(lagi=='Y' || lagi=='y'){
		totalJumlahBuku=totalJumlahBuku+jumlahBuku;
		totalHargaBayar=totalHargaBayar+harga_bayar;
		}
	else if(lagi=='N' || lagi=='n'){
		totalJumlahBuku=totalJumlahBuku+jumlahBuku;
		cout<<"Total Jumlah Buku Yang dibeli = "<<totalJumlahBuku<<endl;
		totalHargaBayar=totalHargaBayar+harga_bayar;
		cout<<"Total Harga Buku Yang Harus Dibayarkan = "<<totalHargaBayar<<endl;
	
	biayaBuku(totalJumlahBuku, totalHargaBayar);
	}
} while(lagi=='Y' || lagi=='y');

return 0;
}
