#include <iostream>
using namespace std;

// struct ile class aras�ndaki fark, struct veri tipidir diyelim kopyas�n� olu�turduk : as�l structda ki
// verileri de�i�tirirsek kopyas� de�i�mez 2 kopyada birbirinden ba��ms�z �al���r.

struct deneme // deneme ad�nda struct olu�tuduk 
{ 
	// i�ine de�i�kenler atad�k bunlara direkt eri�ebiliriz. 
	// e�er class kullansayd�k, public kullanmak zorunda kal�rd�k
	int id;
	int yas;
	string ad;
	string rutbe;

}deneme1; //struct ta buradan da de�i�ken atayabilirsiniz. 


int main()
{
	setlocale(LC_ALL, "Turkish");


	deneme dn; // deneme struct�n�, dn (istedi�inizi yazabilirsiniz) olarak de�i�ken atad�k
	
	// de�i�kenlerin giri� i�lemini yapt�r�yoruz
	cout << "Struct id nurmaras�n� giriniz : ";
	cin >> dn.id; cout << endl;

	cout << "Struct ya��n�z� giriniz : ";
	cin >> dn.yas; cout << endl;

	cout << "Struct ad�n�z� giriniz : ";
	cin >> dn.ad; cout << endl;

	cout << "Struct k�deminizi giriniz : ";
	cin >> dn.rutbe; cout << endl;

	// giri� yap�lan de�i�kenleri yazd�r�yoruz.

	cout << dn.id << "\n"
		 << dn.yas << "\n"
		 << dn.ad << "\n"
		 << dn.rutbe << "\n";

	// ayn� i�lemleri yukarda atad���m�z de�i�ken ilede yapabiliriz
	cout << endl;
	cout << "struct atad���m�z de�i�kenin bilgileri (deneme1) : " << endl;
	cout << endl;

	deneme1.id = 11;
	deneme1.ad = "Do�ukan";
	deneme1.yas = 19;
	deneme1.rutbe = "��renci";

	cout << deneme1.id << "\n"
		<< deneme1.yas << "\n"
		<< deneme1.ad << "\n"
		<< deneme1.rutbe << "\n";





	return 0;
}