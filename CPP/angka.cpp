#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Masukkan sebuah angka: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    if (a > b) {
        cout << a << " adalah angka genap." << b << endl;
    } else if (a<b)
    {
        cout << a << " lebih kecil dari " << b << endl;
    }
    else {
        cout << " Keduanya sama besar" << endl;
        cout << " Apakah kdeuanya sama?"<< (a==b);
    }
}