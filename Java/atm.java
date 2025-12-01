import java.util.Scanner;

public class atm {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan nama Anda: ");
        String nama = input.nextLine();

        while (true) {
            System.out.print("Hallo, " + nama + "! Apakah nama kamu sudah benar? (y/n): ");
            String konfirmasi = input.nextLine();

            if (konfirmasi.equalsIgnoreCase("y")) {
                break;
            } else if (konfirmasi.equalsIgnoreCase("n")) {
                System.out.print("Masukkan nama Anda kembali: ");
                nama = input.nextLine();
            } else {
                System.out.println("Input tidak valid. Silakan masukkan 'y' atau 'n'.");
            }
        }

        System.out.print("Masukkan saldo awal Anda: Rp ");
        double saldo = input.nextDouble();
        input.nextLine(); 

        System.out.println("\nSelamat datang di ATM, " + nama + "!");
        System.out.println("Saldo awal Anda: Rp " + saldo);

        System.out.println("\nPilih operasi yang ingin Anda lakukan:");
        System.out.println("1. Cek Saldo");
        System.out.println("2. Tarik Tunai");
        System.out.println("3. Transfer");
        System.out.println("4. Keluar");

        System.out.print("Masukkan pilihan Anda (1-4): ");
        int pilihan = input.nextInt();
        input.nextLine();

        switch (pilihan) {
            case 1:
                System.out.println("Saldo Anda saat ini: Rp " + saldo);
                break;

            case 2:
                System.out.print("Masukkan jumlah uang yang ingin Anda tarik: Rp ");
                double tarik = input.nextDouble();
                if (tarik > saldo) {
                    System.out.println("Saldo tidak mencukupi. Saldo Anda: Rp " + saldo);
                } else {
                    saldo -= tarik;
                    System.out.println("Penarikan berhasil! Saldo Anda saat ini: Rp " + saldo);
                }
                break;

            case 3:
                System.out.print("Masukkan nomor rekening tujuan: ");
                String rekening = input.next();

                System.out.print("Masukkan jumlah uang yang ingin Anda transfer: Rp ");
                double transfer = input.nextDouble();

                if (transfer > saldo) {
                    System.out.println("Saldo tidak mencukupi. Saldo Anda: Rp " + saldo);
                } else {
                    saldo -= transfer;
                    System.out.println("Transfer Rp " + transfer + " ke rekening " + rekening + " berhasil.");
                    System.out.println("Saldo Anda saat ini: Rp " + saldo);
                }
                break;

            case 4:
                System.out.println("Terima kasih telah menggunakan ATM. Sampai jumpa!");
                break;

            default:
                System.out.println("Pilihan tidak valid. Masukkan angka 1-4.");
                break;
        }

        input.close();
    }
}
