#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    float disc = b*b - 4*a*c;
    if (disc >= 0) {
        int x1, x2;
        x1 = (-1*b + sqrt(disc))/2*a;
        x2 = (-1*b - sqrt(disc))/2*a;
        cout << "x1 = " << x1 << "x2 = " << x2;
    } else {
        cout << "No hay solucion: ";
    }
}