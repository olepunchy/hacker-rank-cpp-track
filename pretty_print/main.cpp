// Problem: Pretty Print
// Source: Hack Rank C++ Track
//
// Sample Input:
//
// 1
// 100.345 2006.008 2331.41592653498
//
// Sample Output:
//
// 0x64
// _______+2006.01
// 2.331415927E+03

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--) {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;

        /* Enter your code here */

        // A
        cout << hex << left << showbase << nouppercase;
        cout << (long long)A << "\n";

        // B
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed
             << setprecision(2);
        cout << B << "\n";

        // C
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << C << "\n";
    }
    return 0;
}
