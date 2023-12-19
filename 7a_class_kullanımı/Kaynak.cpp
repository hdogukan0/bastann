#include <iostream>
using namespace std;

class silah
{
public: // eðer public kullanmazsak main kýsmýnda classýn içindeki deðiþkenlere bilgilere eriþemeyiz

	string ad;
	int mermiKapasitesi;

}; // istersek burdan, istersek 2.yoldan aþaðýdan deðiþken atayabiliriz.


int main()
{
	setlocale(LC_ALL, "Turkish");

	// deðiþken atamada 2.yol
	silah yol2; 
	// deðiþkenlerin giriþ iþlemi
	cout << "Silah Adýný Giriniz : ";
	cin >> yol2.ad; cout << endl;

	cout << "Silahýn Mermi Kapasitesini Giriniz : ";
	cin >> yol2.mermiKapasitesi; cout << endl;

	// ekrana yazdýrma
	cout << yol2.ad << " / " << yol2.mermiKapasitesi << " / " << endl;


	return 0;
}