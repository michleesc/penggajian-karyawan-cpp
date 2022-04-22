#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
	
struct karyawan 
{
	int kode[100];
	string nama[100];
	string pendidikan[9];
	string jabatan[9];
	int lembur[9];
	int tunjangan_jabatan[20];
	int honor_lembur[20];
	int bpjs [20];
	int pajak[20];
	int gaji_kotor[20];
	int gaji_bersih[20];
}; karyawan kwn;
	
long int gapok = 3000000, uang_makan,uang_transport;
int k,i;
string periode;

void garis ()
{
	cout<<"===========================================================";
}
void input()
{
	cout<<"Periode Bulan : ";
	cin>>periode; 
	
	cout<<"Jumlah Data yang anda input : ";cin>>k;
	garis();
	cout<<endl;
	for(i=0; i<k;i++)
	{
		
		
		cout<<"Data ke-"<<i+1<<endl;
		
		cout<<"Masukkan Kode Karyawan\t\t\t\t: ";
		cin>>kwn.kode[i];
		cout<<"Masukkan Nama\t\t\t\t\t: "; 
		cin.get();
		getline(cin,kwn.nama[i]);
		
		cout<<"Golongan Jabatan (MANAGER/KARYAWAN/DIREKTUR)\t: ";
		cin>>kwn.jabatan[i];
				
		cout<<"Golongan Pendidikan (SMA/D3/S1/S2)\t\t: ";
		cin>>kwn.pendidikan[i];
		
		cout<<"Lama Jam Lembur\t\t\t\t\t: ";
		cin>>kwn.lembur[i];
		
		garis();
		
		cout<<endl;
		
		if ((kwn.jabatan[i] == "MANAGER") || (kwn.jabatan[i] == "Manager") || (kwn.jabatan[i] == "manager"))
		{
			kwn.tunjangan_jabatan[i] = 5000000;
		}
		else if ((kwn.jabatan[i] == "KARYAWAN") || (kwn.jabatan[i] == "Karyawan") || (kwn.jabatan[i] == "karyawan"))
		{
				kwn.tunjangan_jabatan[i] = 2000000;
		}
		else if ((kwn.jabatan[i] == "DIREKTUR") || (kwn.jabatan[i] == "Direktur") || (kwn.jabatan[i] == "direktur"))
		{
				kwn.tunjangan_jabatan[i] = 7000000;
		}

		if ((kwn.pendidikan[i] == "SMA") || (kwn.pendidikan[i] == "Sma") || (kwn.pendidikan[i] == "sma"))
		{
			kwn.honor_lembur[i] = 50000 * kwn.lembur[i];
		}
		else if ((kwn.pendidikan[i] == "D3") || (kwn.pendidikan[i] == "d3"))
		{
			kwn.honor_lembur[i] = 75000 * kwn.lembur[i];
		}
		else if ((kwn.pendidikan[i] == "S1") || (kwn.pendidikan[i] == "s1"))
		{
			kwn.honor_lembur[i] = 100000 * kwn.lembur[i];
		}
		else if ((kwn.pendidikan[i] == "S2") || (kwn.pendidikan[i] == "s2"))
		{
			kwn.honor_lembur[i] = 150000 * kwn.lembur[i];
		}
		uang_transport = 200000;
		uang_makan = 200000;
		kwn.gaji_kotor[i] = kwn.tunjangan_jabatan[i] + kwn.honor_lembur[i] + gapok + uang_makan + uang_transport;
		kwn.pajak[i] = kwn.gaji_kotor[i] * 0.05;
		kwn.bpjs[i] = kwn.gaji_kotor[i] * 0.02;
		kwn.gaji_bersih[i] = kwn.gaji_kotor[i] - kwn.bpjs[i] - kwn.pajak[i];
		cout<<"Karyawan yang bernama "<<kwn.nama[i]<<" Honor yang diterima pada bulan "<<periode<<" adalah : "<<endl;
 	
		cout<<"Tunjangan Jabatan 	: Rp. "<<kwn.tunjangan_jabatan[i]<<endl;
		cout<<"Honor Lembur	  	: Rp. "<<kwn.honor_lembur[i]<<endl;
		cout<<"Gaji Pokok		: Rp. "<<gapok<<endl;
		cout<<"Uang Makan		: Rp. "<<uang_makan<<endl;
		cout<<"Uang Transport		: Rp. "<<uang_transport<<endl;
		cout<<"		 	 __+"<<endl;
		cout<<"Gaji Kotor	  	: Rp. "<<kwn.gaji_kotor[i]<<endl;
		cout<<endl;
		cout<<"Potongan :"<<endl;
		cout<<"Bpjs			: Rp. "<<kwn.bpjs[i]<<endl;
		cout<<"Pajak			: Rp. "<<kwn.pajak[i]<<endl;
		cout<<"		 	 __-"<<endl;
		cout<<"Gaji Bersih		: Rp. "<<kwn.gaji_bersih[i]<<endl;
		garis();
		cout<<endl;

	}	
	system ("pause");

}	

void tampil()
{
	
	if (k>0)
	{
		cout << "Periode "<<periode<<" "<<endl;
		for (int i=0;i<k;i++)
		{
			cout << "Data ke-"<<i+1<<endl;
			cout << "Kode				: "<<kwn.kode[i]<<endl;
			cout << "Nama				: " << kwn.nama[i] << endl;
  			cout << "Jabatan				: " << kwn.jabatan[i] << endl;
  			cout << "Pendidikan			: " << kwn.pendidikan[i] << endl;
  			cout << "Lama Jam lembur (JAM)		: " << kwn.lembur[i] << endl;
  			
  			cout<<"Tunjangan Jabatan 		: Rp. "<<kwn.tunjangan_jabatan[i]<<endl;
			cout<<"Honor Lembur	  		: Rp. "<<kwn.honor_lembur[i]<<endl;
			cout<<"Gaji Pokok			: Rp. "<<gapok<<endl;
			cout<<"Uang Makan			: Rp. "<<uang_makan<<endl;
			cout<<"Uang Transport			: Rp. "<<uang_transport<<endl;
			cout<<"		 		 __+"<<endl;
			cout<<"Gaji Kotor		  	: Rp. "<<kwn.gaji_kotor[i]<<endl;
			cout<<endl;
			cout<<"Potongan :"<<endl;
			cout<<"Bpjs				: Rp. "<<kwn.bpjs[i]<<endl;
			cout<<"Pajak				: Rp. "<<kwn.pajak[i]<<endl;
			cout<<"			 	 __-"<<endl;
			cout<<"Gaji Bersih			: Rp. "<<kwn.gaji_bersih[i]<<endl;
			garis();
			cout<<endl;
		}
	}
	else{
		cout<<"Belum ada data yang dimasukkan ..."<<endl<<endl;
	}
}


void searching()
{
	
	int cari, ketemu=0;
	
	if (k>0)
	{
		cout<<"Masukkan Kode yang ingin dicari : ";
		cin>>cari;
		
		garis();
		
		cout<<endl;
		cout<<endl;
		for(i=0;i<k;i++)
		{
			if (kwn.kode[i] == cari)
			{
				ketemu=1;
				cout<<"\n\nKode "<<cari<<" berada di Data Ke-"<<i+1<<endl;
				cout<<" Untuk Periode "<<periode<<endl;
				cout<<" --------------------------------------------------------------------------------"<<endl;
				cout<<"| No \t| Kode \t| Nama \t\t| Jabatan \t| Pendidikan \t| Gaji Bersih \t|"<<endl;
				cout<<" --------------------------------------------------------------------------------";
				cout<<"\n|"<<i+1<<" \t| "<<kwn.kode[i]<<" \t| "<<kwn.nama[i]<<" \t| "<<kwn.jabatan[i]<<" \t| "<<kwn.pendidikan[i]<<" \t\t| "<<kwn.gaji_bersih[i]<<" \t| "<<endl;
				cout<<" --------------------------------------------------------------------------------"<<endl;
				cout<<endl;
			}	
		}
		if (ketemu==0)
		{
				cout<<"\n\nMaaf, Kode "<<cari<<" tidak ada. "<<endl;
		}
	}
	else 
	{
		cout<<"Belum ada data yang anda masukkan"<<endl<<endl;
	}
}


int main(int argc,char **argv)
{
	
	int pil;
	
	awal :
	system("cls");
	cout<<"===========================================================\n";
	cout<<"|	Pilih Program Penggajian Karyawan\t\t  | \n";	
	cout<<"===========================================================\n";
	cout<<"1. Input Data Karyawan\t\t\t\t\t  |\n";
	cout<<"2. Tampilkan Data Karyawan\t\t\t\t  |\n";
	cout<<"3. Pencarian Data Karyawan\t\t\t\t  |\n";
	cout<<"4. Exit\t\t\t\t\t\t\t  |\n"; 
	cout<<"===========================================================\n";

	cout<<"Pilihlah Program : ";
	cin>>pil;
	switch (pil)
	{
		case 1:
			 input ();
			 goto awal;
			break;
		case 2:
			tampil();
			system("pause");
			goto awal; 	
			break;
		case 3:
			searching();
			system("pause");
			goto awal;
			break;
		case 4:
			cout<<" --------------------------------------------------------------------------------"<<endl;
			cout<<"| No \t| Kode \t| Nama \t\t| Jabatan \t| Pendidikan \t| Gaji Bersih \t|"<<endl;
			cout<<" --------------------------------------------------------------------------------";
			for (i=0;i<k;i++)
			{
				cout<<"\n|"<<i+1<<" \t| "<<kwn.kode[i]<<" \t| "<<kwn.nama[i]<<" \t\t| "<<kwn.jabatan[i]<<" \t| "<<kwn.pendidikan[i]<<" \t\t| "<<kwn.gaji_bersih[i]<<" \t| ";
			}
			cout<<"\n --------------------------------------------------------------------------------"<<endl;
			exit(1);
			break;
			
		default :
			cout<<"pilihan tidak ditemukan!!"<<endl;
			cout<<endl;
			cout<<"Silahkan Masukkan ulang kembali!!!"<<endl;
			system("pause");
			goto awal;
			break;	
	}
	
}

