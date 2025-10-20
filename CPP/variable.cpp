// variable menggunakan cpp
#include <iostream>
using namespace std;

int main(){
    short a; 
    int b; 
    long c; 
    float d; 
    double e; 
    char data_karakter = 'A'; 
    char materi1[9] = "Variabel"; 
 
    a = 10000; 
    b = 1000000; 
    c = 1000000000; 
    d = 3.12; 
    e = 3.12345;
    
    cout << "Tipe data short = " << a << endl; 
    cout << "Tipe data int = " << b << endl; 
    cout << "Tipe data long = " << c << endl; 
    cout << "Tipe data float = " << d << endl; 
    cout << "Tipe data double = " << e << endl; 
    cout << "Tipe data char = " << data_karakter << endl; 
    cout << "Tipe data string = " << materi1 << endl;
}