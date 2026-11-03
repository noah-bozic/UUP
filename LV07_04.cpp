#include <iostream>

using namespace std;

int main() 
{
	int dan;
	cout << "Unesi redni broj dana -> ";
	cin >> dan;
	cout << endl;
	switch (dan)
	{
	case 1: cout << "“PONEDJELJAK";
	case 2: cout << "“UTORAK";
	case 3: cout << "“SRIJEDA";
	case 4: cout << "“CETVRTAK";
	case 5: cout << "“PETAK";
	case 6: cout << "“SUBOTA";
	case 7: cout << "“NEDJELJA";
	break;
	default: cout << "NEISPRAVAN DAN";
	break;
	}
}