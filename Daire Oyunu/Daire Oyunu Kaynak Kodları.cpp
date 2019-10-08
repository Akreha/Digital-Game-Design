// Ahmet Bohur Tarafından yazılmıştır!
#include <iostream> // Kütüphane çektik.
#include <conio.h> // Kütüphane çektik.


int main()
{
	int a, b, d;	// Değişkenlerimiz

	setlocale(LC_ALL, "Turkish"); // Türkçe karakterlerde sıkıntı yaşamamk için kullandığımız fonksiyon
	printf("Matematik Daire Oyun \n Oyunda N kadar karakter daire oluşturuluyor, bu ortamda 1 adet kılıç var ve 1. kişiden oyun başlıyor. \n Birinci kişi sağındaki kişiye kılıcı saplıyor ve öldürüyor ardından yanındaki ölmeyen kişiye kılıcı veriyor ve o da aynısını sağındaki kişi için yapıyor ve oyun sonda 1 kişi kalana kadar devam ediyor. \n N sayısına göre hangi sıradaki kişinin hayatta kaldığını bulalım."); // String türündeki açıklama yazımız. \n yazan kısımlar boşluk bırakmak için kullanılıyor.
	std::cout << "\n \nLütfen dairede kaç kişi olduğunu girin. (N Sayısı) \n"; // Kullanıcıdan bir sayı girmesini istiyoruz.
	std::cin >> a; // Girilen sayıyı a değişkenine atıyoruz.
	int* c = new int[a]; // Array yani dizi oluşturuyoruz.

	for (int i = 0; i < a; i++) { // For döngüsü oluşturduk ve girilen değere varıncaya kadar çalışması için ayarladık.
		b = pow(2, i); // b değişkeninin 2 üzeri i olmasını sağladık, i değişkenini for döngüsünde atadık.
		if (a > b) {			// a sayısı 2 üzeri i den büyükse çalışmasını istedik.
			c[i] = b; // a sayısı 2 üzeri i den büyükse yukarıdaki oluşturduğumuz dizinin içine kaydetmesini istedik örnek vermek gerekitse c[0] = 1 , c[1] = 2 , c[2] = 4 gibi.

		}
		else {		// b değişkeni yani 2 üzeri i, a sayısından büyükse olacakları giriyoruz.	
			d = 1 + 2 * (a - c[i - 1]); // matematik öğretmeninin verdiği formulü girdik. c[i-1] ile oluşturulan en büyük 2 üzeri i sayısını çektik.
			std::cout << a << " Kişi arasından kurtulacak şanslı kişi : " << d << ".Sıradaki kişi. \n\n"; // Sonuçları kullanıcı için dışarıya yazdırdık.	
			break; // döngünün sürekli çalışmasını engellemek için break komutunu kullandık bu sayede gereksiz çalışmasını engelledik.			
		}
	}
	system("PAUSE"); // Bir tuşa tıklanana kadar programın kapanmasını engelledik, bekleme moduna aldık.
	return 0;

}
