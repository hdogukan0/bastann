#include <iostream>
using namespace std;

// struct ile class arasýndaki fark, struct veri tipidir diyelim kopyasýný oluþturduk : asýl structda ki
// verileri deðiþtirirsek kopyasý deðiþmez 2 kopyada birbirinden baðýmsýz çalýþýr.

struct deneme // deneme adýnda struct oluþtuduk 
{ 
	// içine deðiþkenler atadýk bunlara direkt eriþebiliriz. 
	// eðer class kullansaydýk, public kullanmak zorunda kalýrdýk
	int id;
	int yas;
	string ad;
	string rutbe;

}deneme1; //struct ta buradan da deðiþken atayabilirsiniz. 


int main()
{
	setlocale(LC_ALL, "Turkish");


	deneme dn; // deneme structýný, dn (istediðinizi yazabilirsiniz) olarak deðiþken atadýk
	
	// deðiþkenlerin giriþ iþlemini yaptýrýyoruz
	cout << "Struct id nurmarasýný giriniz : ";
	cin >> dn.id; cout << endl;

	cout << "Struct yaþýnýzý giriniz : ";
	cin >> dn.yas; cout << endl;

	cout << "Struct adýnýzý giriniz : ";
	cin >> dn.ad; cout << endl;

	cout << "Struct kýdeminizi giriniz : ";
	cin >> dn.rutbe; cout << endl;

	// giriþ yapýlan deðiþkenleri yazdýrýyoruz.

	cout << dn.id << "\n"
		 << dn.yas << "\n"
		 << dn.ad << "\n"
		 << dn.rutbe << "\n";

	// ayný iþlemleri yukarda atadýðýmýz deðiþken ilede yapabiliriz
	cout << endl;
	cout << "struct atadýðýmýz deðiþkenin bilgileri (deneme1) : " << endl;
	cout << endl;

	deneme1.id = 11;
	deneme1.ad = "Doðukan";
	deneme1.yas = 19;
	deneme1.rutbe = "Öðrenci";

	cout << deneme1.id << "\n"
		<< deneme1.yas << "\n"
		<< deneme1.ad << "\n"
		<< deneme1.rutbe << "\n";





	return 0;
}