//IKhtiar Adli Wicaksono (2217051060)
//Aimar Abie Pasah (2217051121)
//Irfan Marcellino (2257051024)	
#include <iostream>
#include <stdlib.h>
//merupakan library pada bahasa C++
#include <ctime>
using namespace std;
void pack(){
	cout<<"\n====================================================";
    cout<<"\n=================||L@MPONG EXPRESS||================";
    cout<<"\n====================================================";
    cout<<"\nDaftar Barang yang dapat dikirim : ";
    cout<<"\n1. Berkas/File/Surat";
    cout<<"\n2. Barang Elektronik";
    cout<<"\n3. obat/kosmetik";
    cout<<"\n====================================================";
    //memilih suatu jenis barang yang ingin kita kirim 
}
int main() {
	int jns_barang, kota_awal, kota_tujuan, harga, kecepatan;
	char cetak, lanjut, ulang;	
	string barang, speed;
	string resi[14]={"LPG/0114/01", "LPG/0114/02", "LPG/0114/03", "LPG/0114/04", "LPG/0114/05", "LPG/0114/06", "LPG/0114/07", "LPG/0114/08", "LPG/0114/09", "LPG/0114/10", "LPG/0114/11", "LPG/0114/12", "LPG/0114/13", "LPG/0114/14"};
	string daftar_kota[14]={"Bandar Lampung", "Metro", "Lampung Barat", "Lampung Selatan", "Lampung Tengah", "Lampung Timur", "Lampung Utara", "Mesuji", "Pesawaran", "Pesisir Barat", "Pringsewu", "Tanggamus", "Tulang Bawang", "Way Kanan"};
	do{
		pack();
    	cout<<"\nInput Kode Jenis Barang yang Ingin Dikirim = ";
    	//menentukan kota asal dan kota tujuan dengan menggunakan angka yang sudah di tentukan
    	cin>>jns_barang;
    	if (jns_barang>=1&&jns_barang<=3){
    		system ("cls");
    		cout<<"\n===================================================";
    		cout<<"\n=================||L@MPONG EXPRESS||===============";
    		cout<<"\n===================================================";
   			for (int x=0; x<14; x++){
   				cout<<"\n"<<x+1<<". "<<daftar_kota[x];
			}	
    		cout<<"\n===================================================";
    		cout<<"\nKecepatan Pengiriman : ";
    		cout<<"\n1. Reguler 3/4 hari";
    		cout<<"\n2. Express 1/2 hari";
    		cout<<"\n3. Same Day";
    		cout<<"\n===================================================";
    		// menentukan kecepatan atau estimasi waktu pengiriman
    		if (jns_barang==1){
    			barang="Berkas/File/Surat";
			}
			if (jns_barang==2){
				barang="Barang Elektronik";
			}
			if (jns_barang==3){
				barang="Obat/Kosmetik";
			}
			cout<<"\nJenis barang yang dikirim \t= "<<barang;
    		cout<<"\nInput nomor Kota Awal \t\t= ";			
    		cin>>kota_awal;
    		cout<<"Input nomor Kota Tujuan\t\t= ";
			cin>>kota_tujuan;cin.ignore();
			// keterangan barang yang akan dikirim, kota asal/awal, dan kota tujuannya
			
			if ((kota_awal>=1&&kota_awal<=14)&&(kota_tujuan>=1&&kota_tujuan<=14)){
				string dari, ke, alamat;
				cout<<"Nama Pengirim \t\t\t= ";
				getline(cin, dari);
				// pengisian nama pengirim (menggunakan getline supaya bisa mengisi lebih dari 1 kata)
				cout<<"Alamat Lengkap Penerima \t= ";
				getline(cin, alamat);
				// pengisian alamat lengkap tujuan/penerima (menggunakan getline supaya bisa mengisi lebih dari 1 kata)
				cout<<"Nama Penerima \t\t\t= ";
				getline(cin, ke);
				// pengisian nama penerima (menggunakan getline supaya bisa mengisi lebih dari 1 kata)
				cout<<"Pilih Kecepatan Pengiriman \t= ";
				cin>>kecepatan;
				//memilih kecepatan/waktu pengiriman
				if ((kota_awal==1||kota_awal==2||kota_awal==3||kota_awal==4||kota_awal==5||kota_awal==6||kota_awal==7||kota_awal==8||kota_awal==9||kota_awal==10||kota_awal==11||kota_awal==12||kota_awal==13||kota_awal==14)&&(kota_tujuan==1||kota_tujuan==2||kota_tujuan==3||kota_tujuan==4||kota_tujuan==5||kota_tujuan==6||kota_tujuan==7)){
					harga=18000;
				} 
				if ((kota_awal==1||kota_awal==2||kota_awal==3||kota_awal==4||kota_awal==5||kota_awal==6||kota_awal==7||kota_awal==8||kota_awal==9||kota_awal==10||kota_awal==11||kota_awal==12||kota_awal==13||kota_awal==14)&&(kota_tujuan==8||kota_tujuan==9||kota_tujuan==10||kota_tujuan==11||kota_tujuan==12||kota_tujuan==13||kota_tujuan==14)){
					harga=36000;
					// harga tidak sama jika kota asal dan kota tujuan yang tidak sekelompok
				}
				if (kecepatan==1){
					harga=harga;
					speed="Reguler 3/4 hari";
				}else if (kecepatan==2){
					harga=harga+15000;
					speed="Express 1/2 hari";
					// jika memilih pengiriman yang express harga pengiriman di tambah Rp.15.000.00
				}else if (kecepatan==3){
					harga=harga+25000;
					speed="Same Day";
					// jika memilih pengiriman yang same day harga pengiriman di tambah Rp.25.000.00
				} else {
					system ("cls");
					cout<<"\nKode tidak terdaftar";
					// jika kode tidak terdaftar maka akan mengulang dari awal karena menggunakan "cls"
					return main();
				}
				cout<<"\nCetak Struk Tagihan ? (y/t)";
				cin>>cetak;
				// jika sudah mengisi semua dan anda yakin semua benar maka masukan huruf y kecil
				// jika anda tidak yakin/ada yang salah maka masukan huruf t kecil
				if (cetak=='y'){
					system ("cls");
					cout<<"\nPesanan Berhasil : ";
					cout<<"\n====================================================";
	    			cout<<"\n=================||L@MPONG EXPRESS||================";
	    			cout<<"\n====================STRUK PESANAN===================";
	    			cout<<"\nNama Pengirim \t\t\t= "<<dari;
	    			cout<<"\nNama Penerima \t\t\t= "<<ke;
	    			cout<<"\nKota asal \t\t\t= "<<daftar_kota[kota_awal-1];
	    			cout<<"\nKota tujuan \t\t\t= "<<daftar_kota[kota_tujuan-1];
	    			cout<<"\nAlamat Lengkap Penerima\t\t= "<<alamat;
	    			cout<<"\nJenis barang yang dikirim \t= "<<barang;
	    			cout<<"\nEstimasi sampai \t\t= "<<speed;
	    			cout<<"\nTarif harga pengirimian \t= Rp."<<harga;
	    			cout<<"\n====================================================";
					cout<<"\nNomor Resi   \t\t\t= "<<resi[kota_tujuan-1];
					cout<<"\n====================================================";
					// semua data yang sudah terisi dan sudah benar maka akan jadi seperti yang di atas
				} else {
					system ("cls");
					return main();
				}
				
			} else {
				system ("cls");
				cout<<"Kode tidak terdaftar ";
				// jika anda memasukan kode yang salah atau tidak terdaftar maka otomatis akan mengulang karena menggunakan sistem "cls"
				return main();
			}
		} else {
			system("cls");
			cout<<"Kode tidak terdaftar ";
		}
		cout<<"\nKembali ke Menu Utama? (y/t)";
		cin>>lanjut;
		system("cls");
		//jika kode tidak terdaftar maka anda akan di berikan pilihan untuk ke menu utama
	} while(lanjut=='y');
	cout<<"Terima kasih telah memakai layanan L@MPONG EXPRESS"<<endl;	
	return 0;	
} 


	

    

    

