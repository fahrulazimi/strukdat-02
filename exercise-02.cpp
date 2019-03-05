/*
	Author 		: Muhamad Fahrul Azimi
	NPM 		: 140810180027
	Deskripsi 	: Program ini dibuat untuk membuat struk theater
	Tahun 		: 2019
*/

// nama file : exercise-02.cpp
#include <iostream>
#include <string.h>
using namespace std;

struct Theater{
	int room;
	char seat[3];
	char movie[30];
};

int main(){
	Theater bioskop;
	cout << "Input Room : "; cin >> bioskop.room;
	cout << "Input Seat : "; cin >> bioskop.seat;
	cout << "Input Movie Title : "; cin  >> bioskop.movie;
	// output
	cout << "Struk Theater Anda" << endl;
	cout << "Room : " << bioskop.room <<endl;
	cout << "Seat : " << bioskop.seat <<endl;
	cout << "Movie Title : " << bioskop.movie <<endl;
}
