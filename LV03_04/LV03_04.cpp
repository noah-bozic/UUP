// Noah Bozic i Martin Poldrugac

#include <iostream>
using namespace std;

int main()
{
    double x, y;
    double R;
    double udaljenost;
    cout << "Unesite udaljenost na x osi: ";
    cin >> x;
    cout << endl;
    cout << "Unesite udaljenost na y osi: ";
    cin >> y;
    cout << endl;
    cout << "Unesite sigurnu udaljenost od ishodista: ";
    cin >> R;
    cout << endl;
    udaljenost = sqrt(x * x + y * y);
    bool siguran = udaljenost >= R;
    cout << "Udaljenost od ishodista je: " << udaljenost << endl;
    cout << "Je li sigurno: " << (siguran ? "1" : "0") << endl;
}