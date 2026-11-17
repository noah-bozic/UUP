#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int brojac=0;
	cin >> a;
	if (a<100)
	{
		cin >> a;
	}
	cin >> b;
	if (b < a)
	{
		cin >> b;
	}
	for (int i = a; i <= b; i++)
	{
		cout << i << " ";
		brojac++;
		if (brojac % 10 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}