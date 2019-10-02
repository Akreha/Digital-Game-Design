#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int tabandaki_karakter_sayisi = 5, bosluk;
	cout << "Tabanda en fazla olacak karakter sayısı (tek sayı olmalıdır.) \n";
	cin >> tabandaki_karakter_sayisi;
	bosluk = tabandaki_karakter_sayisi / 2;


	for (int i = 1; i <= tabandaki_karakter_sayisi; i+=2, bosluk--) {
		for (int x = 0; x < bosluk; x++) {
			cout << " ";
		}

		for (int y = 0; y < i; y++) {
			cout << "*";
		}
		cout << "\n";
	}
}
