#include <iostream>
#include<cstdlib>
using namespace std;

float biaya(int pilih){
	float biaya = 0;
	float biayalayanan = 0;
	if(pilih == 1){
		biayalayanan = 250000;
	}else if(pilih == 2){
		biayalayanan = 50000;
	}else if(pilih == 3){
		biayalayanan = 150000;
	}else if(pilih == 4){
		biayalayanan = 50000;
	}else if(pilih == 5){
		biayalayanan = 150000;
	}
	biaya = biaya + biayalayanan;
	
	return biayalayanan;
}

void dokter(string nama, string alamat, string telp, int pilih){
	int dktr;
	string keluhan;
	string dokterpil;
	string dokter[8] = {"", "Umum", "Mata", "Anak", "Kandungan", "Saraf", "THT", "Hewan"};
	
	system("cls");
	cout<<"============================================\n";
	cout<<"Layanan Konsultasi Dokter Rumah Sakit SILOAN\n";
	cout<<"============================================\n\n";
	cout<<"Pilih Pelayanan Rehabilitasi yang Anda Butuhkan:\n";
	for(int i = 1;i<8;i++){
		cout<<i<<". Dokter "<<dokter[i]<<endl;
	}
	
	cout<<"\nPilihan Anda: ";
	cin>> dktr;
	cout <<"Sebutkan keluhan Anda : ";
	cin.ignore();
	getline(cin, keluhan);
	
	dokterpil=dokter[dktr];
	system("cls");
	
	cout<<"==================================\n";
	cout<<"Bukti Konfirmasi Konsultasi Dokter\n";
	cout<<"==================================\n\n";
	cout<<"Nama pasien          : "<<nama<<"\n";
	cout<<"Alamat pasien        : "<<alamat<<"\n";
	cout<<"Nomor telepon pasien : "<<telp<<"\n";
	cout<<"Layanan              : Konsultasi Dokter\n";
	cout<<"Akan Dilayani dengan : Dokter "<<dokterpil<<endl;
	cout<<"Keterangan           : "<<keluhan<<endl;
	cout<<"Biaya                : Rp "<<biaya(pilih)<<"\n\n";
	cout<<"Untuk Informasi Lebih Lanjut, kami akan Menghubungi Anda\n";
}

void obat(string nama, string alamat, string telp, int pilih){
	system("cls");
	cout<<"==================================\n";
	cout<<"Bukti Konfirmasi Pengambilan Obat\n";
	cout<<"==================================\n\n";
	cout<<"Nama pasien          : "<<nama<<"\n";
	cout<<"Alamat pasien        : "<<alamat<<"\n";
	cout<<"Nomor telepon pasien : "<<telp<<"\n";
	cout<<"Layanan              : Pengambilan Obat\n";
	cout<<"Biaya                : Rp "<<biaya(pilih)<<"\n\n";
	cout<<"Untuk Informasi Lebih Lanjut, Kami akan Menghubungi Anda\n";
	
}

void lab(string nama, string alamat, string telp, int pilih){
	int lb;
	string keluhan;
	string lab[5] = {"", "Rontgen", "Narkotika", "Golongan Darah", "Kesehatan Darah (Kolesterol/Gula)"};
	
	system("cls");
	cout<<"============================================\n";
	cout<<"Layanan Tes Lab Rumah Sakit SILOAN\n";
	cout<<"============================================\n\n";
	cout<<"Pilih Pelayanan Rehabilitasi yang Anda Butuhkan:\n";
	for(int i = 1;i<5;i++){
		cout<<i<<". Tes "<<lab[i]<<endl;
	}
		
	do{
		cout<<"\nPilihan Anda : ";
		cin>>lb;
		if (lb==1){
			cout << "\nMohon Spesifikasikan Bagian Yang Ingin Ditangani :";
			cin >> keluhan;
		}else if(lb==2){
			cout << "\nMohon Rincikan Alasan Kebutuhan Tes Narkotika :";
			cin >> keluhan;
		}else if(lb==3 || lb==4){
			keluhan="Telah terdaftar";
		}else {
			cout << "Pilihan Anda Tidak Valid!";
		}
	}while(!(lb==1||lb==2||lb==3||lb==4));
	
	system("cls");
	cout<<"==================================\n";
	cout<<"Bukti Pendaftaran Layanan Tes Lab\n";
	cout<<"==================================\n\n";
	cout<<"Nama pasien          : "<<nama<<endl;
	cout<<"Alamat pasien        : "<<alamat<<endl;
	cout<<"Nomor telepon pasien : "<<telp<<endl;
	cout<<"Layanan              : Tes Lab\n";
	cout<<"Jenis Tes            : "<<lab[lb]<<endl;
	cout<<"Keterangan           : "<<keluhan<<endl;
	cout<<"Biaya                : Rp "<<biaya(pilih)<<endl;	
}

void rawat(string nama, string alamat, string telp, int pilih){
	int tipe_kamar;
	string keluhan, kamar;
	
	system("cls");
	cout<<"============================================\n";
	cout<<"Layanan Pengajuan Rawat Inap Rumah Sakit SILOAN\n";
	cout<<"============================================\n\n";
	
	cout <<"Sebutkan keluhan Anda : ";
	cin.ignore();
	getline(cin, keluhan);
	
	cout<<"Pilih Jenis Kamar yang Ingin Anda Tempati";
	cout<<"\n1. Kamar Biasa";
	cout<<"\n2. Kamar Executive";
	cout<<"\n3. Kamar Deluxe";

	do{
		cout<<"\nTipe Kamar : ";
		cin>>tipe_kamar;
		if (tipe_kamar==1){
			kamar="Kamar Biasa";
		}else if(tipe_kamar==2){
			kamar="Kamar Executive";
		}else if(tipe_kamar==3){
			kamar="Kamar Deluxe";
		}else{
			cout<<"Pilihan kamar Anda tidak valid!";
		}
	}while(!(tipe_kamar==1||tipe_kamar==2||tipe_kamar==3));
	
	system("cls");
	cout<<"==================================\n";
	cout<<"Bukti Pengajuan Rawat Inap\n";
	cout<<"==================================\n\n";
	cout<<"Nama pasien          : "<<nama<<endl;
	cout<<"Alamat pasien        : "<<alamat<<endl;
	cout<<"Nomor telepon pasien : "<<telp<<endl;
	cout<<"Layanan              : Pengajuan Rawat Inap\n";
	cout<<"Keterangan           : "<<keluhan<<endl;
	cout<<"Pilihan Kamar        : "<<kamar<<endl;
	cout<<"Biaya                : Rp "<<biaya(pilih)<<endl;
}
void rehab(string nama, string alamat, string telp, int pilih){
	int rhb;
	string keluhan;
	string rehab[4] = {"", "Penyalahgunaan Narkoba", "Penyakit Mental", "Penyakit Kronis"};
	
	system("cls");
	cout<<"============================================\n";
	cout<<"Layanan Pelayananan Rehabilitasi Rumah Sakit SILOAN\n";
	cout<<"============================================\n\n";
	cout<<"Pilih Pelayanan Rehabilitasi yang Anda Butuhkan: \n";
	for(int i = 1;i<5;i++){
		cout<<i<<". Layanan Rehabilitas "<<rehab[i]<<endl;
	}
	cout<<"\nPilihan Anda: ";
	cin>> rhb;
	
	cout<<"\nRincikan Keluhan Lebih Lanjut : ";
	cin.ignore();
	getline(cin, keluhan);
	
	system("cls");
	cout<<"==================================\n";
	cout<<"Bukti Pelayananan Rehabilitasi\n";
	cout<<"==================================\n\n";
	cout<<"Nama pasien          : " << nama <<"\n";
	cout<<"Alamat pasien        : " << alamat <<"\n";
	cout<<"Nomor telepon pasien : " << telp <<"\n";
	cout<<"Layanan              : Pelayananan Rehabilitasi\n";
	cout<<"Tipe Rehabilitasi    : "<<rehab[rhb]<<endl;
	cout<<"Keterangan           : " << keluhan <<"\n";
	cout<<"Biaya                : Rp " << biaya(pilih) << "\n\n";
	cout<<"Untuk Informasi Lebih Lanjut, Kami akan Menghubungi Anda\n";
	
}


int main(){
	string nama, alamat, kelamin, telp, pil, tempat, tgl ; 
	int antrian=1, pilih;
	char antrian2;	
	
	
	bool running = true;
    while(running == true){
	cout<<"============================================\n";
	cout<<"Selamat Datang di Layanan Rumah Sakit SILOAN\n";
	cout<<"============================================\n\n";
	cout<<"Nomor Antrian Anda adalah: "<<antrian<<"\v";
		antrian++;
	cout<<"Silakan Masukkan Data Diri Anda: \n";
	cout<<"1. Nama          : ";
	getline(cin, nama);
	cout<<"2. Alamat        : ";
	getline(cin, alamat);
	cout<<"3. Tempat Lahir  : ";
	getline(cin, tempat);
	cout<<"4. Tanggal Lahir : ";
	getline(cin, tgl);
	do{	
	cout<<"5. Jenis Kelamin (pria/wanita) : ";
	cin>>pil;
	
	if(pil=="Pria"||pil=="pria"){
		kelamin="Pria";
	}
	else if(pil=="Wanita"||pil=="wanita"){
		kelamin="Wanita";
	}
	else{
		cout<<"Kelamin anda tidak valid!\n";
		}		
	}while(!(pil=="Pria"||pil=="pria"||pil=="Wanita"||pil=="wanita"));
	
	cout<<"6. Nomor Telepon : ";
	cin>>telp;
	system ("cls");
	
	cout<<"============================================\n";
	cout<<"Selamat Datang di Layanan Rumah Sakit SILOAN\n";
	cout<<"============================================\n\n";
	cout<<"Pilih Layanan yang Anda Inginkan\n";
	cout<<"1. Poli / Konsultasi Dokter\n";
	cout<<"2. Apotek / Pengambilan Obat\n";
	cout<<"3. Tes Lab\n";
	cout<<"4. Pengajuan Rawat Inap\n";
	cout<<"5. Pelayananan Rehabilitasi\n";
	cout<<"Pilihan Anda : ";
	cin>>pilih;
	switch (pilih){
		case 1 :
			dokter(nama, alamat, telp, pilih);
			break;
		case 2 :
			obat(nama, alamat, telp, pilih);
			break;
		case 3 :
			lab(nama, alamat, telp, pilih);
			break;
		case 4 :
			rawat(nama, alamat, telp, pilih);
			break;
		case 5 :
			rehab(nama, alamat, telp, pilih);
			break;
		default :
			cout << "Pilihan Anda Tidak Valid. Mohon pilih layanan yang tersedia!\n";
			break;
	}
	cout<<"Ingin mendaftar antrian lagi? (y/n) ";
	cin>>antrian2;
	if(antrian2=='n'||antrian2=='N'){running=false;}
	cin.ignore();
	system("cls");
	while(antrian>6){
		cout << " Maaf Atas Ketidaknyamananya, Batas Pendaftaran Hari ini Sudah Maksimal";
		return 0;
	}
	}
	
	cout<<"\nTerima Kasih Sudah Mempercayai Rumah Sakit SILOAN, Kami Mendoakan Kesehatanmu Selalu :D\n";
	
}
