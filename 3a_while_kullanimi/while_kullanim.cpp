#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish"); // cout içine yazýlan metinde türkçe harfleri kullanmamýzý saðlar.

	//while if gibidir fakar farklarý var while parantez içine yazýlan bilgi doðru ise o bilgi yanlýþ olana kadar while içine yazýlan kodlarý döndürüp durur.


	// Örnek 1

	bool deneme = true;

	while (deneme)
	{
		cout << "Deneme Mesajýdýr." << endl; // deneme deðiþkeni false olana kadar while içerisindeki bilgileri yazmaya ekrana basmaya devam edecektir.
		break; // ama istisna olarak break kullanýrsak içindeki kodlarý break koduna kadar yazýp  biter break(kýrma)

	}

	int sayi = 0;

	while (sayi <= 5)
	{
		cout << "Bu sayý hala 5 den küçük " << sayi << endl; // sayý anlýk olarak 0, her döngüde sayýyý yazdýrýyoruz
		sayi++; // sayýyý 1 arttýrmamýzý saðlar, her döngüde 1 arttýrarak 5 eþitlicek  5 e eþitlendiðinde döngü durup bitecek.
	}


	int s1;
	for (s1 = 1; s1<20; s1++)
	{
		cout << "Sayý : " << s1 << endl;
		if (s1 == 7)
		{
			
			break; // burda eðer sayý 7' ye eþit ise döngüyü bozup kýrmasý için break kullandýk.
		}
		

	}

	return 0;
}