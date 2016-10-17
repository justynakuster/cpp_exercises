#include <iostream>

using namespace std;

string PIN; //string gwarantuje 4znaki w pinie, poza tym int-by obcial zero w nr pin

int main()
{
    cout << "Witaj w naszym banku" << endl;
	cout << "Podaj numer PIN: ";
	cin >> PIN;

	if (PIN=="1729") {	//ustalamy, ze poprawny pin to tylko 1729
	cout << "Poprawny PIN!";
	}

	else{
	cout << "Niepoprawny!";
	}

return 0;
}
