#include <iostream>
#include <string>
#include <vector>
#include <numeric>  
#include <algorithm> 
#include <cmath>     
#include <iomanip>   

void print_digit_array(const std::vector<int>& arr) {
    std::cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << (i < arr.size() - 1 ? ", " : "");
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::string nim_string; 
    std::cout << "========================================" << std::endl;
    std::cout << "PROGRAM ANALISIS DIGIT NIM" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Masukkan NIM Anda: ";
    std::cin >> nim_string; 
    
    std::vector<int> digit_array;
    for (char c : nim_string) {
        if (std::isdigit(c)) {
            digit_array.push_back(c - '0'); 
        }
    }

    int N = digit_array.size();

    if (N == 0) {
        std::cerr << "\nError: NIM tidak mengandung digit angka yang valid." << std::endl;
        return 1;
    }
    
    std::cout << "\nNIM (String): " << nim_string << std::endl;
    std::cout << "Array Digit: ";
    print_digit_array(digit_array);
    std::cout << "Jumlah Digit: " << N << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    
    int total_digit = std::accumulate(digit_array.begin(), digit_array.end(), 0);
    std::cout << "Total Seluruh Digit: " << total_digit << std::endl;
    
    int maks_digit = *std::max_element(digit_array.begin(), digit_array.end());
    std::cout << "Maksimum Digit: " << maks_digit << std::endl;

    
    int min_digit = *std::min_element(digit_array.begin(), digit_array.end());
    std::cout << "Minimum Digit: " << min_digit << std::endl;

    
    double rata_rata = (double)total_digit / N;
    std::cout << std::fixed << std::setprecision(4); 
    std::cout << "Rata-rata Digit: " << rata_rata << std::endl;

    std::cout << "----------------------------------------" << std::endl;

    std::vector<int> reversed_digit_array = digit_array;
    std::reverse(reversed_digit_array.begin(), reversed_digit_array.end());
    
    std::cout << "========================================" << std::endl;

    return 0;
}