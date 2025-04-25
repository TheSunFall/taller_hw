#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Introduce un número impar mayor o igual a 5: ";
    cin >> n;

    if (n < 5 || n % 2 == 0) {
        cout << "El número debe ser impar y mayor o igual a 5." << endl;
        return 1;
    }

    int half = n / 2;

    for (int i = 0; i < n; i++) {
        if (i <= half) {
            // Parte superior
            for (int j = 0; j < n; j++) {
                if (j < n - i || j >= n - i + (i)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        } else {
            // Parte inferior
            for (int j = 0; j < n; j++) {
                if (j < i + 1 || j >= i + 1 + (n - i - 1)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
