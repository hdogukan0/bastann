#include <iostream>
using namespace std;

class silah
{
public: // e�er public kullanmazsak main k�sm�nda class�n i�indeki de�i�kenlere bilgilere eri�emeyiz

	string ad;
	int mermiKapasitesi;

}; // istersek burdan, istersek 2.yoldan a�a��dan de�i�ken atayabiliriz.


int main()
{
	setlocale(LC_ALL, "Turkish");

	// de�i�ken atamada 2.yol
	silah yol2; 
	// de�i�kenlerin giri� i�lemi
	cout << "Silah Ad�n� Giriniz : ";
	cin >> yol2.ad; cout << endl;

	cout << "Silah�n Mermi Kapasitesini Giriniz : ";
	cin >> yol2.mermiKapasitesi; cout << endl;

	// ekrana yazd�rma
	cout << yol2.ad << " / " << yol2.mermiKapasitesi << " / " << endl;


	return 0;
}