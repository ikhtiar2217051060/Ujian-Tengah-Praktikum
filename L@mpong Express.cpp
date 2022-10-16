#include <iostream>
#include <stdlib.h>
using namespace std;
void pack(){
	cout<<"\================================================";
    cout<<"\n===============||L@MPONG EXPRESS||==============";
    cout<<"\n================================================";
    cout<<"\n1. Berkas/File/Surat";
    cout<<"\n2. Barang";
    cout<<"\n3. Paket";
    cout<<"\n================================================";
}
int main() {

    int jns_barang, kota_awal, kota_tujuan;
    string daftar_kota[14] = {"Bandar Lampung", "Metro", "Lampung Barat", "Lampung Selatan", "Lampung Tengah", "Lampung Timur", "Lampung Utara", "Mesuji", "Pesawaran", "Pesisir Barat", "Pringsewu", "Tanggamus", "Tulang Bawang", "Way Kanan"};
	pack();
    cout<<"\nInput Kode Jenis Barang yang Ingin Dikirim = ";
    cin>>jns_barang;
    if (jns_barang>=1&&jns_barang<=3){
    	system ("cls");
    	cout<<"===============================================";
    	cout<<"\n===============||L@MPONG EXPRESS||=============";
    	cout<<"\n===============================================";
   		for (int x=0; x<14; x++){
   			cout<<"\n"<<x+1<<". "<<daftar_kota[x];
	   }
    	cout<<"\n===============================================";
   		switch(jns_barang){
    		case 1 :
    			cout<<"\nJenis Barang yang dikirim = Berkas/File/Surat";
    			break;
    		case 2 :
    			cout<<"\nJenis Barang yang dikirim = Barang";
    			break;
    		case 3 :
    			cout<<"\nJenis Barang yang dikirim = Paket";
    			break;
		}
    	cout<<"\nInput nomor Kota Awal  \t  = ";
    	cin>>kota_awal;
    	cout<<"Input nomor Kota Tujuan\t  = ";
		cin>>kota_tujuan;
		string from, to;
		if ((kota_awal>=1&&kota_awal<=14)&&(kota_tujuan>=1&&kota_tujuan<=14)){
			system ("cls");
			cout<<"Nama Pengirim : ";
			cin>>from;
			cout<<"Nama Penerima : ";
			cin>>to;
		} else {
			cout<<"Kode tidak terdaftar ";
		}
	} else {
		cout<<"Kode tidak terdaftar ";
	}
    return 0;
}
