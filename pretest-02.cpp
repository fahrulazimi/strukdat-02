/*
	Nama 	: Muhamad Fahrul Azimi
	NPM		: 140810180027
	Kelas	: A
	Tanggal	: 5 Maret 2019
*/

// nama file : pretest-02.cpp

#include <iostream>
using namespace std;

void moveZeroToEnd (int arr[], int n){
	int data = 0;
	for (int i=0; i<n; i++){
		if (arr[i] != 0){
			arr[data++] = arr[i];
		}
	while (data < n) arr [data++] = 0;
	}
}

void input (int (&arr)[100], int& n){
	cout << "Masukkan panjang data : "; cin >> n;
	for (int i=0; i<n; i++){
		cout << "Masukkan data cth" << "[" << i+1 << "] : "; cin >> arr[i];
	}
	
}

void output (int arr[], int n){
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[100];
	int n;
	input (arr,n);
	moveZeroToEnd(arr,n);
	output(arr,n);
}


