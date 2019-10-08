#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	basadon:
	setlocale(LC_ALL, "turkish");
	int girilen_Sayi, kare, sayac=0, kare_max=0, sayac_2, sayilar_kontrol, sayi;
	
	cout << "Lütfen tablosunu oluşturmak istediğiniz sayıyı girin : ";
	cin >> girilen_Sayi;
	
	int *kareler = new int[girilen_Sayi];

	for (int i = 0; i < girilen_Sayi; i++) {
		kare = pow(2, i);
		if (kare <= girilen_Sayi) {
			kareler[i] = kare;
			kare_max++;
			// cout << kareler[i];
		}
		else {
			while (sayac < kare_max) {
				cout << "\n" << sayac + 1 << ".Tablo :";
				sayilar_kontrol = 0;
				sayi = 0;
				sayac_2 = 0;
				while (sayac_2 <= girilen_Sayi) {
					sayac_2++;
					
					
					if (sayac == 0 && sayac_2 % 2 != 0) {
						if (sayac_2 == girilen_Sayi) {
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
						}
						else {
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
						}
						cout << sayac_2 << " ";
					}
					
					if (sayac == 1 && sayilar_kontrol % 2 == 0) {				
						if (sayilar_kontrol == 0) {
							sayilar_kontrol = 1;
						}
						sayilar_kontrol++;
						if (sayilar_kontrol <= girilen_Sayi) {
							if (sayilar_kontrol == girilen_Sayi) {
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
							}
							else {
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							}
							cout << sayilar_kontrol << " ";
						}
					}
					else if (sayac == 1 && sayilar_kontrol % 2 != 0) {
						sayilar_kontrol = sayilar_kontrol + 3;
						if (sayilar_kontrol <= girilen_Sayi) {
							if (sayilar_kontrol == girilen_Sayi) {
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
							}
							else {
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
							}
							cout << sayilar_kontrol << " ";
						}
					}


					if (sayac >= 2) {

						if (sayilar_kontrol == 0) {
							sayilar_kontrol = kareler[sayac] - 1;
						}
						if (sayi == kareler[sayac]) {
							sayi = 1;
							sayilar_kontrol = sayilar_kontrol + kareler[sayac] + 1;
							if (sayilar_kontrol <= girilen_Sayi) {
								if (sayilar_kontrol == girilen_Sayi) {
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
								}
								else {
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
								}
								cout << sayilar_kontrol << " ";
							}
						}
						else {
							sayilar_kontrol++;
							sayi++;
							if(sayilar_kontrol <= girilen_Sayi){
								if (sayilar_kontrol == girilen_Sayi) {
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 2);
								}
								else {
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
								}
								cout << sayilar_kontrol << " ";
							}
							
						}
					}

					

				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 * 16 + 7);
				cout << "\n";
				sayac++;
			}
			cout << "\n";
			goto basadon;
			break;
		}
	}

}


