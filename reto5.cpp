#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Introduce un número mayor o igual a 3: ";
    cin >> n;
    if (n<3) {
        cout << "Debe ser mayor o igual a 3";
        return -1;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "* ";
    }
    cout << "\n";
    for (int i=1; i<n-1; i++) {
        for (int j=1; j<=i; j++) {
            cout << " ";
        }
        cout << "*";
        for (int j=1; j<=(2*n-5)-2*(i-1); j++) {
            cout << " ";
        }
        cout << "*";
        for (int j=1; j<=1+2*(i-1); j++) {
            cout << " ";
        }
        cout << "*\n";
    }
    for (int i=1; i<n; i++) {
        cout << " ";
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "* ";
    }
}