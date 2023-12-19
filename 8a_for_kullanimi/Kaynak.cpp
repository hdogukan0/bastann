#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int dizi[2][2]; // 2 eleman l� 2 boyutlu matris de�i�keni 
	// birinci eleman
	// 0 -> 0 // birinci eleman�n 1. eleman�,  yazd���m�z de�erler bu k�melere yaz�l�r 
	//   -> 1 // birinci eleman�n 2. eleman�,  yazd���m�z de�erler bu k�melere yaz�l�r 
	//		  // yani 0. elaman�n 0. elaman�na konsoladan rakam veya herhangi bir de�er at�yaca��z
	//		  // sonra 0. elaman�n 1. elaman�na konsoladan rakam veya herhangi bir de�er at�yaca��z
	//		  // hep b�yle i�ler
	// ikinci eleman
	// 1 -> 0 // ikinci eleman�n 1.eleman�
	//   -> 1 // ikinci eleman�n 2.eleman�
	
	// a��l�m�  ayn� bu �ekilde


	for (int i = 0; i < 2; i++) // burda dizinin ilk eleman�n� giri� veya yazd�rmak i�in d�ng� a��yoruz
	{ 
		// bu d�ng�de i 0 olarak ba�l�yacak, i 2 ye kadar artacak ve her artt���nda i�indeki bitirene kadar i�lemi d�nd�recek
		//ilk d�ng� i = 0
		//ikinci d�ng� i 1 artt� i = 1
		for (int j = 0; j < 2; j++) // burdada dizinin elman�n i�indeki eleman� yazd�rma veya giri�ini yapmak i�in a��yoruz
		{
			// ilk d�ng�de i = 0,   j = 0  j = 1 // i'nin ilk d�ng�s� bitti tek
			// ikinci d�ng� i = 0, bu for d�ng�s� tekrar ba�tan ba�l�yacak j = 0, j = 1, 2 ye kadar artt�rd�.
			cout << "dizi [" << i << "] ";
			cout << "[" << j << "]  ";
			cin >> dizi[i][j];
			cout << endl;

		}
		// bu d�ng� i�ini bitirdi i�in art�k ��k�� yapacak
	}
	

	// ilk d�ng� bitti art�k s�radaki kodu arar bulmazsa bitirir.

	// dizi i�indeki elemanlar� yazd�rma

	for (int m = 0; m < 2; m++)
	{
		for (int n = 0; n < 2; n++)
		{
			cout << "dizi [" << m << "] ";
			cout << "[" << n << "]  ";

			cout << dizi[m][n] << " / " << m << "'�nc� eleman�n " << " " << n << "'�nc� eleman�na yaz�lan de�er ";
			cout << endl;

		}
	}


	return 0;
}