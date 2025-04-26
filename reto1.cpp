#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese altura de Z: "; cin >> n;
    if (n<3) {
        cout << "Debe ser mayor o igual a 3";
        return -1;
    }
    for (int i=1; i<=n; i++) {
        cout << "*";
    }
    cout << "\n";
    for (int i=n-2; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            cout << " ";
        }
        cout << "*\n";
    }
    for (int i=1; i<=n; i++) {
        cout << "*";
    }
}