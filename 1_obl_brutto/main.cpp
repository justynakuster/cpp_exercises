/* Program oblicza cenê brutto dla podanej ceny netto i stawki podatku VAT */

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

    // Ustaw stawkê podatku VAT
    stawka_vat = 0.23;

    // Pobierz cenê netto
    cout << "Cena netto? ";
    cin >> cena_netto;

    // Oblicz cenê brutto
    cena_brutto = cena_netto * ( 1 + stawka_vat);

    // Wyœwietl cenê brutto
    cout << "Cena brutto: " << cena_brutto << endl;

    // Czekaj na naciœniêcie jakiegokolwiek klawisza
    cin.ignore();
    cin.get();
    
    // Zwróæ wartoœæ 0 oznaczaj¹c¹ poprawne wykonanie programu
    return 0;
}
*/
