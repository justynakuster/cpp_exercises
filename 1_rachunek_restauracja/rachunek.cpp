#include <iostream>
#include <cmath>

using namespace std;

int main()
{

double meal, tip, total;

cout << "Podaj cene posilku: " << endl;
cin >> meal;

tip = 0.15 * meal;
total = meal + tip;

cout << "15% napiwek wynosi: "<<tip<<" zl." << endl;
cout << "Calkowita cena za posilek wraz z napiwkiem wynosi: " << total << "zl." << endl;

}
