#include <iostream>

using namespace std;

int main() {
    int mjesec, godina;
    cout << "Unesi mjesec -> ";
    cin >> mjesec;
    cout << endl;
    cout << "Unesi godinu -> ";
    cin >> godina;
    cout << endl;
    if (godina < 1) {
        cout << "NEISPRAVNA GODINA" << endl;
        return 0;
    }
    if (mjesec < 1) {
        cout << "NEISPRAVAN MJESEC" << endl;
        return 0;
    }
    else {
        if (mjesec > 12) {
            cout << "NEISPRAVAN MJESEC" << endl;
            return 0;
        }
    }
    switch (mjesec) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    cout << 31 << endl;
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    cout << 30 << endl;
    break;
    case 2:
        if (godina % 400 == 0) {
            cout << 29 << endl;
        }
        else {
            if (godina % 4 == 0) {
                if (godina % 100 != 0) {
                    cout << 29 << endl;
                }
                else {
                    cout << 28 << endl;
                }
            }
            else {
                cout << 28 << endl;
            }
        }
        break;
    }

    return 0;
}