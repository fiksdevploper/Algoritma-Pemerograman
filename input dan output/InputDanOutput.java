import java.util.Scanner;
import java.text.DecimalFormat;

public class InputDanOutput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        DecimalFormat formatter = new DecimalFormat("#,##0.00");

        String namaBarang;
        String hargaBarangInput; 
        String jumlahBarangInput;
        
        int hargaBarang;
        int jumlahBarang;

        System.out.print("Masukan nama Barang belanjaan kamu: ");
        namaBarang = scanner.nextLine(); 
        
        System.out.print("Masukan harga barang belanjaan kamu: ");
        hargaBarangInput = scanner.nextLine(); // <-- Menggunakan nextLine()
        
        System.out.print("Masukan jumlah barang belanjaan kamu: ");
        jumlahBarangInput = scanner.nextLine(); // <-- Menggunakan nextLine()
        
        try {
            hargaBarang = Integer.parseInt(hargaBarangInput);
            jumlahBarang = Integer.parseInt(jumlahBarangInput);
        } catch (NumberFormatException e) {
            System.err.println("\nERROR: Harga dan Jumlah barang harus berupa angka bulat.");
            return; 
        } finally {
            scanner.close();
        }
        
        long totalBelanjaAwal = (long)hargaBarang * jumlahBarang;
        double diskon = 0.0;
        
        if (hargaBarang > 16200) {
            diskon = 0.02;
        }
        
        double hargaSetelahDiskonPerUnit = (double)hargaBarang * (1.0 - diskon);
        long totalBayar = Math.round(hargaSetelahDiskonPerUnit * jumlahBarang);
        long jumlahDiskonTotal = totalBelanjaAwal - totalBayar;
    
        
        System.out.println("\n=========Struk Pembelian============");
        System.out.println("Nama Barang : " + namaBarang);
        System.out.println("Harga Satuan: Rp " + formatter.format(hargaBarang));
        System.out.println("Jumlah      : " + jumlahBarang);
        System.out.println("Total       : Rp " + formatter.format(totalBelanjaAwal));
        System.out.println("Diskon      : Rp " + formatter.format(jumlahDiskonTotal));
        System.out.println("Total Bayar : Rp " + formatter.format(totalBayar));
        System.out.println("====================================");
    }
}