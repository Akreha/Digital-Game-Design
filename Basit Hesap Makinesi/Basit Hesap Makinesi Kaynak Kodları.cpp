

#include <iostream> // Kütüphane

using namespace std; // Her cin ve cout un başına std:: yazmamak için girdiğimiz kod.
int main()
{
	basadon:
	setlocale(LC_ALL, "Turkish");
	int islem_int, sayi_1, sayi_2, sonuc, basadon; // INT değerindeki değişkenler
	cout << "İşlem Kodları \n 0 = Toplama işlemi \n 1 = Çıkartma işlemi \n 2 = Bölme işlemi \n 3 = Çarpma işlmi \n \n Basit Hesap Makinesine Hoş Geldiniz \n Yapmak istediğiniz işlemin kodunu giriniz. ";
	cin >> islem_int;

	if (islem_int == 0) {
		// Toplama işlemi kodları
		cout << "Lütfen 1. sayıyı girin \n ";
		cin >> sayi_1;
		cout << "Lütfen 2. sayıyı girin \n ";
		cin >> sayi_2;
		sonuc = sayi_1 + sayi_2;
		cout << "\nToplama işleminizin sonucu : " << sonuc << "\n Yeni işlem yapmak için 1 yazın.";
		cin >> basadon;
		if (basadon == 1) {
			goto basadon;
		}

	}
	if (islem_int == 1) {
		// Çıkartma işlemi kodları
		cout << "Lütfen 1. sayıyı girin \n ";
		cin >> sayi_1;
		cout << "Lütfen 2. sayıyı girin \n ";
		cin >> sayi_2;
		sonuc = sayi_1 - sayi_2;
		cout << "\nÇıkartma işleminizin sonucu : " << sonuc << "\n Yeni işlem yapmak için 1 yazın.";
		cin >> basadon;
		if (basadon == 1) {
			goto basadon;
		}
	}
	if (islem_int == 2) {
		// Bölme işlemi kodları
		cout << "Lütfen 1. sayıyı girin \n ";
		cin >> sayi_1;
		cout << "Lütfen 2. sayıyı girin \n ";
		cin >> sayi_2;
		sonuc = sayi_1 / sayi_2;
		cout << "\nBölme işleminizin sonucu : " << sonuc << "\n Yeni işlem yapmak için 1 yazın.";
		cin >> basadon;
		if (basadon == 1) {
			goto basadon;
		}
	}
	if (islem_int == 3) {
		// Çarpma işlemi kodları
		cout << "Lütfen 1. sayıyı girin \n ";
		cin >> sayi_1;
		cout << "Lütfen 2. sayıyı girin \n ";
		cin >> sayi_2;
		sonuc = sayi_1 * sayi_2;
		cout << "\nÇarpma işleminizin sonucu : " << sonuc << "\n Yeni işlem yapmak için 1 yazın.";
		cin >> basadon;
		if (basadon == 1) {
			goto basadon;
		}
	}
	if (islem_int > 3) {
		cout << "4 İşlem dışında şu anda matematiksel hesaplamalar yapmıyoruz." << "\n 4 işlem yapmak için herhangi bir tuşa basın.";
		cin >> basadon;
		if (basadon == 1) {
			goto basadon;
		}
		else {
			goto basadon;
		}
	}
}
