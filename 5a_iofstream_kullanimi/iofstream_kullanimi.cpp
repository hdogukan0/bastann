#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	ofstream dosya("test.txt");

	string s1, s2, s3, s4; // 4 adet string t�r�nde de�i�ken tan�d�m
	char bosluk = ' ';  // bosluk b�rakmak i�in kullan�caz

	cout << "1. metni gir : ";  // 1. string de�i�kenine de�er giriyoruz
	cin >> s1; cout << "\n";

	cout << "2. metni gir : "; // 2. string de�i�kenine de�er giriyoruz
	cin >> s2; cout << "\n";

	cout << "3. metni gir : "; // 3. string de�i�kenine de�er giriyoruz
	cin >> s3; cout << "\n";

	cout << "4. metni gir : "; // 4. string de�i�kenine de�er giriyoruz
	cin >> s4; cout << "\n";

	// burada sat�r sat�r yazd�rma i�lemi yap�yoruz
	dosya << s1 << endl; // dosya i�indeki s1 de�i�kenini yazd�r�yorum
	dosya << s2 << endl; // dosya i�indeki s2 de�i�kenini yazd�r�yorum
	dosya << s3 << endl; // dosya i�indeki s3 de�i�kenini yazd�r�yorum
	dosya << s4 << endl; // dosya i�indeki s4 de�i�kenini yazd�r�yorum

	// burda tek bir sat�r halinde bo�luk kullanarak yazd�r�yoruz
	dosya << s1 << bosluk << s2 << bosluk << s3 << bosluk << s4 << bosluk << endl;
	

	// dosyay� kapatt�k
	dosya.close();



	return 0;
}
