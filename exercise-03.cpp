/*
	Author 		: Muhamad Fahrul Azimi
	NPM 		: 140810180027
	Deskripsi 	: Program ini dibuat untuk menentukan gaji pegawai
	Tahun 		: 2019
*/

// nama file : exercise-03.cpp
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct Data
{
	char nip[15];
	int nip2;
	char nama[30];
	int gol;
	int gaji;
};

typedef Data data[20];
void banyakData(int &n){
	cout<<"Masukkan banyak pegawai : "; cin >> n;
}

void gajiPegawai(data& pegawai, int n){
	for(int i=0;i<n;i++){
		if(pegawai[i].gol==1){
			pegawai[i].gaji=2000000;
		}else if(pegawai[i].gol==2){
			pegawai[i].gaji=3000000;
		}else if(pegawai[i].gol==3){
			pegawai[i].gaji=5000000;
		}else
			pegawai[i].gaji=8000000;
		}
	}

void inputPegawai(data& pegawai, int n){
	for(int i=0;i<n;i++){
		cout << "Input Data Pegawai ke-"<< i+1 << endl;
		cout << "Input Nama     : "; cin.ignore(); cin.getline(pegawai[i].nama,30);
		cout << "Input NIP      : "; cin >> pegawai[i].nip;
		cout << "Input Golongan : ";cin >> pegawai[i].gol;
		if(pegawai[i].gol<1 || pegawai[i].gol>4){
			cout << "Golongan Tidak ada" << endl;
			i--;
			getch();
		}
		cout << endl;
	}
	gajiPegawai(pegawai,n);
}

void cetakDaftar(data pegawai, int n){
	for(int i=0; i<n; i++){
		cout << i+1 <<"."<<pegawai[i].nama<<" ("<<pegawai[i].nip<<") "<<"Rp. "<<pegawai[i].gaji<<" Gol : "<<pegawai[i].gol<<endl;
	}
}

int rataGaji(data pegawai, int n){
	int jumlah=0;
	for(int i=0;i<n;i++){
		jumlah+=pegawai[i].gaji;
	}
	return jumlah/n;
}

void cariGaji(data pegawai, int n){
	for(int i=n-1; i>0; i--){
		for(int j=0; j<i; j++){
			if(pegawai[j].gol>pegawai[j+1].gol){
				swap(pegawai[j],pegawai[j+1]);
			}
		}
	}
	cout << "Pegawai dengan gaji tertinggi : " << pegawai[n-1].nama << " dengan gaji Rp. " << pegawai[n-1].gaji <<endl;
	cout << "Pegawai dengan gaji terendah  : " << pegawai[0].nama << " dengan gaji Rp. " << pegawai[0].gaji <<endl;
}

void sortingNIP(data pegawai,int n){
	for(int i=0;i<n;i++){
		pegawai[i].nip2=atoi(pegawai[i].nip);
	}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(pegawai[j].nip2>pegawai[j+1].nip2){
				swap(pegawai[j],pegawai[j+1]);
			}
		}
	}
	cetakDaftar(pegawai,n);
}

int main(){
	int n;
	Data pegawai[20];
	int pegawai_target;
	banyakData(n);
	inputPegawai(pegawai,n);
	cout << "Urutan pegawai berdasarkan NIP (Ascending)" << endl;
	sortingNIP(pegawai,n); cout << endl;
	cout << "Rata-rata Gaji : Rp. " << rataGaji(pegawai,n) << endl;
	cariGaji(pegawai,n);
}
