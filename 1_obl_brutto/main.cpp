/* Program oblicza cen� brutto dla podanej ceny netto i stawki podatku VAT */

#include <iostream>
using namespace std;
int main ()
{
double vat, netto, brutto;
vat = 0.23;

cout << "Podaj wartosc netto:\t" << endl;
cin >> netto;

brutto = netto * (vat+1);

cout << "Wartosc brutto wynosi:\t" << brutto << endl;
	
	return 0;
}


/*
#include <iostream>
using namespace std;
int main ()
{
    double cena_netto, cena_brutto, stawka_vat; 

    // Ustaw stawk� podatku VAT
    stawka_vat = 0.23;

    // Pobierz cen� netto
    cout << "Cena netto? ";
    cin >> cena_netto;

    // Oblicz cen� brutto
    cena_brutto = cena_netto * ( 1 + stawka_vat);

    // Wy�wietl cen� brutto
    cout << "Cena brutto: " << cena_brutto << endl;

    // Czekaj na naci�ni�cie jakiegokolwiek klawisza
    cin.ignore();
    cin.get();
    
    // Zwr�� warto�� 0 oznaczaj�c� poprawne wykonanie programu
    return 0;
}
*/
