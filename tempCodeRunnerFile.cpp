#include <iostream>

using namespace std;

int main() {
    int f;
    int n;
    cin >> n;
    for (double i = 1; i <= n; i++){
        f -= i;
        i++;
        f += i;
    }
    cout << f;
    return 0;
}