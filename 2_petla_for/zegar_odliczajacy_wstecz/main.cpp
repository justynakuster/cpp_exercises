//odliczanie czasu od 15sekund do zera i na koncu ma byc komunikat koniec!

#include <iostream>
#include<windows.h>//UWAGA, na linuksie nie windows.h tylko unistd.h
#include <cstdlib> //dla pewnosci by cls zadzialalo

using namespace std;

int main()
{
    for (int i=15;i>=0;i--)
    {
        Sleep(1000);        //funkcja Sleep usypia program (komunikat na ekranie): Sleep(milisekundy);
                            //1 sekunda to 1000 milisekund, dodac biblioteke windows.h
        system("cls");      //czyszczenie ekranu po kazdym wyswietleniu cyfry
                            //na linuksie system("clear");
        cout << i << endl;      //wypisz aktualna wartosc i
    }

    cout << "Koniec odliczania: BUM!" << endl;  //po zakonczeniu odliczania wypisz, ze to koniec

    return 0;
}
