#include "pch.h"
#include <iostream>


using namespace std;
int main()
{
	setlocale(LC_ALL, "TURKISH");
    cout << "Merhaba!\n";

	int sayi;
	
	cout << "Karesi al�ncak say� : ";
	cin >> sayi;
	sayi = sayi * sayi;
	cout << "Girdi�iniz say�n�n karesi : " << sayi;
}
