#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	//Final 1.soru
	/*int toplam = 0;
	for (int i = 5; i >= 0; i--) // burda i'yi 5 e eþitliyoruz ve i 0 a eþit olana kadar eksiltiyoruz.
	{
		toplam = toplam + i; //burada int türünden açtýðýmýz toplam deðiþkenine her seferinde toplamýný atýyoruz örnek ;
		// ilk döngüde i=5 ve toplam=0 toplam = toplam + i yani // 0 = 0 + 5 bu deðer toplama atýlýyor iþlem sonunda toplam deðiþkeni 5 
		// ikinci döngü de i 1 eksilerek 4 oldu toplamda 5 di yani // 5 = 5 + 4 bu iþlemin sonunda toplam 9 oluyor böyle böyle i 0 olana kadar devam
		// eder ve iþlem bitince döngüyü kýrar.
	}
	*/

	//Final 2.soru
	/*// cevabýnýn  açýklamýsý bir deðiþken sayý ile baþlayamaz
	int 5d = 5; // hata veriyor
	int d5 = 5; // hata vermez
	*/

	//Final 4.soru
	/*
	int a = 51; // a deðiþkenine 51 atadýk
	int b = a % 2; // burda b deðiþkenine a deðiþkeninin 2 ye bölümünden kalaný atýyoruz. 
	// %(mod alma) iþareti bir sayýnýn bir sayýya bölümünden kalaný alýr.
	*/

	//Final 6.soru
	/*
	//deðiþkenlerin baþýna rakam yazamýyoruduk
	double 1a = 6.78; // yanlýþ hata verir
	int b1 = 100; // doðru
	char b1 = 'ANNE'; // yanlýþ nedeni ise b1 içine bir dizi oluþturlmamýþ yani char b1[10] = "ANNE" olarak yazsaydý olurdu çünki b1'in 
	// içinde artýk 10 karakterlik kelime yazabiliriz, çift týrnak içine yazma nedeni artýk tek karakterlik deðilde 4 karakterlik bir kelime olduðundan
	bool g = normal // yanlýþ çünki boola sadece doðru, yanlýþ ve bunlarýn rakam karþýlýðýný verebiliri 1(doðru) 0(yanlýþ)
	*/

	//Final 8.soru
	int a = pow(3, 2); //pow kodu üssü almamýzý saðlar pow(2, 2) 2üssü 2 sol taraf taban sað tarf üssü olacak þekilde yazýlýr.
	cout << a; 

	return 0;
}