//zgadywanka-program losuje liczbe i uzytkownik ja odgaduje, program zlicza ilosc prob
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba, odgadywanie, ile_prob=0;

int main()
{
    cout << "Sprobuj odgadnac liczbe z przedzialu 1-100: " << endl;
    srand(time(NULL));    //generator liczb losowych tzn. pobierz liczbe sekund od 1970 do dzis
    liczba = rand()%100+1;
    //cout <<liczba;  //w wersji ostatecznej usuwamy ta linie by nie pokazywac co wylosowal komputer
        /*przedzial to 0-99, po modulo musi byc liczba o jeden wieksza od maximum naszego przedzialu
        losowanie zawsze jest z przedzialu 0..x-1
        przyklad:
        wylosuj liczbe z zakresu 51..75
        w zakresie jest liczb 25 bo (75-51)
        liczba = rand()%25
        losowanie z przedzialu 0...24

        Gdy potrzeba wylosowac liczbe niecalkowita mozna stosowac dzielenie np.:
        losowanie liczby niecalkowitej z zakresu 0...1
        liczba = rand()%101	/100
        losowanie z przedzialu 0..100

        zeby wylosowac np. 10 liczb losowych to pod srand() trzeba 10razy wkleic
        liczba = rand()%100+1;
        cout <<liczba;
    */
    while(odgadywanie!=liczba)
    {
        ile_prob++;
        cout << " Zgaduj (to twoja "<<ile_prob<<" proba) ";
        cin >> odgadywanie;

        if (odgadywanie==liczba)
            cout << "Brawo! Odgadles wylosowana liczbe w " <<ile_prob<< " probach." << endl;

        if (odgadywanie<liczba)
            cout << "Liczba jest za mala. Probuj dalej.";

        else if (odgadywanie>liczba)
            cout << "Liczba jest za duza. Probuj dalej.";
    }
    getchar();
    //system("pause");    zatrzymuje program az wcisniesz enter
    //system wyswietli na ekranie komunikat: Nacisnij dowolny przycisk aby kontunuowac.

    return 0;
}
