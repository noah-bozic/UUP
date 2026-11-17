#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n<100000)
    {
        cin >> n;
        if (n > 999999) 
        {
            cin >> n;
        }
    }
    int f = n % 10; n /= 10;
    int e = n % 10; n /= 10;
    int d = n % 10; n /= 10;
    int c = n % 10; n /= 10;
    int b = n % 10; n /= 10;
    int a = n % 10; n /= 10;
    cout << a << ".....\n";
    cout << "." << b << "...." << endl;
    cout << ".." << c << "..." << endl;
    cout << "..." << d << ".." << endl;
    cout << "...." << e << "." << endl;
    cout << "....." << f << "" << endl;

        return 0;
    }
