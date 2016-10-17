#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
double posilek;
int tax = 22;
double brutto = posilek + (posilek * tax);
int tip = 33 * brutto;
double total = brutto + (brutto * tip);

cout << "Podaj cene netto posilku: " << endl;
cin >> posilek;
//cout << "podatek ma wartosc: "<< tax<< endl;
cout << "Cena posilku brutto: " << brutto << "zl." << endl;
//cout << "15% napiwek wynosi: "<<tip<<" zl." << endl;
cout << "Cena za posilek wraz z napiwkiem wynosi: " << total << "zl." << endl;

}
