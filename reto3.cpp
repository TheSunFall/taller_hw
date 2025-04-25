#include <iostream>
using namespace std;

int main()
{
    int n;
    int medio;
    cout << "Introduce un número impar mayor o igual a 5: ";
    cin >> n;
    if (n%2 == 0 || n<5) {
        cout << "Debe ser impar y mayor o igual a 5";
        return -1;
    }
    medio = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        if (i <= medio)
        {
            cout << "*";
        } else {
            cout << " ";
        }
    }
    cout << "\n";
    for (int j = 2; j < medio; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == medio)
            {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
    }
    cout << "\n";
    for (int j = 2; j < medio; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == n || i == medio)
            {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        if (i >= medio)
        {
            cout << "*";
        } else {
            cout << " ";
        }
    }
    return 0;
}