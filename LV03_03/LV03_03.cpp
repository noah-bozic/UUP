// Noah Bozic i Martin Poldrugac

#include <iostream>
using namespace std;

int main()
{
    double E;
    double M;
    double odstupanje;
    cout << "Unesite prvi signal: ";
    cin >> E;
    cout << endl;
    cout << "Unesite drugi signal: ";
    cin >> M;
    cout << endl;
    odstupanje = E - M;
    cout << "Odstupanje iznosi: " << abs(odstupanje) << endl;
    bool stabilan = abs(odstupanje) <= 5;
    cout << "Sustav je stabilan: " << (stabilan ? "1" : "0") << endl;
    return 0;
    
}