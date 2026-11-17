#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
if (n<2)
{
cin >> n;
if (n>10000)
{
cin >> n;
}
}
int i = 1;
int broj_djelitelja = 0;
while (i <= n)
{
if (n % i == 0)
{
if (broj_djelitelja > 0)
{
cout << ", ";
}
cout << i;
broj_djelitelja++;
}
i++;
}
cout << endl;
cout << broj_djelitelja << endl;
return 0;
}