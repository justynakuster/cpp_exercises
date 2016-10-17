// z 1 bakterii po godzinie sa dwie, po dwoch sa cztery..po ilu godzinach liczba bakterii przekroczy 1 miliard?

#include <iostream>

using namespace std;

int bakterie=1;
int godziny=0;  //bo majac 1 bakterie nie uplynela jeszcze zadna godzina

int main()
{
    while (bakterie<=1000000000)
    {
        godziny++; //godzin = godzin + 1

        bakterie = bakterie * 2; //bo co godzine tworza sie 2bakterie

        cout << "Minelo godzin: " << godziny;
        cout << " liczba bakterii to: " << bakterie << endl;
    }
    return 0;
}
