#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Turkish");
	// a de�i�kenine 55 de�erini atad�k, �uan bu rakam ram bellekte tutuluyor bunun adresini pointer ile bulucaz.
	int a = 55;

	// * i�areti ile p de�i�kenini pointer olarak kullan�caz (i�aret�i)
	int* p = &a; // & (ampersant) i�areti adresini aln�r, pointer bu belle�i tutar 
	// int p = &a diyemeyiz adresleri pointerlar tutar.
	

	// s�ra yazd�rmakta
	cout << "Yaln�zca p : " << p << " / "
		<< " Yanln�zca *p : " << *p << " / "
		<< " Yaln�zca &a : " << &a << " / "
		<< " Yaln�zca a : " << a << endl;

	// k�saca pointer olan p, a de�i�keninin bellek adresi veriliyor (&a) 
	// p, adrese gibip tutulan de�eri yazar yani 55'i (&a bellek adresi) 


	return 0;
}