#include <iostream>
using namespace std;

int main()
{
    char a[20] = "Belajar Tipe data"; 
    short b;
    int c;
    long d; 
    float e; 
    double f;
    int g = 1;
    int h = 2;

    b = 1000;
    c = 1000000;
    d = 10000000;
    e = 4.0;
    f = 3.14;

    cout << "Tipe data char = " << a << endl;
    cout << "Tipe data short = " << b << endl;
    cout << "Tipe data int = " << c << endl;
    cout << "Tipe data long = " << d << endl;
    cout << "Tipe data float = " << e << endl;
    cout << "Tipe data double = " << f << endl;
    cout << "Tipe data int = " << g << endl;
    cout << "Tipe data int = " << h << endl;
    
    cout << "Berikut hasil bolean : " << endl;
    cout << "g > h : " << (g > h) << endl;
    cout << "g < h : " << (g < h) << endl;
    cout << "g >= h : " << (g >= h) << endl;
    cout << "g <= h : " << (g <= h) << endl;
    cout << "g == h : " << (g == h) << endl;
    cout << "g != h : " << (g != h) << endl;
    return 0;
}