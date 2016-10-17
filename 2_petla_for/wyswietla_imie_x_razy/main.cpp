//petla pyta o imie i wyswietla je wskazana ilosc razy

#include <iostream>

using namespace std;

string imie;
int liczba;

int main()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj dodatnia liczbe calkowita: ";
    cin >> liczba;

    for (int i=1; i<=liczba; i++)     //petla wyswietla imie tyle razy ile wpisano w liczba
    {
        cout << i <<". " <<imie<< endl;
    }

    return 0;
}
