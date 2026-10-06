// Noah Bozic i Martin Poldrugac

#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double d;
    cout << "Unesite duljinu prve katete:";
    cin >> a;
    cout << endl;
    cout << "Unesite duljinu druge katete:";
    cin >> b;
    cout << endl;
    d = sqrt(a * a + b * b);
    cout << "Duljina hipotenuze je: " << d << endl;
    return 0;
}
