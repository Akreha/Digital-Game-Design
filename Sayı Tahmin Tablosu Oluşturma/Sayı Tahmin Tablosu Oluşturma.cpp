#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");

	int bulunacak_Sayi;
basaal:
	cout << "Lütfen tablosu oluşturulcak sayıyı girin(1 - 256 Arasında olması gerekiyor, 256 dahil değil!) : ";
	cin >> bulunacak_Sayi;
	//int* kareler = new int[bulunacak_Sayi];
	if (bulunacak_Sayi >= 256) {
		goto basaal;
	}
	else {
		int sayi = 1, sayac = 0, kare_sayisi = 0;
		for (int i = 0; i < bulunacak_Sayi; i++) {
			int kare = pow(2, i);
			if (kare <= bulunacak_Sayi) {
				kare_sayisi++;
			}
			else {
				for (int c = 1; c <= kare_sayisi; c++) {

					cout << "Tablo " << c << "\n";
					sayac = 0;
					int sayi_tespit = 1;
					while (sayac <= bulunacak_Sayi) {
						// 1. Tablo

						if (c == 1 && sayi % 2 != 0) {
							if (sayi < 256) { if (sayi == 1) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
							sayi++;
							sayac++;
						}
						else if (c == 1 && sayi % 2 == 0) {
							sayi++;
							sayac++;
						}

						// 2. Tablo
						if (c == 2 && sayac == 0) {
							sayac++;
							sayi = 2;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
							if (sayi < 256) { cout << sayi << "\n"; }
						}
						else if (c == 2 && sayi % 2 == 0) {
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							sayi++;
							sayac++;
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}
						else if (c == 2 && sayi % 2 != 0) {
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							sayi = sayi + 3;
							sayac++;
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}

						// 3. Tablo
						if (c == 3 && sayac == 0) {
							sayac++;
							sayi = 4;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
							if (sayi < 256) { cout << sayi << "\n"; }
						}
						else if (c == 3 && sayi_tespit < 4) {
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							sayi_tespit++;
							sayac++;
							sayi = sayi + 1;
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}
						else if (c == 3 && sayi_tespit == 4) {
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							sayac++;
							sayi_tespit = 1;
							sayi = sayi + 5;
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}
						// 4. Tablo

						if (c == 4 && sayac == 0) {
							sayac++;
							sayi = 8;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
							if (sayi < 256) { cout << sayi << "\n"; }
						}
						else if (c == 4 && sayi_tespit < 8) {
							sayi_tespit++;
							sayac++;
							sayi = sayi + 1;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}
						else if (c == 4 && sayi_tespit == 8) {
							sayac++;
							sayi_tespit = 1;
							sayi = sayi + 7;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}

						// 5. Tablo

						if (c == 5 && sayac == 0) {
							sayac++;
							sayi = 16;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
							if (sayi < 256) { cout << sayi << "\n"; }
						}
						else if (c == 5 && sayi_tespit < 16) {
							sayi_tespit++;
							sayac++;
							sayi = sayi + 1;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}
						else if (c == 5 && sayi_tespit == 16) {
							sayac++;
							sayi_tespit = 1;
							sayi = sayi + 7;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}

						// 6. Tablo

						if (c == 6 && sayac == 0) {
							sayac++;
							sayi = 32;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
							if (sayi < 256) { cout << sayi << "\n"; }
						}
						else if (c == 6 && sayi_tespit < 32) {
							sayi_tespit++;
							sayac++;
							sayi = sayi + 1;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}
						else if (c == 6 && sayi_tespit == 32) {
							sayac++;
							sayi_tespit = 1;
							sayi = sayi + 9;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}


						// 7. Tablo

						if (c == 7 && sayac == 0) {
							sayac++;
							sayi = 64;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
							if (sayi < 256) { cout << sayi << "\n"; }
						}
						else if (c == 7 && sayi_tespit < 64) {
							sayi_tespit++;
							sayac++;
							sayi = sayi + 1;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}
						else if (c == 7 && sayi_tespit == 64) {
							sayac++;
							sayi_tespit = 1;
							sayi = sayi + 11;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}


						// 8. Tablo

						if (c == 8 && sayac == 0) {
							sayac++;
							sayi = 128;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
							if (sayi < 256) { cout << sayi << "\n"; }
						}
						else if (c == 8 && sayi_tespit < 128) {
							sayi_tespit++;
							sayac++;
							sayi = sayi + 1;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}
						else if (c == 8 && sayi_tespit == 128) {
							sayac++;
							sayi_tespit = 1;
							sayi = sayi + 13;
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							if (sayi < 256) { if (sayi == bulunacak_Sayi) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2); } else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7); } cout << sayi << "\n"; }
						}


					}


				}

				goto basaal;
				break;
			}
		}
	}
}