#include <iostream>
using namespace std;

int main()
{
	// Birka� �rnek ile if kullan�m� 

	bool deneme = true; // Bool 4 �e�it kullan�l�r do�ru, yanl��, 1 ve 0 olarak.


	if (deneme) // if e�er anlam�na gelir parantez i�ine yaz�lan i�lem do�ru ise ilk b�l�m �al���r e�er yanl�� ise (else) in alt�ndaki b�l�m �al���r �rnek
	{
		cout << "Dogru \n"; // parantez i�indeki deneme de�i�kenini yukar�da true yani do�ru olarak atad���m�z i�in ilk b�lme �al��acak  \n bir alt sat�ra ge�memizi sa�lar
	}
	else
	{
		cout << "Yanlis \n"; // e�er yukarda deneme de�i�kenini false olarak atasayd�k bu b�lme �al��acakt�

	}

	cout << endl;

	//�rnek 2


	int s1, s2, sonuc;

	cout << "Sayi 1'i giriniz : \t"; // burda  \t , \n gibi bir alt sat�ra ge�mek i�in de�il 8 karakterlik bo�luk b�rakmak i�in kulland�m.
	cin >> s1;
	cout << endl; // endl bir alt sat�ra ge�mizi sa�lar.
	cout << "Sayi 2'yi giriniz : \t"; 
	cin >> s2;
	cout << endl;

	sonuc = s1 + s2;  // burada toplam diye a�t���m�z de�i�kene s1 ve s2 nin toplam�n� atad�k konsoldan girilin s1 ve s2 say�s� veya rakam� toplan�p , toplam de�i�keninin i�ine yaz�lacak

	cout << "Sonuc : " << sonuc << endl; // burada toplam de�i�kenini ekrana yazd�r�yoruz bir de�i�keni ekrana yazd�r�rken t�rnak kullan�lmaz.
	cout << endl;

	// i�lemi de�i�tirmek isterseniz yukar�dakini   + de�ilde *, - veya / i�areti koyarak istenilen i�lem sonucuna g�re de�eri al�r 

	if (sonuc == 10) //burda : e�er toplam de�i�keni (==) e�it ise 10'a ilk de�il ise else'in b�lmesini �al��t�r mesela
	{
		cout << "Toplam 10'a esittir";
		cout << endl;

	}
	else
	{
		cout << "Toplam 10'a esit degildir.";
		cout << endl;
	}

	cout << endl;

	// �rnek3

	string username;  // string uzun kelimeler tutabilir.
	char password;  // char tek karakter tutabilir  tabi dizi olarak kullan�lmaz neyse �uanl�k sktr et, tek karakter tutar hee

	cout << "Username giriniz : \t";
	cin >> username; 
	cout << endl;
	cout << "Password giriniz : \t";
	cin >> password;
	cout << endl;

	if (username == "admin" && password == '1') //burada e�er username (admin)' e e�it &&(ve demek) password de 1'e e�it ise ilk b�lmeyi �al��t�r manas�na gelir (manas��� ��ok derin).
	{
		cout << "Giris Basarili" << endl;
	}
	else // e�er yanl�� ise bu else b�lmesi �al��acak
	{
		cout << "Giris Basarisiz" << endl;

	}

	return 0;
}