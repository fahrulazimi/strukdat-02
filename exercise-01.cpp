/*
	Author 		: Muhamad Fahrul Azimi
	NPM 		: 140810180027
	Deskripsi 	: Program ini dibuat untuk membuat biodata
	Tahun 		: 2019
*/

// nama file : exercise-01.cpp
#include <iostream>
#include <string.h>
using namespace std;

struct Orang{
	int umur;
	char nama[30];
	char jk[2];
	char goldar;
};

int main ()
{
	Orang orang;
	orang.umur = 10;
	strcpy (orang.nama, "fahmi");
	cout << "Masukkan Jenis Kelamin : "; cin >> orang.jk;
	cout << "Masukkan Goldar : "; cin >> orang.goldar;
	
	cout << "Umur : " << orang.umur << endl;
	cout << "Nama : " << orang.nama << endl;
	cout << "Goldar : " << orang.goldar << endl;
	cout << "Jenis Kelamin : " << orang.jk << endl;
}
