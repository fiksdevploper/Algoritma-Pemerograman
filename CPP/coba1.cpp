#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14159;
    float r, luas;
    cout << "Masukkan jari-jari: ";
    cin >> r;
    luas = PI * r * r;
    cout << "Luas lingkaran " << r << " adalah " << luas << endl;
    return 0;
}