#include <iostream>
#include <string>
#include <limits>   
using namespace std;

// program atm sederhana
int main(){
    string nama;
    int saldo;
    int pilihan, jumlah;

    cout << "Masukkan nama Anda: ";
    getline(cin, nama);

    cout << "Halo, " << nama << "! Apakah nama kamu sudah benar? (1. Ya / 2. Tidak): ";
    cin >> pilihan;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(pilihan == 2){
        cout << "Masukkan nama Anda kembali: ";
        getline(cin, nama);
    }

    cout << "Masukkan saldo awal Anda: Rp ";;
    cin >> saldo;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nSelamat datang, " << nama << "!" << endl;
    cout << "Saldo awal Anda: Rp " << saldo << endl;

    cout << "Menu:" << endl;
    cout << "1. Cek Saldo" << endl;
    cout << "2. Tarik Tunai" << endl;
    cout << "3. Transfer" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih transaksi (1-4): ";

    cout << "Pilihan Anda: ";
    cin >> pilihan;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch (pilihan) {
        case 1:
            cout << "\nSaldo Anda saat ini: Rp " << saldo << endl;
            break;

        case 2:
            cout << "\nMasukkan jumlah yang ingin ditarik: Rp ";
            cin >> jumlah;
            if (jumlah > saldo) {
                cout << "\nSaldo tidak mencukupi untuk penarikan ini." << endl;
            } else {
                saldo -= jumlah;
                cout << "\nPenarikan berhasil! Saldo Anda sekarang: Rp " << saldo << endl;
            }    
            break;

        case 3:
            cout << "\nMasukkan jumlah yang ingin ditransfer: Rp ";
            cin >> jumlah;
            if (jumlah > saldo) {
                cout << "\nSaldo tidak mencukupi untuk transfer ini." << endl;
            } else {
                saldo -= jumlah;
                cout << "\nTransfer berhasil! Saldo Anda sekarang: Rp " << saldo << endl;
            }
            break;
        
        case 4:
            cout << "\nTerima kasih telah menggunakan layanan ATM kami. Sampai jumpa!" << endl;
            break;

        default:
            cout << "\nPilihan tidak valid! Silakan pilih antara 1 hingga 4." << endl;
            break;
    }
    return 0;
}