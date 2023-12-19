#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int dizi[2][2]; // 2 eleman lý 2 boyutlu matris deðiþkeni 
	// birinci eleman
	// 0 -> 0 // birinci elemanýn 1. elemaný,  yazdýðýmýz deðerler bu kümelere yazýlýr 
	//   -> 1 // birinci elemanýn 2. elemaný,  yazdýðýmýz deðerler bu kümelere yazýlýr 
	//		  // yani 0. elamanýn 0. elamanýna konsoladan rakam veya herhangi bir deðer atýyacaðýz
	//		  // sonra 0. elamanýn 1. elamanýna konsoladan rakam veya herhangi bir deðer atýyacaðýz
	//		  // hep böyle iþler
	// ikinci eleman
	// 1 -> 0 // ikinci elemanýn 1.elemaný
	//   -> 1 // ikinci elemanýn 2.elemaný
	
	// açýlýmý  ayný bu þekilde


	for (int i = 0; i < 2; i++) // burda dizinin ilk elemanýný giriþ veya yazdýrmak için döngü açýyoruz
	{ 
		// bu döngüde i 0 olarak baþlýyacak, i 2 ye kadar artacak ve her arttýðýnda içindeki bitirene kadar iþlemi döndürecek
		//ilk döngü i = 0
		//ikinci döngü i 1 arttý i = 1
		for (int j = 0; j < 2; j++) // burdada dizinin elmanýn içindeki elemaný yazdýrma veya giriþini yapmak için açýyoruz
		{
			// ilk döngüde i = 0,   j = 0  j = 1 // i'nin ilk döngüsü bitti tek
			// ikinci döngü i = 0, bu for döngüsü tekrar baþtan baþlýyacak j = 0, j = 1, 2 ye kadar arttýrdý.
			cout << "dizi [" << i << "] ";
			cout << "[" << j << "]  ";
			cin >> dizi[i][j];
			cout << endl;

		}
		// bu döngü iþini bitirdi için artýk çýkýþ yapacak
	}
	

	// ilk döngü bitti artýk sýradaki kodu arar bulmazsa bitirir.

	// dizi içindeki elemanlarý yazdýrma

	for (int m = 0; m < 2; m++)
	{
		for (int n = 0; n < 2; n++)
		{
			cout << "dizi [" << m << "] ";
			cout << "[" << n << "]  ";

			cout << dizi[m][n] << " / " << m << "'ýncý elemanýn " << " " << n << "'ýncý elemanýna yazýlan deðer ";
			cout << endl;

		}
	}


	return 0;
}