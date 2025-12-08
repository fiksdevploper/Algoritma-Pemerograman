import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.stream.Collectors;

public class NIM_Array {
    public static void printDigitArray(ArrayList<Integer> arr) {
        System.out.print("[");
        for (int i = 0; i < arr.size(); i++) {
            System.out.print(arr.get(i) + (i < arr.size() - 1 ? ", " : ""));
        }
        System.out.println("]");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String nimString;
        
        System.out.println("========================================");
        System.out.println("PROGRAM ANALISIS DIGIT NIM");
        System.out.println("========================================");
        System.out.print("Masukkan NIM Anda: ");
        nimString = scanner.nextLine(); 

        ArrayList<Integer> digitArray = new ArrayList<>();
        for (int i = 0; i < nimString.length(); i++) {
            char c = nimString.charAt(i);
            if (Character.isDigit(c)) {
                digitArray.add(c - '0'); 
            }
        }
        
        int N = digitArray.size();
        
        if (N == 0) {
            System.err.println("\nError: NIM tidak mengandung digit angka yang valid.");
            scanner.close();
            return;
        }
        
        System.out.println("\nNIM (String): " + nimString);
        System.out.print("Array Digit: ");
        printDigitArray(digitArray);
        System.out.println("Jumlah Digit: " + N);
        System.out.println("----------------------------------------");
        int totalDigit = 0;
        for (int digit : digitArray) {
            totalDigit += digit;
        }
        System.out.println("Total Seluruh Digit: " + totalDigit);
        int maksDigit = Collections.max(digitArray);
        System.out.println("Maksimum Digit: " + maksDigit);
        int minDigit = Collections.min(digitArray);
        System.out.println("Minimum Digit: " + minDigit);
        double rataRata = (double)totalDigit / N;
        System.out.printf("Rata-rata Digit: %.4f%n", rataRata); // Menggunakan printf untuk format presisi

        System.out.println("----------------------------------------");
        ArrayList<Integer> reversedDigitArray = new ArrayList<>(digitArray); 
        Collections.reverse(reversedDigitArray); // Membalik urutan secara in-place pada salinan

        System.out.print("Urutan Digit Terbalik: ");
        printDigitArray(reversedDigitArray);
        
        System.out.println("========================================");

        scanner.close();
    }
}