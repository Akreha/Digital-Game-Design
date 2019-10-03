#include <iostream> // Kütüphane
using namespace std; // Cout ve cin in başına sürekli olarak ::std yazmamak için kullandığımız kod.

int main() {
	setlocale(LC_ALL, "Turkish"); // Türkçe (Ş,Ç,İ) karakterlerin gözükmesindeki bozulmayı engellemek için kod.
	string kullanici_adi_kayitli = "ahmetbohur", sifre_kayitli= "123456"; // Kullanıcının girmesi gereken kullanıcı adı ve şifre
	string kullanici_adi, sifre; // Kullanıcının girdiği verilerin saklanacağı değişkenler


	cout << "Kullanıcı girişi sistemine hoşgeldiniz \n\n"; // Karşılama yazısı
	// Kullanıcıdan istenilen verileri girmesini istedik.
	cout << "Kullanıcı adınızı girin (Değiştirmediyseniz: ahmetbohur) \n";
	cin >> kullanici_adi;

	cout << "Şifrenizi girin (Değiştirmediyseniz: 123456) \n";
	cin >> sifre;

	// Girilen verileri yukarıdaki doğru olan şifre ve kullanıcı adı ile kıyasladık
	if (kullanici_adi == kullanici_adi_kayitli && sifre == sifre_kayitli) {
		cout << "Başarılı bir şekilde giriş yapıldı";
		// Kullanıcı girişi doğru ise bura çalışıyor
	}
	else {
		cout << "Kullanıcı adınız veya şifreniz hatalı!";
		// Kullanıcı girişi hatalı ise burası çalışıyor.
	}
}