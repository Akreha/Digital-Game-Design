// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <conio.h>


int main()
{	
    int a, b, d, k;	
	int c[1000];
	setlocale(LC_ALL, "Turkish"); // Türkçe şeyler
	printf("Matematik Daire Oyun \n Oyunda N kadar karakter daire oluşturuluyor, bu ortamda 1 adet kılıç var ve 1. kişiden oyun başlıyor. \n Birinci kişi sağındaki kişiye kılıcı saplıyor ve öldürüyor ardından yanındaki ölmeyen kişiye kılıcı veriyor ve o da aynısını sağındaki kişi için yapıyor ve oyun sonda 1 kişi kalana kadar devam ediyor. \n N sayısına göre hangi sıradaki kişinin hayatta kaldığını bulalım.");
	std::cout << "\n \nLütfen dairede kaç kişi olduğunu girin. (N Sayısı) \n";
	std::cin >> a;

	for (int i = 0; i < a; i++) {
		b = pow(2, i);
		if (a > b) {			
			c[i] = b;
			
		}else{		
			if (i > 1) {
				k = i - 1;
			}
			else {
				k = 1;
			}
			d = 1 + 2 * (a - c[k]);
			std::cout << a << " Kişi arasından kurtulacak şanslı kişi : " << d <<".Sıradaki kişi. \n\n";
	
			break;
			
		}
	}	
	system("PAUSE");
	return 0;

}


