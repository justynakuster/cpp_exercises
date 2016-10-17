#include <iostream>
/*
Sa 3 sytuacje:
1) <18 nie jestes pelnoletni, nie mozesz zostac prezydentem
2) 18-34 jestes pelnoletni, ale nie mozesz zostac prezydentem
3) >35 jestes pelnoletni i mozesz zostac prezydentem
*/
using namespace std;

int wiek;

int main()
{
    cout << "Podaj wiek: ";
    cin >> wiek;

    if (wiek<18)
        {
        cout << "Nie jestes pelnoletni. Nie mozesz zostac prezydentem.";
        }
    else if ((wiek>=18)&&(wiek<35))            //else if sprawdza czy masz wiek w przedziale 18-34
    {
        cout << "Jestes pelnoletni, ale nie mozesz zostac prezydentem.";
    }
     else //nie ma potrzeby pisac warunku! bo to juz oczywiste, ze tylko ten przedzial zostal (wiek>=35)
        {
        cout << "Masz ponad 35 lat i mozesz kandydowac na prezydenta.";
        }

    return 0;
}
