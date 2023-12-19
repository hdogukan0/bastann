#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Turkish");
	// a deðiþkenine 55 deðerini atadýk, þuan bu rakam ram bellekte tutuluyor bunun adresini pointer ile bulucaz.
	int a = 55;

	// * iþareti ile p deðiþkenini pointer olarak kullanýcaz (iþaretçi)
	int* p = &a; // & (ampersant) iþareti adresini alnýr, pointer bu belleði tutar 
	// int p = &a diyemeyiz adresleri pointerlar tutar.
	

	// sýra yazdýrmakta
	cout << "Yalnýzca p : " << p << " / "
		<< " Yanlnýzca *p : " << *p << " / "
		<< " Yalnýzca &a : " << &a << " / "
		<< " Yalnýzca a : " << a << endl;

	// kýsaca pointer olan p, a deðiþkeninin bellek adresi veriliyor (&a) 
	// p, adrese gibip tutulan deðeri yazar yani 55'i (&a bellek adresi) 


	return 0;
}