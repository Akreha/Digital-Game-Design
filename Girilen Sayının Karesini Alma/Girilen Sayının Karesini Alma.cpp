#include "pch.h"
#include <iostream>


using namespace std;
int main()
{
	setlocale(LC_ALL, "TURKISH");
    cout << "Merhaba!\n";

	int sayi;
	
	cout << "Karesi alýncak sayý : ";
	cin >> sayi;
	sayi = sayi * sayi;
	cout << "Girdiðiniz sayýnýn karesi : " << sayi;
}
