#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	//Final 1.soru
	/*int toplam = 0;
	for (int i = 5; i >= 0; i--) // burda i'yi 5 e e�itliyoruz ve i 0 a e�it olana kadar eksiltiyoruz.
	{
		toplam = toplam + i; //burada int t�r�nden a�t���m�z toplam de�i�kenine her seferinde toplam�n� at�yoruz �rnek ;
		// ilk d�ng�de i=5 ve toplam=0 toplam = toplam + i yani // 0 = 0 + 5 bu de�er toplama at�l�yor i�lem sonunda toplam de�i�keni 5 
		// ikinci d�ng� de i 1 eksilerek 4 oldu toplamda 5 di yani // 5 = 5 + 4 bu i�lemin sonunda toplam 9 oluyor b�yle b�yle i 0 olana kadar devam
		// eder ve i�lem bitince d�ng�y� k�rar.
	}
	*/

	//Final 2.soru
	/*// cevab�n�n  a��klam�s� bir de�i�ken say� ile ba�layamaz
	int 5d = 5; // hata veriyor
	int d5 = 5; // hata vermez
	*/

	//Final 4.soru
	/*
	int a = 51; // a de�i�kenine 51 atad�k
	int b = a % 2; // burda b de�i�kenine a de�i�keninin 2 ye b�l�m�nden kalan� at�yoruz. 
	// %(mod alma) i�areti bir say�n�n bir say�ya b�l�m�nden kalan� al�r.
	*/

	//Final 6.soru
	/*
	//de�i�kenlerin ba��na rakam yazam�yoruduk
	double 1a = 6.78; // yanl�� hata verir
	int b1 = 100; // do�ru
	char b1 = 'ANNE'; // yanl�� nedeni ise b1 i�ine bir dizi olu�turlmam�� yani char b1[10] = "ANNE" olarak yazsayd� olurdu ��nki b1'in 
	// i�inde art�k 10 karakterlik kelime yazabiliriz, �ift t�rnak i�ine yazma nedeni art�k tek karakterlik de�ilde 4 karakterlik bir kelime oldu�undan
	bool g = normal // yanl�� ��nki boola sadece do�ru, yanl�� ve bunlar�n rakam kar��l���n� verebiliri 1(do�ru) 0(yanl��)
	*/

	//Final 8.soru
	int a = pow(3, 2); //pow kodu �ss� almam�z� sa�lar pow(2, 2) 2�ss� 2 sol taraf taban sa� tarf �ss� olacak �ekilde yaz�l�r.
	cout << a; 

	return 0;
}