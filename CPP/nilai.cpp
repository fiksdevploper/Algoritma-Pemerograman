#include <iostream>
using namespace std;

// pernghitngan nilai menggunakan bahasa c++
int main() {
    float tugas, uts, uas, nilaiAkhir;
    cout << "Masukkan nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> uts; 
    cout << "Masukkan nilai UAS: ";
    cin >> uas;

    nilaiAkhir = (0.3 * tugas) + (0.35 * uts) + (0.35 * uas);
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    if(nilaiAkhir >= 60)
        cout << "Keterangan: Lulus" << endl;
    else
        cout << "Keterangan: Tidak Lulus" << endl;
}