#include <iostream>
using namespace std;

int main()
{
	char op;
	int a;
	int b;
	cout << "Unesi prvi broj -> ";
	cin >> a;
	cout << endl;
	cout << "Unesi drugi broj -> ";
	cin >> b;
	cout << endl;
	cout << "Unesi znak operacije -> ";
	cin >> op;
	cout << endl;
	switch (op)
	{
	case '+': cout << a+b; break;
	case '-': cout << a-b; break;
	case '*': cout << a*b; break;
	case '/': 
	if (b == 0)
	{
		cout << "DIJELJENJE NULOM"; break;
	}
	else
	{
		cout << a / b; break;
	}
	case '%':
	if (b == 0)
	{
		cout << "DIJELJENJE NULOM"; break;
	}
	else
	{
		cout << a % b; break;
	}
	case '^': cout << a*a; break;
	default: cout << "NEPOZNATA NAREDBA";  break;
	}
	return 0;
}