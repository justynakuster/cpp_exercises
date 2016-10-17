#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int xyz;
	cout << "A teraz sprawdzamy rozmiar typow w bajtach" << endl;
	cout <<"typ int: \t" << sizeof(int)<<endl;
	cout <<"typ char: \t" << sizeof(char)<<endl;
	cout <<"typ double: \t"<<sizeof(double)<<endl;
	cout <<"typ float: \t" <<sizeof(float)<<endl;
	cout << endl;
	cout <<"Obiekt xyz ma rozmiar:\t" <<sizeof(xyz)<<" bajtow."<<endl;
	return 0;
	
}
