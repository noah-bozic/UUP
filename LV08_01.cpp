#include <iostream>
using namespace std;
int main()
{
int a;
int b;
cin >> a;
cin >> b;
if ((a==b)&&(a%2))
{
	cout << "NEMA";
}
else
{
	for (int i = a; i <= b; i++)
	{
		if (!(i%2))
		{
			cout << i << " ";
		}
	}
}
return 0;
}