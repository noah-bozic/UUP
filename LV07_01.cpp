#include <iostream>
using namespace std;

int main() 
{
	char strana;
	cout << "Unesi stranu kretanja koristeci WASD -> ";
	cin >> strana;
	cout << endl;
	switch (strana)
	{
	case 'w': case 'W': cout << "naprijed"; break;
	case 'a': case 'A': cout << "lijevo"; break;
	case 's': case 'S': cout << "nazad"; break;
	case 'd': case 'D': cout << "desno"; break;
	default: cout << "nepoznata naredba";  break;
	}
	return 0;
}