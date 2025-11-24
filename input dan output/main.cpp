#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

int main() {
    std::string NamaBarang;
    int HargaBarang;
    int JumlahBarang;
    
    std::cout << "Masukan nama Barang belanjaan kamu: ";
    std::getline(std::cin, NamaBarang); 
    
    std::cout << "Masukan harga barang belanjaan kamu: ";
    std::cin >> HargaBarang;
    
    std::cout << "Masukan jumlah barang belanjaan kamu: ";
    std::cin >> JumlahBarang;
    
    long long TotalBelanja = (long long)HargaBarang * JumlahBarang;
    
    double HargaSetelahDiskonPerUnit;
    double JumlahDiskonTotal;

    if (HargaBarang > 16200) {
        HargaSetelahDiskonPerUnit = HargaBarang - (HargaBarang * 0.02);
    } else {
        HargaSetelahDiskonPerUnit = HargaBarang;
    }

    long long TotalBayar = (long long)std::round(HargaSetelahDiskonPerUnit * JumlahBarang); 
    
    JumlahDiskonTotal = TotalBelanja - TotalBayar;

    std::cout << "\n=========Struk Pembelian============" << std::endl;
    std::cout << "Nama Barang : " << NamaBarang << std::endl;
    
    // Menggunakan iomanip untuk format mata uang
    std::cout << std::fixed << std::setprecision(2);
    
    std::cout << "Harga Satuan: Rp " << (double)HargaBarang << std::endl;
    std::cout << "Jumlah      : " << JumlahBarang << std::endl;
    std::cout << "Total       : Rp " << (double)TotalBelanja << std::endl;
    std::cout << "Diskon      : Rp " << JumlahDiskonTotal << std::endl;
    std::cout << "Total Bayar : Rp " << (double)TotalBayar << std::endl;
    std::cout << "====================================" << std::endl;
    
    return 0;
}