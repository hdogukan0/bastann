#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish"); // cout i�ine yaz�lan metinde t�rk�e harfleri kullanmam�z� sa�lar.

	//while if gibidir fakar farklar� var while parantez i�ine yaz�lan bilgi do�ru ise o bilgi yanl�� olana kadar while i�ine yaz�lan kodlar� d�nd�r�p durur.


	// �rnek 1

	bool deneme = true;

	while (deneme)
	{
		cout << "Deneme Mesaj�d�r." << endl; // deneme de�i�keni false olana kadar while i�erisindeki bilgileri yazmaya ekrana basmaya devam edecektir.
		break; // ama istisna olarak break kullan�rsak i�indeki kodlar� break koduna kadar yaz�p  biter break(k�rma)

	}

	int sayi = 0;

	while (sayi <= 5)
	{
		cout << "Bu say� hala 5 den k���k " << sayi << endl; // say� anl�k olarak 0, her d�ng�de say�y� yazd�r�yoruz
		sayi++; // say�y� 1 artt�rmam�z� sa�lar, her d�ng�de 1 artt�rarak 5 e�itlicek  5 e e�itlendi�inde d�ng� durup bitecek.
	}


	int s1;
	for (s1 = 1; s1<20; s1++)
	{
		cout << "Say� : " << s1 << endl;
		if (s1 == 7)
		{
			
			break; // burda e�er say� 7' ye e�it ise d�ng�y� bozup k�rmas� i�in break kulland�k.
		}
		

	}

	return 0;
}