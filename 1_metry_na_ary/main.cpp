#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	double metry;

	cout << "Podaj powierzchnie w metrach kwadratowych: " << endl;
	cin >> metry;

double przeliczenie;
przeliczenie = sqrt (metry);

cout << "Wskazana powierzchnia w metrach odpowiada arom: " << przeliczenie << endl;

	return 0;
}
