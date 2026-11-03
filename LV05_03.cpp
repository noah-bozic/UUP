#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Unesi vrijeme od A -> ";
    cin >> a;
    cout << endl;
    cout << "Unesi vrijeme od B -> ";
    cin >> b;
    cout << endl;
    cout << "Unesi vrijeme od C -> ";
    cin >> c;
    cout << endl;
    char pobjednik = 'A';
    int najmanje = a;
    if (b < najmanje) {
        najmanje = b;
        pobjednik = 'B';
    }
    if (c < najmanje) {
        najmanje = c;
        pobjednik = 'C';
    }
    cout << pobjednik << " " << najmanje << endl;
    return 0;
}