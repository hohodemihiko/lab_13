#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int x;
    cin >> x;
    switch (x) {
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
            cout << 29 << endl;

    }
    return 0;
}