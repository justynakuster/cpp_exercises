//prosty switch

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

int liczba;
cout << "Podaj liczbe naturalna mniejsza niz 10\n" << endl;
cin >> liczba;

switch (liczba) {
	case 3:
	cout << "Liczba jest podzielna przez 3\n";
	break;
	case 6:
	cout << "Liczba jest podzielna przez 3\n";
	break;
	case 9:
	cout << "Liczba jest podzielna przez 3\n";
	break;
	
	case 4:
	cout << "Liczba jest podzielna przez 4\n";
	break;
	case 8:
	cout << "Liczba jest podzielna przez 4\n";
	break;
	
	default: cout << "Liczba nieprawidlowa!\n"<<endl;
//return 0;
}}
