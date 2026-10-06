// Noah Bozic i Martin Poldrugac

#include <iostream>
using namespace std;

int main()
{
    int S;
    int minute;
    int sekunde;
    cout << "Unesite vrijeme u sekundama: ";
    cin >> S;
    cout << endl;
    minute = S / 60;
    sekunde = S % 60;
    cout << "Vrijeme u minutama i sekundama: " << minute << " minuta i " << sekunde << " sekundi." << endl;
    return 0;
}

