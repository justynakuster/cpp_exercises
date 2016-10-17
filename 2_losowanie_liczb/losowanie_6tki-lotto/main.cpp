//lotto losowanie 6ciu liczb z 49

#include <iostream>
#include <windows.h>    //do funkcji sleep
#include <time.h>

using namespace std;

int liczba;

int main()
{
    cout << "Witaj w losowaniu! Za 3 sekundy nastapi zwolnienie blokady i wylosuje 6 liczb.." << endl;
    Sleep(3000);    //uspienie na 3sekundy
    cout<<endl;
    srand(time(NULL));   //inicjalizacja generatora liczb losowych

    //petla do wylosowania szesciu liczb
    for (int i=1; i<=6 ;i++)
    {
        //do zmiennej 'liczba' wlozyc wylosowana liczbe
        liczba = rand()%49+1;
        Sleep(1000);
        cout << liczba<<"\a"<<"\t";
    }


    return 0;
}
