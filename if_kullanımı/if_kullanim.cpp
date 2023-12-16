#include <iostream>
using namespace std;

int main()
{
	// Birkaç örnek ile if kullanýmý 

	bool deneme = true; // Bool 4 çeþit kullanýlýr doðru, yanlýþ, 1 ve 0 olarak.


	if (deneme) // if eðer anlamýna gelir parantez içine yazýlan iþlem doðru ise ilk bölüm çalýþýr eðer yanlýþ ise (else) in altýndaki bölüm çalýþýr örnek
	{
		cout << "Dogru \n"; // parantez içindeki deneme deðiþkenini yukarýda true yani doðru olarak atadýðýmýz için ilk bölme çalýþacak  \n bir alt satýra geçmemizi saðlar
	}
	else
	{
		cout << "Yanlis \n"; // eðer yukarda deneme deðiþkenini false olarak atasaydýk bu bölme çalýþacaktý

	}

	cout << endl;

	//Örnek 2


	int s1, s2, sonuc;

	cout << "Sayi 1'i giriniz : \t"; // burda  \t , \n gibi bir alt satýra geçmek için deðil 8 karakterlik boþluk býrakmak için kullandým.
	cin >> s1;
	cout << endl; // endl bir alt satýra geçmizi saðlar.
	cout << "Sayi 2'yi giriniz : \t"; 
	cin >> s2;
	cout << endl;

	sonuc = s1 + s2;  // burada toplam diye açtýðýmýz deðiþkene s1 ve s2 nin toplamýný atadýk konsoldan girilin s1 ve s2 sayýsý veya rakamý toplanýp , toplam deðiþkeninin içine yazýlacak

	cout << "Sonuc : " << sonuc << endl; // burada toplam deðiþkenini ekrana yazdýrýyoruz bir deðiþkeni ekrana yazdýrýrken týrnak kullanýlmaz.
	cout << endl;

	// iþlemi deðiþtirmek isterseniz yukarýdakini   + deðilde *, - veya / iþareti koyarak istenilen iþlem sonucuna göre deðeri alýr 

	if (sonuc == 10) //burda : eðer toplam deðiþkeni (==) eþit ise 10'a ilk deðil ise else'in bölmesini çalýþtýr mesela
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

	// Örnek3

	string username;  // string uzun kelimeler tutabilir.
	char password;  // char tek karakter tutabilir  tabi dizi olarak kullanýlmaz neyse þuanlýk sktr et, tek karakter tutar hee

	cout << "Username giriniz : \t";
	cin >> username; 
	cout << endl;
	cout << "Password giriniz : \t";
	cin >> password;
	cout << endl;

	if (username == "admin" && password == '1') //burada eðer username (admin)' e eþit &&(ve demek) password de 1'e eþit ise ilk bölmeyi çalýþtýr manasýna gelir (manasýýý ççok derin).
	{
		cout << "Giris Basarili" << endl;
	}
	else // eðer yanlýþ ise bu else bölmesi çalýþacak
	{
		cout << "Giris Basarisiz" << endl;

	}

	return 0;
}