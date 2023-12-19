#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	ofstream dosya("test.txt");

	string s1, s2, s3, s4; // 4 adet string türünde deðiþken tanýdým
	char bosluk = ' ';  // bosluk býrakmak için kullanýcaz

	cout << "1. metni gir : ";  // 1. string deðiþkenine deðer giriyoruz
	cin >> s1; cout << "\n";

	cout << "2. metni gir : "; // 2. string deðiþkenine deðer giriyoruz
	cin >> s2; cout << "\n";

	cout << "3. metni gir : "; // 3. string deðiþkenine deðer giriyoruz
	cin >> s3; cout << "\n";

	cout << "4. metni gir : "; // 4. string deðiþkenine deðer giriyoruz
	cin >> s4; cout << "\n";

	// burada satýr satýr yazdýrma iþlemi yapýyoruz
	dosya << s1 << endl; // dosya içindeki s1 deðiþkenini yazdýrýyorum
	dosya << s2 << endl; // dosya içindeki s2 deðiþkenini yazdýrýyorum
	dosya << s3 << endl; // dosya içindeki s3 deðiþkenini yazdýrýyorum
	dosya << s4 << endl; // dosya içindeki s4 deðiþkenini yazdýrýyorum

	// burda tek bir satýr halinde boþluk kullanarak yazdýrýyoruz
	dosya << s1 << bosluk << s2 << bosluk << s3 << bosluk << s4 << bosluk << endl;
	

	// dosyayý kapattýk
	dosya.close();



	return 0;
}
