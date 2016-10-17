//domyslne poprawne ustawienia ustalam na: admin i szarlotka
#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

    if ((login=="admin") && (haslo=="szarlotka")){
        cout << "Login i haslo poprawne!\n";
    }
    else{
        cout << "Nie udalo sie zalogowac, probuj dalej\n";
    }
    return 0;
}
